
/* Void OnEnable() */

void Assembly-CSharp.dll::AnimatedSpriteSheetTexture::AnimatedSpriteSheetTexture_OnEnable
               (AnimatedSpriteSheetTexture *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AnimatedSpriteSheetTexture___UpdateTiling_d__20);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__AnimatedSpriteSheetTexture___UpdateTiling_d__20);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)this;
    func_?(value + 2,this);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::AnimatedSpriteSheetTexture::AnimatedSpriteSheetTexture_Start
               (AnimatedSpriteSheetTexture *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Material);
    func_?(&StringLiteral__MainTex);
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).textureRenderer;
  if (pRVar1 != (Renderer *)0x0) {
    pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterial
                       (pRVar1,(MethodInfo *)0x0);
    this_00 = (Material *)func_?(TypeInfo__UnityEngine__Material);
    if (this_00 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor_1
                (this_00,pMVar2,(MethodInfo *)0x0);
      (this->fields).materialCopy = this_00;
      func_?(&(this->fields).materialCopy,this_00);
      pRVar1 = (this->fields).textureRenderer;
      if (pRVar1 != (Renderer *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                  (pRVar1,(this->fields).materialCopy,(MethodInfo *)0x0);
        (this->fields).cellHeightMultiplier =
             (float)((this->fields).spriteHeight - (this->fields).spriteUnusedPixelHeight) /
             (float)(this->fields).spriteHeight;
        pRVar1 = (this->fields).textureRenderer;
        (this->fields).cellWidthMultiplier =
             (float)((this->fields).spriteWidth - (this->fields).spriteUnusedPixelWidth) /
             (float)(this->fields).spriteWidth;
        fVar3 = _UNK_? / (float)(this->fields).Columns;
        fVar4 = _UNK_? / (float)(this->fields).Rows;
        if (pRVar1 != (Renderer *)0x0) {
          pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                             (pRVar1,(MethodInfo *)0x0);
          if (pMVar2 != (Material *)0x0) {
            value.y = fVar4;
            value.x = fVar3;
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureScale
                      (pMVar2,StringLiteral__MainTex,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* IEnumerator UpdateTiling() */

IEnumerator *
Assembly-CSharp.dll::AnimatedSpriteSheetTexture::AnimatedSpriteSheetTexture_UpdateTiling
          (AnimatedSpriteSheetTexture *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AnimatedSpriteSheetTexture___UpdateTiling_d__20);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__AnimatedSpriteSheetTexture___UpdateTiling_d__20);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)this;
    func_?(value + 2,this);
    return (IEnumerator *)value;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* AnimatedSpriteSheetTexture() */

void Assembly-CSharp.dll::AnimatedSpriteSheetTexture::AnimatedSpriteSheetTexture__ctor
               (AnimatedSpriteSheetTexture *this,MethodInfo *method)

{
  (this->fields).Columns = 5;
  (this->fields).Rows = 5;
  (this->fields).FramesPerSecond = 10.0;
  (this->fields).RunOnce = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Single get_RunTimeInSeconds() */

float Assembly-CSharp.dll::AnimatedSpriteSheetTexture::
      AnimatedSpriteSheetTexture_get_RunTimeInSeconds
                (AnimatedSpriteSheetTexture *this,MethodInfo *method)

{
  return (float)((this->fields).Rows * (this->fields).Columns) *
         (_UNK_? / (this->fields).FramesPerSecond);
}

