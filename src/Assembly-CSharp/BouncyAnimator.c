
/* Void OnDisable() */

void Assembly-CSharp.dll::BouncyAnimator::BouncyAnimator_OnDisable
               (BouncyAnimator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__BouncyTex);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.targetMaterial;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VVar2 = TypeInfo__UnityEngine__Vector2->static_fields->zeroVector;
  if (pMVar1 != (Material *)0x0) {
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                      (StringLiteral__BouncyTex,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureOffsetImpl
              (pMVar1,iVar3,VVar2,(MethodInfo *)0x0);
    pMVar1 = (this->fields)._.targetMaterial;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector2);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VVar2 = TypeInfo__UnityEngine__Vector2->static_fields->oneVector;
    if (pMVar1 != (Material *)0x0) {
      iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                        (StringLiteral__BouncyTex,(MethodInfo *)0x0);
      aVStack_4[0] = VVar2;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Material>_UnityEngine__Material_
                      ,iVar3,VVar2,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Material);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pMVar1 == (Material *)0x0) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pvVar6 = (pMVar1->fields)._.m_CachedPtr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pMVar1,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
        FUN_?();
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(pvVar6,iVar3,aVStack_4);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::BouncyAnimator::BouncyAnimator_Update
               (BouncyAnimator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__BouncyTex);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  uVar4 = FUN_?(fVar3 * _UNK_?);
  pMVar5 = (this->fields)._.targetMaterial;
  fVar6 = _UNK_? - (_UNK_? - (float)(uVar4 & _UNK_?)) * _UNK_?;
  fVar3 = (_UNK_? - fVar6) * _UNK_?;
  if (pMVar5 != (Material *)0x0) {
    iVar7 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                      (StringLiteral__BouncyTex,(MethodInfo *)0x0);
    offset.y = fVar3;
    offset.x = fVar3;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureOffsetImpl
              (pMVar5,iVar7,offset,(MethodInfo *)0x0);
    pMVar5 = (this->fields)._.targetMaterial;
    if (pMVar5 != (Material *)0x0) {
      iVar7 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                        (StringLiteral__BouncyTex,(MethodInfo *)0x0);
      auStack_8[0] = CONCAT44(fVar6,fVar6);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Material>_UnityEngine__Material_
                      ,iVar7,auStack_8[0],0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Material);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pMVar5 == (Material *)0x0) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pvVar9 = (pMVar5->fields)._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pMVar5,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
        FUN_?();
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar9,iVar7,auStack_8);
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

