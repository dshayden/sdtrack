#pragma once

static double& gyro_sigma =
    CVarUtils::CreateCVar<>("sd.GyroUncertainty", IMU_GYRO_SIGMA, "");
static double& gyro_bias_sigma =
    CVarUtils::CreateCVar<>("sd.GyroBiasUncertainty", IMU_GYRO_BIAS_SIGMA, "");
static double& accel_sigma =
    CVarUtils::CreateCVar<>("sd.AccelUncertainty", IMU_ACCEL_SIGMA, "");
static double& accel_bias_sigma =
    CVarUtils::CreateCVar<>("sd.AccelBiasUncertainty", IMU_ACCEL_BIAS_SIGMA, "");

static int& pyramid_levels =
    CVarUtils::CreateCVar<>("sd.PyramidLevels", 4, "");
static int& patch_size =
    CVarUtils::CreateCVar<>("sd.PatchSize", 7, "");
static int& ba_debug_level =
    CVarUtils::CreateCVar<>("debug.BaDebugLevel",-1, "");
static int& num_ba_poses =
    CVarUtils::CreateCVar<>("sd.NumBAPoses",16, "");
static int& num_features =
    CVarUtils::CreateCVar<>("sd.NumFeatures",128, "");
static int& feature_cells =
    CVarUtils::CreateCVar<>("sd.FeatureCells",8, "");
static int& min_ba_poses =
    CVarUtils::CreateCVar<>("sd.MinBAPoses",16  , "");
static bool& use_imu_measurements =
    CVarUtils::CreateCVar<>("sd.UseImu", true, "");
static bool& do_outlier_rejection =
    CVarUtils::CreateCVar<>("sd.DoOutlierRejection", true, "");
static bool& reset_outliers =
    CVarUtils::CreateCVar<>("sd.ResetOutliers", false, "");
static double& outlier_threshold =
    CVarUtils::CreateCVar<>("sd.OutlierThreshold", 2.0, "");
static bool& use_dogleg =
    CVarUtils::CreateCVar<>("sd.UseDogleg", true, "");
static bool& regularize_biases_in_batch =
    CVarUtils::CreateCVar<>("sd.RegularizeBiasesInBatch", false, "");
static bool& do_keyframing =
    CVarUtils::CreateCVar<>("sd.DoKeyframing", true, "");
static bool& do_adaptive =
    CVarUtils::CreateCVar<>("sd.DoAdaptiveConditioning", true, "");
static bool& use_imu_for_guess =
    CVarUtils::CreateCVar<>("sd.UseImuForGuess", true, "");
static bool& use_robust_norm_for_proj =
    CVarUtils::CreateCVar<>("sd.UseRobustNormForProj", true, "");
static bool& use_only_imu =
    CVarUtils::CreateCVar<>("sd.UseOnlyImu", false, "");
static double& adaptive_threshold =
    CVarUtils::CreateCVar<>("sd.AdaptiveThreshold", 0.1, "");
static int& num_ba_iterations =
    CVarUtils::CreateCVar<>("sd.NumBAIterations", 200, "");
static int& min_poses_for_imu =
    CVarUtils::CreateCVar<>("sd.MinPosesForImu", num_ba_poses - 1, "");
static double& imu_extra_integration_time =
    CVarUtils::CreateCVar<>("sd.ImuExtraIntegrationTime", 0.3, "");
static double& imu_time_offset =
    CVarUtils::CreateCVar<>("sd.ImuTimeOffset", 0.0, "");
static double& tracker_center_weight =
    CVarUtils::CreateCVar<>("sd.TrackerCenterWeight", 100.0, "");
static double& ncc_threshold =
    CVarUtils::CreateCVar<>("sd.NCCThreshold", 0.925, "");
static Eigen::Vector3d& gravity_vector =
    CVarUtils::CreateCVar<>("sd.Gravity",
                            (Eigen::Vector3d)(Eigen::Vector3d(0, 0, -1) * ba::Gravity)
                            , "");

static bool& draw_landmarks =
    CVarUtils::CreateCVar<>("gui.DrawLandmarks", true, "");
static int& min_lm_measurements_for_drawing =
    CVarUtils::CreateCVar<>("gui.MinLmMeasurementsForDrawing", 2, "");
static int& selected_track_id =
    CVarUtils::CreateCVar<>("gui.SelectedTrackId", -1, "");
