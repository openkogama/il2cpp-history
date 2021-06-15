
/* IEnumerator GenerateTexture(Action`1[Byte[]]) */

IEnumerator *
Assembly-CSharp.dll::GenerateTextureData::GenerateTextureData_GenerateTexture
          (GenerateTextureData *this,Action_1_Byte_ *textureDataCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GenerateTextureData___GenerateTexture_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    this_00[1].fields.originalScale.z = (float)this;
    this_00[1].fields.originalScale.y = (float)textureDataCallback;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void GenerateTextureDataCameraView(Action`1[Byte[]]) */

void Assembly-CSharp.dll::GenerateTextureData::GenerateTextureData_GenerateTextureDataCameraView
               (GenerateTextureData *this,Action_1_Byte_ *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (TypeInfo__GenerateTextureData->static_fields->_IsCreatingScreenShot_k__BackingField == 0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    method_00 = TypeInfo__GenerateTextureData___GenerateTexture_c__Iterator0;
    this_00 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
    if (this_00 != (ScaleAnimationBase *)0x0) {
      this_00[1].fields.originalScale.y = (float)callback;
      this_00[1].fields.originalScale.z = (float)this;
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                ((MonoBehaviour *)this,(IEnumerator *)this_00,(MethodInfo *)0x0);
      return;
    }
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                  ((Component_1 *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
            ((Object *)StringLiteral_Texture_is_being_generated,(MethodInfo *)0x0);
  return;
}


/* Boolean get_IsCreatingScreenShot() */

bool Assembly-CSharp.dll::GenerateTextureData::GenerateTextureData_get_IsCreatingScreenShot
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  return TypeInfo__GenerateTextureData->static_fields->_IsCreatingScreenShot_k__BackingField;
}


/* Void set_IsCreatingScreenShot(Boolean) */

void Assembly-CSharp.dll::GenerateTextureData::GenerateTextureData_set_IsCreatingScreenShot
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__GenerateTextureData->static_fields->_IsCreatingScreenShot_k__BackingField = value;
  return;
}

