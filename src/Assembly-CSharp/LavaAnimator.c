
/* Void OnDisable() */

void Assembly-CSharp.dll::LavaAnimator::LavaAnimator_OnDisable
               (LavaAnimator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__NoiseATex);
    func_?(&StringLiteral__NoiseBTex);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.targetMaterial;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  if (pMVar1 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureOffset
              (pMVar1,StringLiteral__NoiseATex,
               TypeInfo__UnityEngine__Vector2->static_fields->zeroVector,(MethodInfo *)0x0);
    pMVar1 = (this->fields)._.targetMaterial;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector2);
      cRam_? = '\x01';
    }
    if (pMVar1 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureOffset
                (pMVar1,StringLiteral__NoiseBTex,
                 TypeInfo__UnityEngine__Vector2->static_fields->zeroVector,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::LavaAnimator::LavaAnimator_Update(LavaAnimator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__NoiseATex);
    func_?(&StringLiteral__NoiseBTex);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.targetMaterial;
  if (pMVar1 != (Material *)0x0) {
    VVar2 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetTextureOffset
                      (pMVar1,StringLiteral__NoiseATex,(MethodInfo *)0x0);
    fVar3 = (this->fields).speedA.x;
    fVar4 = (this->fields).speedA.y;
    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fStack_6 = VVar2.x;
    fStack_7 = VVar2.y;
    VVar2.y = fStack_7 + fVar4 * fVar5 * (this->fields).speed;
    VVar2.x = fStack_6 + fVar3 * fVar5 * (this->fields).speed;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureOffset
              (pMVar1,StringLiteral__NoiseATex,VVar2,(MethodInfo *)0x0);
    pMVar1 = (this->fields)._.targetMaterial;
    if (pMVar1 != (Material *)0x0) {
      VVar2 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetTextureOffset
                        (pMVar1,StringLiteral__NoiseBTex,(MethodInfo *)0x0);
      fVar3 = (this->fields).speedB.x;
      fVar4 = (this->fields).speedB.y;
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0)
      ;
      fStack_6 = VVar2.x;
      fStack_7 = VVar2.y;
      value.y = fStack_7 + fVar4 * fVar5 * (this->fields).speed;
      value.x = fStack_6 + fVar3 * fVar5 * (this->fields).speed;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureOffset
                (pMVar1,StringLiteral__NoiseBTex,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* LavaAnimator() */

void Assembly-CSharp.dll::LavaAnimator::LavaAnimator__ctor(LavaAnimator *this,MethodInfo *method)

{
  (this->fields).speedA.x = -0.9;
  (this->fields).speedA.y = -0.4;
  (this->fields).speedB.x = 0.49;
  (this->fields).speedB.y = 0.56;
  (this->fields).speed = 0.5;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

