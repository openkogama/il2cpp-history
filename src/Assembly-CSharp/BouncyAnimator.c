
/* Void OnDisable() */

void Assembly-CSharp.dll::BouncyAnimator::BouncyAnimator_OnDisable
               (BouncyAnimator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__BouncyTex);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.targetMaterial;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  if (pMVar1 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureOffset
              (pMVar1,StringLiteral__BouncyTex,
               TypeInfo__UnityEngine__Vector2->static_fields->zeroVector,(MethodInfo *)0x0);
    pMVar1 = (this->fields)._.targetMaterial;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector2);
      cRam_? = '\x01';
    }
    if (pMVar1 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureScale
                (pMVar1,StringLiteral__BouncyTex,
                 TypeInfo__UnityEngine__Vector2->static_fields->oneVector,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::BouncyAnimator::BouncyAnimator_Update
               (BouncyAnimator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__BouncyTex);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  dVar2 = (double)(fVar1 * _UNK_?);
  func_?();
  pMVar3 = (this->fields)._.targetMaterial;
  fVar1 = _UNK_? -
          (_UNK_? - (float)((uint)(float)dVar2 & _UNK_?)) * _UNK_?;
  fVar4 = (_UNK_? - fVar1) * _UNK_?;
  if (pMVar3 != (Material *)0x0) {
    value.y = fVar4;
    value.x = fVar4;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureOffset
              (pMVar3,StringLiteral__BouncyTex,value,(MethodInfo *)0x0);
    pMVar3 = (this->fields)._.targetMaterial;
    if (pMVar3 != (Material *)0x0) {
      value_00.y = fVar1;
      value_00.x = fVar1;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureScale
                (pMVar3,StringLiteral__BouncyTex,value_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

