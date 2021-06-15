
/* IEnumerator GenerateTexture(Action`1[Byte[]], Vector3, Quaternion, Int32, Int32) */

IEnumerator *
Assembly-CSharp.dll::ReviveScreenshotGenerator::ReviveScreenshotGenerator_GenerateTexture
          (ReviveScreenshotGenerator *this,Action_1_Byte_ *textureDataCallback,Vector3 cameraPos,
          Quaternion cameraRot,int32_t width,int32_t height,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ReviveScreenshotGenerator___GenerateTexture_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    this_00[1].fields._._._._.m_CachedPtr = (void *)height;
    this_00[1].fields.originalScale.y = cameraPos.x;
    this_00[1].fields.originalScale.z = cameraPos.y;
    this_00[1].fields.target = (Transform *)cameraPos.z;
    this_00[2].fields.originalScale.z = (float)textureDataCallback;
    this_00[2].fields.target = (Transform *)this;
    this_00[1].monitor = (MonitorData *)width;
    this_00[1].fields.testState = (int32_t)cameraRot.x;
    this_00[1].fields.OnScaleAnimationStopped =
         (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)cameraRot.y;
    this_00[2].klass = (ScaleAnimationBase__Class *)cameraRot.z;
    this_00[2].monitor = (MonitorData *)cameraRot.w;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void GenerateTextureDataCameraViewAtTransform(Action`1[Byte[]], Vector3, Quaternion, Int32,
   Int32) */

void Assembly-CSharp.dll::ReviveScreenshotGenerator::
     ReviveScreenshotGenerator_GenerateTextureDataCameraViewAtTransform
               (ReviveScreenshotGenerator *this,Action_1_Byte_ *callback,Vector3 cameraPos,
               Quaternion cameraRot,int32_t width,int32_t height,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ReviveScreenshotGenerator___GenerateTexture_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    this_00[1].fields._._._._.m_CachedPtr = (void *)height;
    this_00[1].fields.originalScale.y = cameraPos.x;
    this_00[1].fields.originalScale.z = cameraPos.y;
    this_00[1].fields.target = (Transform *)cameraPos.z;
    this_00[2].fields.originalScale.z = (float)callback;
    this_00[1].monitor = (MonitorData *)width;
    this_00[1].fields.testState = (int32_t)cameraRot.x;
    this_00[1].fields.OnScaleAnimationStopped =
         (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)cameraRot.y;
    this_00[2].klass = (ScaleAnimationBase__Class *)cameraRot.z;
    this_00[2].monitor = (MonitorData *)cameraRot.w;
    this_00[2].fields.target = (Transform *)this;
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,(IEnumerator *)this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

