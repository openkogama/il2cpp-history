
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::ScreenShotGenerator+<GenerateCoroutine>c__Iterator0::
     ScreenShotGenerator_GenerateCoroutine_c_Iterator0_MoveNext
               (ScreenShotGenerator_GenerateCoroutine_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar1 == 0) {
    pGVar2 = (this->fields).obj;
    if (pGVar2 != (GameObject *)0x0) {
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar2,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
        func_?(TypeInfo__SharedCubeFunctions);
      }
      pNVar4 = SharedCubeFunctions::SharedCubeFunctions_GetAxisAlignedBoundsRecursively
                          ((Nullable_1_UnityEngine_Bounds_ *)&stack0xffffffcc,pTVar3,
                           (MethodInfo *)0x0);
      this_00 = &(this->fields)._bounds___0;
      fVar5 = (pNVar4->value).m_Center.y;
      fVar6 = (pNVar4->value).m_Center.z;
      fVar7 = (pNVar4->value).m_Extents.x;
      fVar8 = (pNVar4->value).m_Extents.y;
      fVar9 = (pNVar4->value).m_Extents.z;
      bVar10 = pNVar4->has_value;
      uVar11 = *(undefined3 *)&pNVar4->field_0x19;
      (this_00->value).m_Center.x = (pNVar4->value).m_Center.x;
      (this->fields)._bounds___0.value.m_Center.y = fVar5;
      (this->fields)._bounds___0.value.m_Center.z = fVar6;
      (this->fields)._bounds___0.value.m_Extents.x = fVar7;
      (this->fields)._bounds___0.value.m_Extents.y = fVar8;
      (this->fields)._bounds___0.value.m_Extents.z = fVar9;
      (this->fields)._bounds___0.has_value = bVar10;
      *(undefined3 *)&(this->fields)._bounds___0.field_0x19 = uVar11;
      uVar12 = System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
              Byte]::
              Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte__System_Collections_Generic_IEnumerator_TResult__get_Current
                        ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte_ *)this_00,
                         MethodInfo__System__Nullable<UnityEngine::Bounds>__get_HasValue__);
      pSVar13 = (this->fields)._this;
      if (uVar12 == 0) {
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                            (&VStack_15,(MethodInfo *)0x0);
        uStack_16._0_4_ = pVVar14->x;
        uStack_16._4_4_ = pVVar14->y;
        fVar6 = pVVar14->z;
        pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                            (&VStack_15,(MethodInfo *)0x0);
        fVar5 = pVVar14->x;
        uVar17 = pVVar14->y;
        fVar9 = pVVar14->z;
        VStack_15.x = 0.0;
        uVar18 = uStack_16;
        func_?();
        if (pSVar13 == (ScreenShotGenerator *)0x0) goto code_?;
        fVar7 = (float)uVar18;
        fVar8 = SUB84(uVar18,4);
        uVar18 = CONCAT44(fVar9,uVar17);
      }
      else {
        pfVar19 = (float *)func_?();
        uVar18 = *(undefined8 *)(pfVar19 + 4);
        fVar7 = *pfVar19;
        fVar8 = pfVar19[1];
        fVar6 = pfVar19[2];
        fVar5 = pfVar19[3];
        if (pSVar13 == (ScreenShotGenerator *)0x0) goto code_?;
      }
      (pSVar13->fields).targetBounds.m_Center.x = fVar7;
      (pSVar13->fields).targetBounds.m_Center.y = fVar8;
      (pSVar13->fields).targetBounds.m_Center.z = fVar6;
      (pSVar13->fields).targetBounds.m_Extents.x = fVar5;
      (pSVar13->fields).targetBounds.m_Extents.y = (float)(int)uVar18;
      (pSVar13->fields).targetBounds.m_Extents.z = (float)(int)((ulonglong)uVar18 >> 0x20);
      pSVar13 = (this->fields)._this;
      if (pSVar13 != (ScreenShotGenerator *)0x0) {
        ScreenShotGenerator::ScreenShotGenerator_InitCamera(pSVar13,0x200,0x200,(MethodInfo *)0x0);
        pSVar13 = (this->fields)._this;
        if ((pSVar13 != (ScreenShotGenerator *)0x0) &&
           (pGVar2 = (pSVar13->fields).targetObject, pGVar2 != (GameObject *)0x0)) {
          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar2,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__ScreenShotGenerator->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__ScreenShotGenerator->_1).cctor_started == 0)) {
            func_?();
          }
          layersToChange.m_Mask =
               (int32_t)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                  ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                    *)TypeInfo__ScreenShotGenerator->static_fields->renderLayers,
                                   (MethodInfo *)0x0);
          layer = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                            (StringLiteral_Preview,(MethodInfo *)0x0);
          LayerUtil::LayerUtil_SetLayerRecursively_2(pTVar3,layersToChange,layer,(MethodInfo *)0x0)
          ;
          this_01 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)func_?();
          WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
          WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_01,(MethodInfo *)0x0);
          (this->fields)._current = (Object *)this_01;
          if ((this->fields)._disposing == 0) {
            (this->fields)._PC = 1;
          }
          return 1;
        }
      }
    }
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    pSVar13 = (this->fields)._this;
    if (pSVar13 != (ScreenShotGenerator *)0x0) {
      ScreenShotGenerator::ScreenShotGenerator_GenerateTexture(pSVar13,(MethodInfo *)0x0);
      pSVar13 = (this->fields)._this;
      if (pSVar13 != (ScreenShotGenerator *)0x0) {
        (pSVar13->fields).generating = 0;
        (this->fields)._PC = -1;
        return 0;
      }
    }
  }
code_?:
  func_?(0);
  pcVar20 = (code *)swi(3);
  bVar10 = (*pcVar20)();
  return bVar10;
}


/* Void Reset() */

void Assembly-CSharp.dll::ScreenShotGenerator+<GenerateCoroutine>c__Iterator0::
     ScreenShotGenerator_GenerateCoroutine_c_Iterator0_Reset
               (ScreenShotGenerator_GenerateCoroutine_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

