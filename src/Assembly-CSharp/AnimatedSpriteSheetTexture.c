
/* Void OnEnable() */

void Assembly-CSharp.dll::AnimatedSpriteSheetTexture::AnimatedSpriteSheetTexture_OnEnable
               (AnimatedSpriteSheetTexture *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AnimatedSpriteSheetTexture___UpdateTiling_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).testState = (int32_t)this;
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,(IEnumerator *)this_00,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  pRVar2 = (this->fields).textureRenderer;
  if (pRVar2 != (Renderer *)0x0) {
    pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterial
                       (pRVar2,(MethodInfo *)0x0);
    this_00 = (Material *)func_?(TypeInfo__UnityEngine__Material);
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor_1
              (this_00,pMVar3,(MethodInfo *)0x0);
    pRVar2 = (this->fields).textureRenderer;
    (this->fields).materialCopy = this_00;
    if (pRVar2 != (Renderer *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                (pRVar2,this_00,(MethodInfo *)0x0);
      fVar4 = _UNK_?;
      iVar5 = (this->fields).spriteHeight;
      iVar6 = (this->fields).spriteWidth;
      (this->fields).cellHeightMultiplier =
           (float)(iVar5 - (this->fields).spriteUnusedPixelHeight) / (float)iVar5;
      (this->fields).cellWidthMultiplier =
           (float)(iVar6 - (this->fields).spriteUnusedPixelWidth) / (float)iVar6;
      func_?(&VStack_1,fVar4 / (float)(this->fields).Columns,
                      fVar4 / (float)(this->fields).Rows,0);
      pRVar2 = (this->fields).textureRenderer;
      if (pRVar2 != (Renderer *)0x0) {
        pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                           (pRVar2,(MethodInfo *)0x0);
        if (pMVar3 != (Material *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureScale
                    (pMVar3,StringLiteral__MainTex,VStack_1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* IEnumerator UpdateTiling() */

IEnumerator *
Assembly-CSharp.dll::AnimatedSpriteSheetTexture::AnimatedSpriteSheetTexture_UpdateTiling
          (AnimatedSpriteSheetTexture *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AnimatedSpriteSheetTexture___UpdateTiling_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).testState = (int32_t)this;
    return (IEnumerator *)this_00;
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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

