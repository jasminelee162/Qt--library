/*
 Navicat Premium Data Transfer

 Source Server         : zhao
 Source Server Type    : MySQL
 Source Server Version : 80025
 Source Host           : localhost:3306
 Source Schema         : library

 Target Server Type    : MySQL
 Target Server Version : 80025
 File Encoding         : 65001

 Date: 31/12/2024 10:02:47
*/

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- Table structure for books
-- ----------------------------
DROP TABLE IF EXISTS `books`;
CREATE TABLE `books`  (
  `book_id` int(0) NOT NULL AUTO_INCREMENT,
  `title` varchar(255) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL,
  `author` varchar(100) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL,
  `publisher` varchar(100) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL,
  `year` int(0) NULL DEFAULT NULL,
  `total_count` int(0) NULL DEFAULT NULL,
  `available_count` int(0) NULL DEFAULT NULL,
  `cover_image_url` varchar(255) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL,
  `description` text CHARACTER SET utf8 COLLATE utf8_general_ci NULL,
  PRIMARY KEY (`book_id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 6 CHARACTER SET = utf8 COLLATE = utf8_general_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of books
-- ----------------------------
INSERT INTO `books` VALUES (1, '活着', '余华', '中国文学出版社', 1992, 30, 28, NULL, NULL);
INSERT INTO `books` VALUES (3, '兄弟', '余华', '人民文学出版社', 2005, 40, 37, NULL, NULL);
INSERT INTO `books` VALUES (4, '测试', '神仙', '测试出版社', 2026, 10, 10, NULL, NULL);
INSERT INTO `books` VALUES (6, '测试', '无', '无', 0, 1, 0, 'C:/Users/1/Desktop/369.jpg', '这是一个测试');

-- ----------------------------
-- Table structure for borrow_info
-- ----------------------------
DROP TABLE IF EXISTS `borrow_info`;
CREATE TABLE `borrow_info`  (
  `borrow_id` int(0) NOT NULL AUTO_INCREMENT,
  `user_id` int(0) NULL DEFAULT NULL,
  `book_id` int(0) NULL DEFAULT NULL,
  `borrow_date` date NULL DEFAULT NULL,
  `return_date` date NULL DEFAULT NULL,
  `due_date` date NULL DEFAULT NULL,
  PRIMARY KEY (`borrow_id`) USING BTREE,
  INDEX `user_id`(`user_id`) USING BTREE,
  INDEX `book_id`(`book_id`) USING BTREE,
  CONSTRAINT `borrow_info_ibfk_1` FOREIGN KEY (`user_id`) REFERENCES `users` (`user_id`) ON DELETE RESTRICT ON UPDATE RESTRICT,
  CONSTRAINT `borrow_info_ibfk_2` FOREIGN KEY (`book_id`) REFERENCES `books` (`book_id`) ON DELETE RESTRICT ON UPDATE RESTRICT
) ENGINE = InnoDB AUTO_INCREMENT = 23 CHARACTER SET = utf8 COLLATE = utf8_general_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of borrow_info
-- ----------------------------
INSERT INTO `borrow_info` VALUES (17, 7, 1, '2024-12-28', NULL, '2025-01-17');
INSERT INTO `borrow_info` VALUES (18, 7, 3, '2024-12-28', NULL, '2025-01-17');
INSERT INTO `borrow_info` VALUES (19, 6, 1, '2024-12-28', NULL, '2025-01-17');
INSERT INTO `borrow_info` VALUES (20, 6, 3, '2024-12-28', NULL, '2025-01-17');
INSERT INTO `borrow_info` VALUES (21, 6, 4, '2024-12-28', '2024-12-28', '2025-01-17');
INSERT INTO `borrow_info` VALUES (22, 8, 3, '2024-12-28', NULL, '2025-01-17');
INSERT INTO `borrow_info` VALUES (23, 6, 4, '2024-12-28', '2024-12-28', '2025-01-17');
INSERT INTO `borrow_info` VALUES (24, 6, 6, '2024-12-30', NULL, '2025-01-19');

-- ----------------------------
-- Table structure for notifications
-- ----------------------------
DROP TABLE IF EXISTS `notifications`;
CREATE TABLE `notifications`  (
  `notification_id` int(0) NOT NULL AUTO_INCREMENT,
  `title` varchar(255) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL,
  `content` text CHARACTER SET utf8 COLLATE utf8_general_ci NULL,
  `publish_date` datetime(0) NULL DEFAULT NULL,
  PRIMARY KEY (`notification_id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 8 CHARACTER SET = utf8 COLLATE = utf8_general_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of notifications
-- ----------------------------
INSERT INTO `notifications` VALUES (6, '测试', '测试测试这是一条测试!', '2024-12-28 22:32:22');
INSERT INTO `notifications` VALUES (7, 'hahah', 'asdadadad', '2024-12-28 23:47:01');
INSERT INTO `notifications` VALUES (8, '测试', '哈哈哈哈哈哈', '2024-12-31 08:55:56');

-- ----------------------------
-- Table structure for user_notifications
-- ----------------------------
DROP TABLE IF EXISTS `user_notifications`;
CREATE TABLE `user_notifications`  (
  `user_id` int(0) NOT NULL,
  `notification_id` int(0) NOT NULL,
  `is_read` tinyint(1) NULL DEFAULT 0,
  `viewed_at` datetime(0) NULL DEFAULT NULL,
  PRIMARY KEY (`user_id`, `notification_id`) USING BTREE,
  INDEX `notification_id`(`notification_id`) USING BTREE,
  CONSTRAINT `user_notifications_ibfk_1` FOREIGN KEY (`user_id`) REFERENCES `users` (`user_id`) ON DELETE RESTRICT ON UPDATE RESTRICT,
  CONSTRAINT `user_notifications_ibfk_2` FOREIGN KEY (`notification_id`) REFERENCES `notifications` (`notification_id`) ON DELETE RESTRICT ON UPDATE RESTRICT
) ENGINE = InnoDB CHARACTER SET = utf8 COLLATE = utf8_general_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of user_notifications
-- ----------------------------
INSERT INTO `user_notifications` VALUES (6, 6, 1, '2024-12-30 17:32:25');
INSERT INTO `user_notifications` VALUES (6, 7, 1, '2024-12-30 17:43:44');
INSERT INTO `user_notifications` VALUES (6, 8, 1, '2024-12-31 08:56:20');

-- ----------------------------
-- Table structure for users
-- ----------------------------
DROP TABLE IF EXISTS `users`;
CREATE TABLE `users`  (
  `user_id` int(0) NOT NULL AUTO_INCREMENT,
  `username` varchar(50) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL,
  `password` varchar(100) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL,
  `email` varchar(100) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL,
  `role` int(0) NOT NULL DEFAULT 0,
  PRIMARY KEY (`user_id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 9 CHARACTER SET = utf8 COLLATE = utf8_general_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of users
-- ----------------------------
INSERT INTO `users` VALUES (5, 'admin', '123456', '147852369@qq.com', 1);
INSERT INTO `users` VALUES (6, 'user01', '123456', '258963147@qq.com', 0);
INSERT INTO `users` VALUES (7, 'user02', '123456', '14785236955@qq.com', 0);
INSERT INTO `users` VALUES (8, 'suerT', '123456', '12345678999@qq.com', 0);

SET FOREIGN_KEY_CHECKS = 1;
