
/* Void Awake() */

void Assembly-CSharp.dll::TeleportAnimator::TeleportAnimator_Awake
               (TeleportAnimator *this,MethodInfo *method)

{
  this_00 = (this->fields).teleportRenderer;
  if (this_00 == (Renderer *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                     (this_00,(MethodInfo *)0x0);
  bVar3 = iRam_? != 0;
  (this->fields)._material = pMVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields)._material >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::TeleportAnimator::TeleportAnimator_Update
               (TeleportAnimator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__MainTex);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = (this->fields)._material;
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
  fVar3 = fVar3 * _UNK_?;
  if (obj == (Material *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                    (StringLiteral__MainTex,(MethodInfo *)0x0);
  auStack_5[0] = (ulonglong)(uint)fVar3;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Material>_UnityEngine__Material_
                  ,iVar4,auStack_5[0],0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Material);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Material *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar6 = (obj->fields)._.m_CachedPtr;
  if (pvVar6 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
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
  (*pcRam_?)(pvVar6,iVar4,auStack_5);
  return;
}

