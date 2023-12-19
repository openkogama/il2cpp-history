
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
                        ((Nullable_1_UnityEngine_Bounds_ *)&stack0xffffffd4,pTVar3,
                         (MethodInfo *)0x0);
    if (pNVar4->hasValue == 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar6 = (pVVar5->zeroVector).x;
      uVar7 = (pVVar5->zeroVector).y;
      fVar8 = (pVVar5->zeroVector).z;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar9 = (pVVar5->oneVector).x;
      uVar10 = (pVVar5->oneVector).y;
      fVar11 = (float)uVar9 * _UNK_?;
      fVar12 = (float)uVar10 * _UNK_?;
      fVar13 = (pVVar5->oneVector).z * _UNK_?;
      if (this_00 == (ScreenShotGenerator *)0x0) goto code_?;
      (this_00->fields).targetBounds.m_Center.x = (float)uVar6;
      (this_00->fields).targetBounds.m_Center.y = (float)uVar7;
      (this_00->fields).targetBounds.m_Center.z = fVar8;
      (this_00->fields).targetBounds.m_Extents.x = fVar11;
      (this_00->fields).targetBounds.m_Extents.y = fVar12;
      (this_00->fields).targetBounds.m_Extents.z = fVar13;
    }
    else {
      pBVar14 = mscorlib.dll::System::Nullable`1[UnityEngine::Bounds]::
                Nullable_1_UnityEngine_Bounds__get_Value
                          ((Bounds *)&stack0xffffffd8,
                           (Nullable_1_UnityEngine_Bounds_ *)&stack0xffffffb8,
                           MethodInfo__System__Nullable<UnityEngine::Bounds>__get_Value__);
      fVar11 = (pBVar14->m_Extents).y;
      fVar15 = (pBVar14->m_Extents).z;
      fVar8 = (pBVar14->m_Center).y;
      fVar13 = (pBVar14->m_Center).z;
      fVar12 = (pBVar14->m_Extents).x;
      if (this_00 == (ScreenShotGenerator *)0x0) goto code_?;
      (this_00->fields).targetBounds.m_Center.x = (pBVar14->m_Center).x;
      (this_00->fields).targetBounds.m_Center.y = fVar8;
      (this_00->fields).targetBounds.m_Center.z = fVar13;
      (this_00->fields).targetBounds.m_Extents.x = fVar12;
      (this_00->fields).targetBounds.m_Extents.y = fVar11;
      (this_00->fields).targetBounds.m_Extents.z = fVar15;
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
           (int32_t)UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility
                    ::UnsafeUtility_AsRef_1
                              ((Void *)TypeInfo__ScreenShotGenerator->static_fields->renderLayers,
                               (MethodInfo *)0x0);
      layer = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                        (StringLiteral_Preview,(MethodInfo *)0x0);
      LayerUtil::LayerUtil_SetLayerRecursively_2(pTVar3,layersToChange,layer,(MethodInfo *)0x0);
      this_01 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor(this_01,(MethodInfo *)0x0);
      (this->fields).__2__current = (Object *)this_01;
      func_?();
      (this->fields).__1__state = 1;
      return 1;
    }
  }
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  bVar17 = (*pcVar16)();
  return bVar17;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::ScreenShotGenerator+<GenerateCoroutine>d__19::
     ScreenShotGenerator_GenerateCoroutine_d_19_System_Collections_IEnumerator_Reset
               (ScreenShotGenerator_GenerateCoroutine_d_19 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
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

