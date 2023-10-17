
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::ScreenShotGenerator+<GenerateCoroutine>d__19::
     ScreenShotGenerator_GenerateCoroutine_d_19_MoveNext
               (ScreenShotGenerator_GenerateCoroutine_d_19 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<UnityEngine::Bounds>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<UnityEngine::Bounds>__get_Value__);
    func_?(&TypeInfo__ScreenShotGenerator);
    func_?(&TypeInfo__SharedCubeFunctions);
    func_?(&TypeInfo__UnityEngine__WaitForEndOfFrame);
    func_?(&StringLiteral_Preview);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      (this->fields).__1__state = -1;
      if (this_00 == (ScreenShotGenerator *)0x0) goto code_?;
      ScreenShotGenerator::ScreenShotGenerator_GenerateTexture(this_00,(MethodInfo *)0x0);
      (this_00->fields).generating = 0;
    }
    return 0;
  }
  pGVar2 = (this->fields).obj;
  (this->fields).__1__state = -1;
  if (pGVar2 != (GameObject *)0x0) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar2,(MethodInfo *)0x0);
    if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SharedCubeFunctions);
    }
    pNVar4 = SharedCubeFunctions::SharedCubeFunctions_GetAxisAlignedBoundsRecursively
                        (&NStack_5,pTVar3,(MethodInfo *)0x0);
    if (pNVar4->hasValue == 0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_7._0_4_ = (pVVar6->zeroVector).x;
      uStack_7._4_4_ = (pVVar6->zeroVector).y;
      fVar8 = (pVVar6->zeroVector).z;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      NStack_5.value.m_Extents.y = 0.0;
      NStack_5.value.m_Extents.z = 0.0;
      NStack_5.value.m_Center.x = 0.0;
      NStack_5.value.m_Center.y = 0.0;
      NStack_5.value.m_Center.z = 0.0;
      NStack_5.value.m_Extents.x = 0.0;
      center.z = fVar8;
      center.x = (float)(undefined4)uStack_7;
      center.y = (float)uStack_7._4_4_;
      UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds__ctor
                (&NStack_5.value,center,TypeInfo__UnityEngine__Vector3->static_fields->oneVector,
                 (MethodInfo *)0x0);
      if (this_00 == (ScreenShotGenerator *)0x0) goto code_?;
      (this_00->fields).targetBounds.m_Center.x = NStack_5.value.m_Center.x;
      (this_00->fields).targetBounds.m_Center.y = NStack_5.value.m_Center.y;
      (this_00->fields).targetBounds.m_Center.z = NStack_5.value.m_Center.z;
      (this_00->fields).targetBounds.m_Extents.x = NStack_5.value.m_Extents.x;
      (this_00->fields).targetBounds.m_Extents.y = NStack_5.value.m_Extents.y;
      (this_00->fields).targetBounds.m_Extents.z = NStack_5.value.m_Extents.z;
    }
    else {
      pBVar9 = mscorlib.dll::System::Nullable`1[UnityEngine::Bounds]::
                Nullable_1_UnityEngine_Bounds__get_Value
                          (&NStack_5.value,(Nullable_1_UnityEngine_Bounds_ *)&stack0xffffffbc,
                           MethodInfo__System__Nullable<UnityEngine::Bounds>__get_Value__);
      fVar10 = (pBVar9->m_Extents).y;
      fVar11 = (pBVar9->m_Extents).z;
      fVar8 = (pBVar9->m_Center).y;
      fVar12 = (pBVar9->m_Center).z;
      fVar13 = (pBVar9->m_Extents).x;
      if (this_00 == (ScreenShotGenerator *)0x0) goto code_?;
      (this_00->fields).targetBounds.m_Center.x = (pBVar9->m_Center).x;
      (this_00->fields).targetBounds.m_Center.y = fVar8;
      (this_00->fields).targetBounds.m_Center.z = fVar12;
      (this_00->fields).targetBounds.m_Extents.x = fVar13;
      (this_00->fields).targetBounds.m_Extents.y = fVar10;
      (this_00->fields).targetBounds.m_Extents.z = fVar11;
    }
    ScreenShotGenerator::ScreenShotGenerator_InitCamera(this_00,0x200,0x200,(MethodInfo *)0x0);
    pGVar2 = (this_00->fields).targetObject;
    if (pGVar2 != (GameObject *)0x0) {
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar2,(MethodInfo *)0x0);
      if ((TypeInfo__ScreenShotGenerator->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      layersToChange.m_Mask =
           (int32_t)mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                              ((Void *)TypeInfo__ScreenShotGenerator->static_fields->renderLayers,
                               (MethodInfo *)0x0);
      layer = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                        (StringLiteral_Preview,(MethodInfo *)0x0);
      LayerUtil::LayerUtil_SetLayerRecursively_2(pTVar3,layersToChange,layer,(MethodInfo *)0x0);
      this_01 = (TweenRunner_1_FloatTween_ *)func_?();
      if (this_01 != (TweenRunner_1_FloatTween_ *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
        TweenRunner_1_FloatTween___ctor(this_01,(MethodInfo *)0x0);
        (this->fields).__2__current = (Object *)this_01;
        func_?(&(this->fields).__2__current,this_01);
        (this->fields).__1__state = 1;
        return 1;
      }
    }
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  bVar15 = (*pcVar14)();
  return bVar15;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::ScreenShotGenerator+<GenerateCoroutine>d__19::
     ScreenShotGenerator_GenerateCoroutine_d_19_System_Collections_IEnumerator_Reset
               (ScreenShotGenerator_GenerateCoroutine_d_19 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__ScreenShotGenerator___GenerateCoroutine_d__19__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

