
/* String ToString() */

String * Assembly-CSharp.dll::GreyOutObjectScript+PickupOriginalMaterials::
         GreyOutObjectScript_PickupOriginalMaterials_ToString
                   (GreyOutObjectScript_PickupOriginalMaterials *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_meshRenderer_enabled___0__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_meshRendererEnabled___0__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_GameObject___0__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).meshRenderer;
  if ((pMVar1 != (MeshRenderer *)0x0) &&
     (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pMVar1,(MethodInfo *)0x0), this_00 != (GameObject *)0x0)) {
    pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                       ((Object_1 *)this_00,(MethodInfo *)0x0);
    pSVar3 = StringLiteral_GameObject___0__;
    PStack_4._arg0 = (Object *)0x0;
    PStack_4._arg1 = (Object *)0x0;
    PStack_4._arg2 = (Object *)0x0;
    PStack_4._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor
              (&PStack_4,(Object *)pSVar2,(MethodInfo *)0x0);
    PStack_5._arg0 = PStack_4._arg0;
    PStack_5._arg1 = PStack_4._arg1;
    PStack_5._arg2 = PStack_4._arg2;
    PStack_5._args = PStack_4._args;
    pSVar3 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar3,&PStack_5,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_4
                       (::StringLiteral__,pSVar3,(MethodInfo *)0x0);
    pMVar1 = (this->fields).meshRenderer;
    if (pMVar1 != (MeshRenderer *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar6 = (pMVar1->fields)._._._.m_CachedPtr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pMVar1,(MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        pSVar3 = (String *)(*pcVar7)();
        return pSVar3;
      }
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar7 = (code *)swi(3);
        pSVar3 = (String *)(*pcVar7)();
        return pSVar3;
      }
      pcRam_? = pcVar7;
      abStackX_8[0] = (*pcRam_?)(pvVar6);
      pOVar9 = (Object *)FUN_?(uRam_?,abStackX_8);
      pSVar2 = StringLiteral_meshRenderer_enabled___0__;
      PStack_4._arg0 = (Object *)0x0;
      PStack_4._arg1 = (Object *)0x0;
      PStack_4._arg2 = (Object *)0x0;
      PStack_4._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_4,pOVar9,(MethodInfo *)0x0);
      PStack_5._arg0 = PStack_4._arg0;
      PStack_5._arg1 = PStack_4._arg1;
      PStack_5._arg2 = PStack_4._arg2;
      PStack_5._args = PStack_4._args;
      pSVar2 = mscorlib.dll::System::String::String_FormatHelper
                         ((IFormatProvider *)0x0,pSVar2,&PStack_5,(MethodInfo *)0x0);
      pSVar2 = mscorlib.dll::System::String::String_Concat_4(pSVar3,pSVar2,(MethodInfo *)0x0);
      abStackX_8[0] = (this->fields).meshRendererEnabled;
      pOVar9 = (Object *)FUN_?(uRam_?,abStackX_8);
      pSVar3 = StringLiteral_meshRendererEnabled___0__;
      PStack_4._arg0 = (Object *)0x0;
      PStack_4._arg1 = (Object *)0x0;
      PStack_4._arg2 = (Object *)0x0;
      PStack_4._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_4,pOVar9,(MethodInfo *)0x0);
      PStack_5._arg0 = PStack_4._arg0;
      PStack_5._arg1 = PStack_4._arg1;
      PStack_5._arg2 = PStack_4._arg2;
      PStack_5._args = PStack_4._args;
      pSVar3 = mscorlib.dll::System::String::String_FormatHelper
                         ((IFormatProvider *)0x0,pSVar3,&PStack_5,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::String::String_Concat_4(pSVar2,pSVar3,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar7)();
  return pSVar3;
}


/* GreyOutObjectScript+PickupOriginalMaterials(MeshRenderer) */

void Assembly-CSharp.dll::GreyOutObjectScript+PickupOriginalMaterials::
     GreyOutObjectScript_PickupOriginalMaterials__ctor
               (GreyOutObjectScript_PickupOriginalMaterials *this,MeshRenderer *meshRenderer,
               MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).meshRendererEnabled = 1;
  (this->fields).meshRenderer = meshRenderer;
  pGVar2 = this;
  pMVar3 = meshRenderer;
  if (bVar1) {
    uVar4 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    pMVar3 = (MeshRenderer *)(lVar5 + 0xADDR);
    method = (MethodInfo *)(ulonglong)(uVar4 & 0x3f);
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      pGVar2 = (GreyOutObjectScript_PickupOriginalMaterials *)(uVar6 | 1L << (longlong)method);
      LOCK();
      bVar1 = uVar6 == *(ulonglong *)(lVar5 + 0xADDR);
      if (bVar1) {
        *(ulonglong *)(lVar5 + 0xADDR) = (ulonglong)pGVar2;
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (meshRenderer == (MeshRenderer *)0x0) {
    FUN_?(pGVar2,pMVar3,method);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar8 = (meshRenderer->fields)._._._.m_CachedPtr;
  if (pvVar8 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)meshRenderer,(MethodInfo *)0x0);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pcRam_? = pcVar7;
  pMVar10 = (Material__Array *)(*pcRam_?)(pvVar8);
  bVar1 = iRam_? != 0;
  (this->fields).originalMaterials = pMVar10;
  if (bVar1) {
    uVar4 = (uint)((ulonglong)&(this->fields).originalMaterials >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar11 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar1 = uVar6 == *puVar11;
      if (bVar1) {
        *puVar11 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}

