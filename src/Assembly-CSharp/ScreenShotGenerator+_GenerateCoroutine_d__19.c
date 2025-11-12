
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::ScreenShotGenerator+<GenerateCoroutine>d__19::
     ScreenShotGenerator_GenerateCoroutine_d_19_MoveNext
               (ScreenShotGenerator_GenerateCoroutine_d_19 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Nullable<UnityEngine::Bounds>__get_HasValue__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<UnityEngine::Bounds>__get_Value__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ScreenShotGenerator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__WaitForEndOfFrame);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Preview);
    LOCK();
    UNLOCK();
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
    if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
      FUN_?();
    }
    pNVar4 = SharedCubeFunctions::SharedCubeFunctions_GetAxisAlignedBoundsRecursively
                        (&NStack_5,pTVar3,(MethodInfo *)0x0);
    fVar6 = (pNVar4->value).m_Center.x;
    fVar7 = (pNVar4->value).m_Center.y;
    fVar8 = (pNVar4->value).m_Center.z;
    fVar9 = (pNVar4->value).m_Extents.x;
    fVar10 = (pNVar4->value).m_Extents.y;
    fVar11 = (pNVar4->value).m_Extents.z;
    if ((char)*(undefined4 *)pNVar4 == '\0') {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar6 = (pVVar12->zeroVector).x;
      fVar7 = (pVVar12->zeroVector).y;
      fVar8 = (pVVar12->zeroVector).z;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar13 = (pVVar12->oneVector).x;
      fVar9 = (float)uVar13 * _UNK_?;
      fVar10 = (pVVar12->oneVector).y * _UNK_?;
      fVar11 = (pVVar12->oneVector).z * _UNK_?;
      if (this_00 == (ScreenShotGenerator *)0x0) goto code_?;
    }
    else if (this_00 == (ScreenShotGenerator *)0x0) goto code_?;
    (this_00->fields).targetBounds.m_Center.x = fVar6;
    (this_00->fields).targetBounds.m_Center.y = fVar7;
    (this_00->fields).targetBounds.m_Center.z = fVar8;
    (this_00->fields).targetBounds.m_Extents.x = fVar9;
    (this_00->fields).targetBounds.m_Extents.y = fVar10;
    (this_00->fields).targetBounds.m_Extents.z = fVar11;
    ScreenShotGenerator::ScreenShotGenerator_InitCamera(this_00,0x200,0x200,(MethodInfo *)0x0);
    pGVar2 = (this_00->fields).targetObject;
    if (pGVar2 != (GameObject *)0x0) {
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar2,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__ScreenShotGenerator->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ScreenShotGenerator);
      }
      layersToChange.m_Mask = TypeInfo__ScreenShotGenerator->static_fields->renderLayers;
      layer = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                        (StringLiteral_Preview,(MethodInfo *)0x0);
      LayerUtil::LayerUtil_SetLayerRecursively_2(pTVar3,layersToChange,layer,(MethodInfo *)0x0);
      pOVar14 = (Object *)FUN_?(TypeInfo__UnityEngine__WaitForEndOfFrame);
      bVar15 = iRam_? != 0;
      (this->fields).__2__current = pOVar14;
      if (bVar15) {
        uVar16 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
        uVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6);
        do {
          uVar18 = *(ulonglong *)(uVar17 * 8 + 0xADDR);
          puVar19 = (ulonglong *)(uVar17 * 8 + 0xADDR);
          LOCK();
          bVar15 = uVar18 == *puVar19;
          if (bVar15) {
            *puVar19 = uVar18 | 1L << (uVar16 & 0x3f);
          }
          UNLOCK();
        } while (!bVar15);
      }
      (this->fields).__1__state = 1;
      return 1;
    }
  }
code_?:
  FUN_?();
  pcVar20 = (code *)swi(3);
  bVar21 = (*pcVar20)();
  return bVar21;
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
  uVar1 = func_?(&
                              MethodInfo__ScreenShotGenerator___GenerateCoroutine_d__19__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

