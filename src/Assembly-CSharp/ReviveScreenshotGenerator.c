
/* IEnumerator GenerateTexture(Action`1[Byte[]], Vector3, Quaternion, Int32, Int32) */

IEnumerator *
Assembly-CSharp.dll::ReviveScreenshotGenerator::ReviveScreenshotGenerator_GenerateTexture
          (ReviveScreenshotGenerator *this,Action_1_Byte_ *textureDataCallback,Vector3 cameraPos,
          Quaternion cameraRot,int32_t width,int32_t height,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ReviveScreenshotGenerator___GenerateTexture_d__1);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ReviveScreenshotGenerator___GenerateTexture_d__1;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[7].klass = (Object__Class *)this;
  func_?(value + 7,this);
  value[6].monitor = (MonitorData *)textureDataCallback;
  func_?(&value[6].monitor,textureDataCallback);
  value[3].klass = (Object__Class *)cameraPos.x;
  value[3].monitor = (MonitorData *)cameraPos.y;
  value[4].klass = (Object__Class *)cameraPos.z;
  value[2].klass = (Object__Class *)width;
  value[2].monitor = (MonitorData *)height;
  value[4].monitor = (MonitorData *)cameraRot.x;
  value[5].klass = (Object__Class *)cameraRot.y;
  value[5].monitor = (MonitorData *)cameraRot.z;
  value[6].klass = (Object__Class *)cameraRot.w;
  return (IEnumerator *)value;
}


/* Void GenerateTextureDataCameraViewAtTransform(Action`1[Byte[]], Vector3, Quaternion, Int32,
   Int32) */

void Assembly-CSharp.dll::ReviveScreenshotGenerator::
     ReviveScreenshotGenerator_GenerateTextureDataCameraViewAtTransform
               (ReviveScreenshotGenerator *this,Action_1_Byte_ *callback,Vector3 cameraPos,
               Quaternion cameraRot,int32_t width,int32_t height,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ReviveScreenshotGenerator___GenerateTexture_d__1);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ReviveScreenshotGenerator___GenerateTexture_d__1;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[7].klass = (Object__Class *)this;
  func_?(value + 7,this);
  value[6].monitor = (MonitorData *)callback;
  func_?(&value[6].monitor,callback);
  value[3].klass = (Object__Class *)cameraPos.x;
  value[3].monitor = (MonitorData *)cameraPos.y;
  value[4].klass = (Object__Class *)cameraPos.z;
  value[2].klass = (Object__Class *)width;
  value[4].monitor = (MonitorData *)cameraRot.x;
  value[5].klass = (Object__Class *)cameraRot.y;
  value[5].monitor = (MonitorData *)cameraRot.z;
  value[6].klass = (Object__Class *)cameraRot.w;
  value[2].monitor = (MonitorData *)height;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
            ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
  return;
}

