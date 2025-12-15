
/* Boolean GetBooleanControl(KogamaControls, KeyState) */

bool Assembly-CSharp.dll::DesktopDefaultKeyboardMapping::
     DesktopDefaultKeyboardMapping_GetBooleanControl
               (DesktopDefaultKeyboardMapping *this,KogamaControls__Enum control,
               KeyState__Enum keyState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Unexpected_key_state_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__get_Item_KogamaControls_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).keyMapping;
  if (pDVar1 != (Dictionary_2_KogamaControls_UnityEngine_KeyCode__1 *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,control,
                        MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__get_Item_KogamaControls_
                       );
    uVar3 = 0;
    uVar4 = 0;
    if (pOVar2 != (Object *)0x0) {
      pOVar5 = pOVar2 + 2;
      for (; (int)uVar4 < *(int *)&pOVar2[1].monitor; uVar4 = uVar4 + 1) {
        if (*(uint *)&pOVar2[1].monitor <= uVar4) goto code_?;
        uVar6 = *(undefined4 *)&pOVar5->klass;
        pcVar7 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
          uVar8 = func_?(&UNK_?);
          FUN_?(uVar8,0);
          pcVar7 = (code *)swi(3);
          bVar9 = (*pcVar7)();
          return bVar9;
        }
        pcRam_? = pcVar7;
        cVar10 = (*pcRam_?)(uVar6);
        if (cVar10 != '\0') {
          pDVar11 = (this->fields).controlDown;
          bStackX_10 = 1;
          if ((pDVar11 == (DesktopDefaultKeyboardMapping_ControlBitArray *)0x0) ||
             (pBVar12 = (pDVar11->fields).controlDown, pBVar12 == (BitArray *)0x0))
          goto code_?;
          mscorlib.dll::System::Collections::BitArray::BitArray_Set
                    (pBVar12,control,1,(MethodInfo *)0x0);
          goto code_?;
        }
        pOVar5 = (Object *)((longlong)&pOVar5->klass + 4);
      }
      bStackX_10 = 0;
code_?:
      pDVar11 = (this->fields).controlDown;
      if ((pDVar11 != (DesktopDefaultKeyboardMapping_ControlBitArray *)0x0) &&
         (pBVar12 = (pDVar11->fields).controlDown, pBVar12 != (BitArray *)0x0)) {
        bVar9 = mscorlib.dll::System::Collections::BitArray::BitArray_Get
                          (pBVar12,control,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__get_Item_KogamaControls_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pDVar1 = (this->fields).keyMapping;
        bVar13 = 0;
        if ((pDVar1 != (Dictionary_2_KogamaControls_UnityEngine_KeyCode__1 *)0x0) &&
           (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Object]::
                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                               ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,control,
                                MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__get_Item_KogamaControls_
                               ), pOVar2 != (Object *)0x0)) {
          pOVar5 = pOVar2 + 2;
          for (; (int)uVar3 < *(int *)&pOVar2[1].monitor; uVar3 = uVar3 + 1) {
            if (*(uint *)&pOVar2[1].monitor <= uVar3) {
code_?:
              FUN_?();
              pcVar7 = (code *)swi(3);
              bVar9 = (*pcVar7)();
              return bVar9;
            }
            pDVar11 = (this->fields).controlDown;
            key = *(KeyCode__Enum *)&pOVar5->klass;
            if ((pDVar11 == (DesktopDefaultKeyboardMapping_ControlBitArray *)0x0) ||
               (pBVar12 = (pDVar11->fields).controlDown, pBVar12 == (BitArray *)0x0))
            goto code_?;
            bVar14 = mscorlib.dll::System::Collections::BitArray::BitArray_Get
                              (pBVar12,control,(MethodInfo *)0x0);
            if (((bVar14 == 0) ||
                (bVar14 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKey
                                   (key,(MethodInfo *)0x0), bVar14 != 0)) &&
               (bVar14 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKeyUp
                                  (key,(MethodInfo *)0x0), bVar14 == 0)) {
              pDVar11 = (this->fields).controlDown;
              if ((pDVar11 == (DesktopDefaultKeyboardMapping_ControlBitArray *)0x0) ||
                 (pBVar12 = (pDVar11->fields).controlDown, pBVar12 == (BitArray *)0x0))
              goto code_?;
              bVar14 = mscorlib.dll::System::Collections::BitArray::BitArray_Get
                                (pBVar12,control,(MethodInfo *)0x0);
              if (bVar14 != 0) {
                bVar13 = 0;
                goto code_?;
              }
            }
            else {
              bVar13 = 1;
            }
            pOVar5 = (Object *)((longlong)&pOVar5->klass + 4);
          }
          if (bVar13 != 0) {
            pDVar11 = (this->fields).controlDown;
            if ((pDVar11 == (DesktopDefaultKeyboardMapping_ControlBitArray *)0x0) ||
               (pBVar12 = (pDVar11->fields).controlDown, pBVar12 == (BitArray *)0x0))
            goto code_?;
            mscorlib.dll::System::Collections::BitArray::BitArray_Set
                      (pBVar12,control,0,(MethodInfo *)0x0);
          }
code_?:
          if (((keyState != KeyState__Enum_Up) &&
              (bVar13 = bStackX_10, keyState != KeyState__Enum_Down)) &&
             (bVar13 = bVar9, keyState != KeyState__Enum_Pressed)) {
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_Unexpected_key_state_,(MethodInfo *)0x0);
            bVar13 = 0;
          }
          return bVar13;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar9 = (*pcVar7)();
  return bVar9;
}


/* Boolean KeyDown(KogamaControls) */

bool Assembly-CSharp.dll::DesktopDefaultKeyboardMapping::DesktopDefaultKeyboardMapping_KeyDown
               (DesktopDefaultKeyboardMapping *this,KogamaControls__Enum control,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__get_Item_KogamaControls_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).keyMapping;
  if (this_00 != (Dictionary_2_KogamaControls_UnityEngine_KeyCode__1 *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,control,
                        MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__get_Item_KogamaControls_
                       );
    uVar2 = 0;
    if (pOVar1 != (Object *)0x0) {
      pOVar3 = pOVar1 + 2;
      while( true ) {
        if (*(int *)&pOVar1[1].monitor <= (int)uVar2) {
          return 0;
        }
        if (*(uint *)&pOVar1[1].monitor <= uVar2) break;
        uVar4 = *(undefined4 *)&pOVar3->klass;
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar5 = (code *)swi(3);
          bVar7 = (*pcVar5)();
          return bVar7;
        }
        pcRam_? = pcVar5;
        cVar8 = (*pcRam_?)(uVar4);
        if (cVar8 != '\0') {
          return 1;
        }
        uVar2 = uVar2 + 1;
        pOVar3 = (Object *)((longlong)&pOVar3->klass + 4);
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      bVar7 = (*pcVar5)();
      return bVar7;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar7 = (*pcVar5)();
  return bVar7;
}


/* Boolean KeyUp(KogamaControls) */

bool Assembly-CSharp.dll::DesktopDefaultKeyboardMapping::DesktopDefaultKeyboardMapping_KeyUp
               (DesktopDefaultKeyboardMapping *this,KogamaControls__Enum control,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__get_Item_KogamaControls_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).keyMapping;
  bVar1 = 0;
  if (this_00 != (Dictionary_2_KogamaControls_UnityEngine_KeyCode__1 *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,control,
                        MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__get_Item_KogamaControls_
                       );
    uVar3 = 0;
    if (pOVar2 != (Object *)0x0) {
      pOVar4 = pOVar2 + 2;
      while( true ) {
        if (*(int *)&pOVar2[1].monitor <= (int)uVar3) {
          return bVar1;
        }
        if (*(uint *)&pOVar2[1].monitor <= uVar3) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          bVar1 = (*pcVar5)();
          return bVar1;
        }
        pDVar6 = (this->fields).controlDown;
        key = *(KeyCode__Enum *)&pOVar4->klass;
        if ((pDVar6 == (DesktopDefaultKeyboardMapping_ControlBitArray *)0x0) ||
           (pBVar7 = (pDVar6->fields).controlDown, pBVar7 == (BitArray *)0x0)) break;
        bVar8 = mscorlib.dll::System::Collections::BitArray::BitArray_Get
                          (pBVar7,control,(MethodInfo *)0x0);
        if (((bVar8 == 0) ||
            (bVar8 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKey
                               (key,(MethodInfo *)0x0), bVar8 != 0)) &&
           (bVar8 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKeyUp
                              (key,(MethodInfo *)0x0), bVar8 == 0)) {
          pDVar6 = (this->fields).controlDown;
          if ((pDVar6 == (DesktopDefaultKeyboardMapping_ControlBitArray *)0x0) ||
             (pBVar7 = (pDVar6->fields).controlDown, pBVar7 == (BitArray *)0x0)) break;
          bVar8 = mscorlib.dll::System::Collections::BitArray::BitArray_Get
                            (pBVar7,control,(MethodInfo *)0x0);
          if (bVar8 != 0) {
            return 0;
          }
        }
        else {
          bVar1 = 1;
        }
        uVar3 = uVar3 + 1;
        pOVar4 = (Object *)((longlong)&pOVar4->klass + 4);
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar1 = (*pcVar5)();
  return bVar1;
}


/* Void Reset() */

void Assembly-CSharp.dll::DesktopDefaultKeyboardMapping::DesktopDefaultKeyboardMapping_Reset
               (DesktopDefaultKeyboardMapping *this,MethodInfo *method)

{
  pDVar1 = (this->fields).controlDown;
  if ((pDVar1 != (DesktopDefaultKeyboardMapping_ControlBitArray *)0x0) &&
     (pBVar2 = (pDVar1->fields).controlDown, pBVar2 != (BitArray *)0x0)) {
    iVar3 = (pBVar2->fields).m_length;
    this = (DesktopDefaultKeyboardMapping *)0x0;
    iVar4 = 0;
    if (0 < iVar3) {
      iVar3 = iVar3 + -1;
      iVar4 = ((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) + 1;
    }
    if (0 < iVar4) {
      lVar5 = 0x20;
      method = (MethodInfo *)this;
      do {
        pIVar6 = (pBVar2->fields).m_array;
        if (pIVar6 == (Int32__Array *)0x0) goto code_?;
        if ((uint)pIVar6->max_length <= (uint)this) {
          FUN_?();
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(undefined4 *)((longlong)pIVar6->vector + lVar5 + -0x20) = 0;
        this = (DesktopDefaultKeyboardMapping *)(ulonglong)((uint)this + 1);
        lVar5 = lVar5 + 4;
        method = (MethodInfo *)((longlong)&method->methodPointer + 1);
      } while ((longlong)method < (longlong)iVar4);
    }
    piVar8 = &(pBVar2->fields)._version;
    *piVar8 = *piVar8 + 1;
    return;
  }
code_?:
  FUN_?(this,method);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* DesktopDefaultKeyboardMapping() */

void Assembly-CSharp.dll::DesktopDefaultKeyboardMapping::DesktopDefaultKeyboardMapping__ctor
               (DesktopDefaultKeyboardMapping *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DesktopDefaultKeyboardMapping__ControlBitArray);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DesktopDefaultKeyboardMapping__Reset__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__KeyCode);
    LOCK();
    UNLOCK();
    FUN_?(&_4599282D3F9B45AF3BD85923032DA3555BB21379E7B4794D7CDC90902084CA13_Field);
    LOCK();
    UNLOCK();
    FUN_?(&F002D88D1605774CD2608C1D941E46CAD47C23D0F8E6530B87794DC9244A45AB_Field);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (DesktopDefaultKeyboardMapping_ControlBitArray *)
           FUN_?(TypeInfo__DesktopDefaultKeyboardMapping__ControlBitArray);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Collections__BitArray);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (BitArray *)FUN_?(TypeInfo__System__Collections__BitArray);
  mscorlib.dll::System::Collections::BitArray::BitArray__ctor_1(this_00,0x36,0,(MethodInfo *)0x0);
  iVar2 = iRam_?;
  (pDVar1->fields).controlDown = this_00;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&pDVar1->fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar2 = iRam_?;
    } while (!bVar7);
  }
  (this->fields).controlDown = pDVar1;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).controlDown >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerDesktop);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  a = TypeInfo__MVGameControllerDesktop->static_fields->_OnApplicationLostFocus_k__BackingField;
  this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  uVar8 = 0;
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_01,(Object *)this,MethodInfo__DesktopDefaultKeyboardMapping__Reset__,
             (MethodInfo *)0x0);
  pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)a,(Delegate *)this_01,(MethodInfo *)0x0);
  if (pDVar9 != (Delegate *)0x0) {
    pDVar10 = (Delegate *)0x0;
    if ((UnityAction__Class *)pDVar9->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pDVar10 = pDVar9;
    }
    if (pDVar10 == (Delegate *)0x0) {
      FUN_?(pDVar9);
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  FUN_?();
  this_02 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_02,
             MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Dictionary__
            );
  pOVar12 = (Object *)FUN_?(TypeInfo__UnityEngine__KeyCode,2);
  if (pOVar12 != (Object *)0x0) {
    if ((*(int *)&pOVar12[1].monitor == 0) ||
       (*(undefined4 *)&pOVar12[2].klass = 0x65, *(uint *)&pOVar12[1].monitor < 2))
    goto code_?;
    *(undefined4 *)((longlong)&pOVar12[2].klass + 4) = 0x20;
    if (this_02 != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0)
    {
      uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__TryInsert
                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,0x2c,pOVar12,
                 (InsertionBehavior__Enum)uVar8,
                 MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                 ->klass->rgctx_data[0x22].method);
      pOVar12 = (Object *)FUN_?(TypeInfo__UnityEngine__KeyCode,1);
      if (pOVar12 != (Object *)0x0) {
        if (*(int *)&pOVar12[1].monitor != 0) {
          *(undefined4 *)&pOVar12[2].klass = 99;
          uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]
          ::Dictionary_2_System_Int32Enum_System_Object__TryInsert
                    ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,0x2d,pOVar12,
                     (InsertionBehavior__Enum)uVar8,
                     MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                     ->klass->rgctx_data[0x22].method);
          pOVar12 = (Object *)FUN_?(TypeInfo__UnityEngine__KeyCode,1);
          if (pOVar12 == (Object *)0x0) goto code_?;
          if (*(int *)&pOVar12[1].monitor != 0) {
            *(undefined4 *)&pOVar12[2].klass = 0x143;
            uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__TryInsert
                      ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,5,pOVar12,
                       (InsertionBehavior__Enum)uVar8,
                       MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                       ->klass->rgctx_data[0x22].method);
            pOVar12 = (Object *)FUN_?(TypeInfo__UnityEngine__KeyCode,1);
            if (pOVar12 == (Object *)0x0) goto code_?;
            if (*(int *)&pOVar12[1].monitor != 0) {
              *(undefined4 *)&pOVar12[2].klass = 0x144;
              uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__TryInsert
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,6,pOVar12,
                         (InsertionBehavior__Enum)uVar8,
                         MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                         ->klass->rgctx_data[0x22].method);
              pOVar12 = (Object *)FUN_?(TypeInfo__UnityEngine__KeyCode,1);
              if (pOVar12 == (Object *)0x0) goto code_?;
              if (*(int *)&pOVar12[1].monitor != 0) {
                *(undefined4 *)&pOVar12[2].klass = 0x7f;
                uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__TryInsert
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,8,pOVar12,
                           (InsertionBehavior__Enum)uVar8,
                           MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                           ->klass->rgctx_data[0x22].method);
                pOVar12 = (Object *)FUN_?(TypeInfo__UnityEngine__KeyCode,1);
                if (pOVar12 == (Object *)0x0) goto code_?;
                if (*(int *)&pOVar12[1].monitor != 0) {
                  *(undefined4 *)&pOVar12[2].klass = 0x1b;
                  uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__TryInsert
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,9,pOVar12,
                             (InsertionBehavior__Enum)uVar8,
                             MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                             ->klass->rgctx_data[0x22].method);
                  pOVar12 = (Object *)FUN_?(TypeInfo__UnityEngine__KeyCode,2);
                  if (pOVar12 == (Object *)0x0) goto code_?;
                  if ((*(int *)&pOVar12[1].monitor != 0) &&
                     (*(undefined4 *)&pOVar12[2].klass = 0x130, 1 < *(uint *)&pOVar12[1].monitor)) {
                    *(undefined4 *)((longlong)&pOVar12[2].klass + 4) = 0x12f;
                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Object]::
                    Dictionary_2_System_Int32Enum_System_Object__TryInsert
                              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,10,pOVar12,
                               (InsertionBehavior__Enum)uVar8,
                               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                               ->klass->rgctx_data[0x22].method);
                    pOVar12 = (Object *)FUN_?(TypeInfo__UnityEngine__KeyCode,1);
                    if (pOVar12 == (Object *)0x0) goto code_?;
                    if (*(int *)&pOVar12[1].monitor != 0) {
                      *(undefined4 *)&pOVar12[2].klass = 0x7a;
                      uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,0xb,pOVar12,
                                 (InsertionBehavior__Enum)uVar8,
                                 MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                 ->klass->rgctx_data[0x22].method);
                      pOVar12 = (Object *)FUN_?(TypeInfo__UnityEngine__KeyCode,1);
                      if (pOVar12 == (Object *)0x0) goto code_?;
                      if (*(int *)&pOVar12[1].monitor != 0) {
                        *(undefined4 *)&pOVar12[2].klass = 0x78;
                        uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Object]::
                        Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,0xc,
                                   pOVar12,(InsertionBehavior__Enum)uVar8,
                                   MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                   ->klass->rgctx_data[0x22].method);
                        pAVar13 = (Array *)FUN_?(TypeInfo__UnityEngine__KeyCode,4);
                        mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
                        RuntimeHelpers_InitializeArray_1
                                  (pAVar13,
                                   __4599282D3F9B45AF3BD85923032DA3555BB21379E7B4794D7CDC90902084CA13_Field
                                   ,(MethodInfo *)0x0);
                        uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Object]::
                        Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,0xd,
                                   (Object *)pAVar13,(InsertionBehavior__Enum)uVar8,
                                   MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                   ->klass->rgctx_data[0x22].method);
                        pOVar12 = (Object *)FUN_?(TypeInfo__UnityEngine__KeyCode,1);
                        if (pOVar12 == (Object *)0x0) goto code_?;
                        if (*(int *)&pOVar12[1].monitor != 0) {
                          *(undefined4 *)&pOVar12[2].klass = 0x6f;
                          uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,System::Object]::
                          Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                    ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,0xe,
                                     pOVar12,(InsertionBehavior__Enum)uVar8,
                                     MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                     ->klass->rgctx_data[0x22].method);
                          pOVar12 = (Object *)FUN_?(TypeInfo__UnityEngine__KeyCode,1);
                          if (pOVar12 == (Object *)0x0) goto code_?;
                          if (*(int *)&pOVar12[1].monitor != 0) {
                            *(undefined4 *)&pOVar12[2].klass = 0x68;
                            uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32Enum,System::Object]::
                            Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                      ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,0x28,
                                       pOVar12,(InsertionBehavior__Enum)uVar8,
                                       MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                       ->klass->rgctx_data[0x22].method);
                            pOVar12 = (Object *)FUN_?(TypeInfo__UnityEngine__KeyCode,2);
                            if (pOVar12 == (Object *)0x0) goto code_?;
                            if ((*(int *)&pOVar12[1].monitor != 0) &&
                               (*(undefined4 *)&pOVar12[2].klass = 0x74,
                               1 < *(uint *)&pOVar12[1].monitor)) {
                              *(undefined4 *)((longlong)&pOVar12[2].klass + 4) = 0xd;
                              uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Int32Enum,System::Object]::
                              Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,0xf
                                         ,pOVar12,(InsertionBehavior__Enum)uVar8,
                                         MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                         ->klass->rgctx_data[0x22].method);
                              pOVar12 = (Object *)FUN_?(TypeInfo__UnityEngine__KeyCode,1);
                              if (pOVar12 == (Object *)0x0) goto code_?;
                              if (*(int *)&pOVar12[1].monitor != 0) {
                                *(undefined4 *)&pOVar12[2].klass = 0x6b;
                                uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
                                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Int32Enum,System::Object]::
                                Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,
                                           0x10,pOVar12,(InsertionBehavior__Enum)uVar8,
                                           MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                           ->klass->rgctx_data[0x22].method);
                                pOVar12 = (Object *)FUN_?(TypeInfo__UnityEngine__KeyCode,1);
                                if (pOVar12 == (Object *)0x0) goto code_?;
                                if (*(int *)&pOVar12[1].monitor != 0) {
                                  *(undefined4 *)&pOVar12[2].klass = 0x79;
                                  uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
                                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Int32Enum,System::Object]::
                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02
                                             ,0x11,pOVar12,(InsertionBehavior__Enum)uVar8,
                                             MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                             ->klass->rgctx_data[0x22].method);
                                  pOVar12 = (Object *)FUN_?(TypeInfo__UnityEngine__KeyCode,1)
                                  ;
                                  if (pOVar12 == (Object *)0x0) goto code_?;
                                  if (*(int *)&pOVar12[1].monitor != 0) {
                                    *(undefined4 *)&pOVar12[2].klass = 9;
                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
                                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                    ::Int32Enum,System::Object]::
                                    Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                              ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                               this_02,0x12,pOVar12,(InsertionBehavior__Enum)uVar8,
                                               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                               ->klass->rgctx_data[0x22].method);
                                    pOVar12 = (Object *)
                                             FUN_?(TypeInfo__UnityEngine__KeyCode,1);
                                    if (pOVar12 == (Object *)0x0) goto code_?;
                                    if (*(int *)&pOVar12[1].monitor != 0) {
                                      *(undefined4 *)&pOVar12[2].klass = 0x76;
                                      uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
                                      mscorlib.dll::System::Collections::Generic::
                                      Dictionary`2[System::Int32Enum,System::Object]::
                                      Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                                 this_02,0x13,pOVar12,(InsertionBehavior__Enum)uVar8
                                                 ,MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                      pOVar12 = (Object *)
                                               FUN_?(TypeInfo__UnityEngine__KeyCode,1);
                                      if (pOVar12 == (Object *)0x0) goto code_?;
                                      if (*(int *)&pOVar12[1].monitor != 0) {
                                        *(undefined4 *)&pOVar12[2].klass = 0x71;
                                        uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
                                        mscorlib.dll::System::Collections::Generic::
                                        Dictionary`2[System::Int32Enum,System::Object]::
                                        Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                                   this_02,0x2b,pOVar12,
                                                   (InsertionBehavior__Enum)uVar8,
                                                                                                      
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                        pOVar12 = (Object *)
                                                 FUN_?(TypeInfo__UnityEngine__KeyCode,1);
                                        if (pOVar12 == (Object *)0x0) goto code_?;
                                        if (*(int *)&pOVar12[1].monitor != 0) {
                                          *(undefined4 *)&pOVar12[2].klass = 0x65;
                                          uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
                                          mscorlib.dll::System::Collections::Generic::
                                          Dictionary`2[System::Int32Enum,System::Object]::
                                          Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                    ((Dictionary_2_System_Int32Enum_System_Object_ *
                                                     )this_02,0x14,pOVar12,
                                                     (InsertionBehavior__Enum)uVar8,
                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                          pOVar12 = (Object *)
                                                   FUN_?(TypeInfo__UnityEngine__KeyCode,1);
                                          if (pOVar12 == (Object *)0x0) goto code_?;
                                          if (*(int *)&pOVar12[1].monitor != 0) {
                                            *(undefined4 *)&pOVar12[2].klass = 0x76;
                                            uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
                                            mscorlib.dll::System::Collections::Generic::
                                            Dictionary`2[System::Int32Enum,System::Object]::
                                            Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                      ((Dictionary_2_System_Int32Enum_System_Object_
                                                        *)this_02,0x15,pOVar12,
                                                       (InsertionBehavior__Enum)uVar8,
                                                                                                              
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                            pOVar12 = (Object *)
                                                     FUN_?(TypeInfo__UnityEngine__KeyCode,1)
                                            ;
                                            if (pOVar12 == (Object *)0x0) goto code_?;
                                            if (*(int *)&pOVar12[1].monitor != 0) {
                                              *(undefined4 *)&pOVar12[2].klass = 0x70;
                                              uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
                                              mscorlib.dll::System::Collections::Generic::
                                              Dictionary`2[System::Int32Enum,System::Object]::
                                              Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                        ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x16,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                              pOVar12 = (Object *)
                                                       FUN_?(TypeInfo__UnityEngine__KeyCode,
                                                                     1);
                                              if (pOVar12 == (Object *)0x0)
                                              goto code_?;
                                              if (*(int *)&pOVar12[1].monitor != 0) {
                                                *(undefined4 *)&pOVar12[2].klass = 0x6c;
                                                uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
                                                mscorlib.dll::System::Collections::Generic::
                                                Dictionary`2[System::Int32Enum,System::Object]::
                                                Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                          ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x17,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                pOVar12 = (Object *)
                                                         FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,1);
                                                if (pOVar12 == (Object *)0x0)
                                                goto code_?;
                                                if (*(int *)&pOVar12[1].monitor != 0) {
                                                  *(undefined4 *)&pOVar12[2].klass = 0x67;
                                                  uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2
                                                                   );
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Int32Enum,System::Object]::
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x18,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,1);
                                                  if (pOVar12 == (Object *)0x0)
                                                  goto code_?;
                                                  if (*(int *)&pOVar12[1].monitor != 0) {
                                                    *(undefined4 *)&pOVar12[2].klass = 0x31;
                                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x19,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,1);
                                                  if (pOVar12 == (Object *)0x0)
                                                  goto code_?;
                                                  if (*(int *)&pOVar12[1].monitor != 0) {
                                                    *(undefined4 *)&pOVar12[2].klass = 0x32;
                                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x1a,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,1);
                                                  if (pOVar12 == (Object *)0x0)
                                                  goto code_?;
                                                  if (*(int *)&pOVar12[1].monitor != 0) {
                                                    *(undefined4 *)&pOVar12[2].klass = 0x33;
                                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x1b,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,1);
                                                  if (pOVar12 == (Object *)0x0)
                                                  goto code_?;
                                                  if (*(int *)&pOVar12[1].monitor != 0) {
                                                    *(undefined4 *)&pOVar12[2].klass = 0x34;
                                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x35,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,1);
                                                  if (pOVar12 == (Object *)0x0)
                                                  goto code_?;
                                                  if (*(int *)&pOVar12[1].monitor != 0) {
                                                    *(undefined4 *)&pOVar12[2].klass = 0x72;
                                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x1c,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,1);
                                                  if (pOVar12 == (Object *)0x0)
                                                  goto code_?;
                                                  if (*(int *)&pOVar12[1].monitor != 0) {
                                                    *(undefined4 *)&pOVar12[2].klass = 0x69;
                                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x1d,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,1);
                                                  if (pOVar12 == (Object *)0x0)
                                                  goto code_?;
                                                  if (*(int *)&pOVar12[1].monitor != 0) {
                                                    *(undefined4 *)&pOVar12[2].klass = 0x6e;
                                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x1e,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,1);
                                                  if (pOVar12 == (Object *)0x0)
                                                  goto code_?;
                                                  if (*(int *)&pOVar12[1].monitor != 0) {
                                                    *(undefined4 *)&pOVar12[2].klass = 0x66;
                                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x1f,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pAVar13 = (Array *)FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,9);
                                                  mscorlib.dll::System::Runtime::CompilerServices::
                                                  RuntimeHelpers::RuntimeHelpers_InitializeArray_1
                                                            (pAVar13,
                                                  _F002D88D1605774CD2608C1D941E46CAD47C23D0F8E6530B87794DC9244A45AB_Field
                                                  ,(MethodInfo *)0x0);
                                                  uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2
                                                                   );
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Int32Enum,System::Object]::
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x22,(Object *)pAVar13,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,2);
                                                  if (pOVar12 == (Object *)0x0)
                                                  goto code_?;
                                                  if ((*(int *)&pOVar12[1].monitor != 0) &&
                                                     (*(undefined4 *)&pOVar12[2].klass = 0xd,
                                                     1 < *(uint *)&pOVar12[1].monitor)) {
                                                    *(undefined4 *)((longlong)&pOVar12[2].klass + 4)
                                                         = 0x10f;
                                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x23,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,1);
                                                  if (pOVar12 == (Object *)0x0)
                                                  goto code_?;
                                                  if (*(int *)&pOVar12[1].monitor != 0) {
                                                    *(undefined4 *)&pOVar12[2].klass = 0x112;
                                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x25,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,1);
                                                  if (pOVar12 == (Object *)0x0)
                                                  goto code_?;
                                                  if (*(int *)&pOVar12[1].monitor != 0) {
                                                    *(undefined4 *)&pOVar12[2].klass = 0x111;
                                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x24,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,1);
                                                  if (pOVar12 == (Object *)0x0)
                                                  goto code_?;
                                                  if (*(int *)&pOVar12[1].monitor != 0) {
                                                    *(undefined4 *)&pOVar12[2].klass = 9;
                                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x26,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,2);
                                                  if (pOVar12 == (Object *)0x0)
                                                  goto code_?;
                                                  if ((*(int *)&pOVar12[1].monitor != 0) &&
                                                     (*(undefined4 *)&pOVar12[2].klass = 0x130,
                                                     1 < *(uint *)&pOVar12[1].monitor)) {
                                                    *(undefined4 *)((longlong)&pOVar12[2].klass + 4)
                                                         = 0x12f;
                                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x27,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,2);
                                                  if (pOVar12 == (Object *)0x0)
                                                  goto code_?;
                                                  if ((*(int *)&pOVar12[1].monitor != 0) &&
                                                     (*(undefined4 *)&pOVar12[2].klass = 0x6d,
                                                     1 < *(uint *)&pOVar12[1].monitor)) {
                                                    *(undefined4 *)((longlong)&pOVar12[2].klass + 4)
                                                         = 0x1b;
                                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x29,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,1);
                                                  if (pOVar12 == (Object *)0x0)
                                                  goto code_?;
                                                  if (*(int *)&pOVar12[1].monitor != 0) {
                                                    *(undefined4 *)&pOVar12[2].klass = 0x1b;
                                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x2a,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,2);
                                                  if (pOVar12 == (Object *)0x0)
                                                  goto code_?;
                                                  if ((*(int *)&pOVar12[1].monitor != 0) &&
                                                     (*(undefined4 *)&pOVar12[2].klass = 0x130,
                                                     1 < *(uint *)&pOVar12[1].monitor)) {
                                                    *(undefined4 *)((longlong)&pOVar12[2].klass + 4)
                                                         = 0x12f;
                                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x32,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,2);
                                                  if (pOVar12 == (Object *)0x0)
                                                  goto code_?;
                                                  if ((*(int *)&pOVar12[1].monitor != 0) &&
                                                     (*(undefined4 *)&pOVar12[2].klass = 0x77,
                                                     1 < *(uint *)&pOVar12[1].monitor)) {
                                                    *(undefined4 *)((longlong)&pOVar12[2].klass + 4)
                                                         = 0x111;
                                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x2e,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,2);
                                                  if (pOVar12 == (Object *)0x0)
                                                  goto code_?;
                                                  if ((*(int *)&pOVar12[1].monitor != 0) &&
                                                     (*(undefined4 *)&pOVar12[2].klass = 0x61,
                                                     1 < *(uint *)&pOVar12[1].monitor)) {
                                                    *(undefined4 *)((longlong)&pOVar12[2].klass + 4)
                                                         = 0x114;
                                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x2f,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,2);
                                                  if (pOVar12 == (Object *)0x0)
                                                  goto code_?;
                                                  if ((*(int *)&pOVar12[1].monitor != 0) &&
                                                     (*(undefined4 *)&pOVar12[2].klass = 100,
                                                     1 < *(uint *)&pOVar12[1].monitor)) {
                                                    *(undefined4 *)((longlong)&pOVar12[2].klass + 4)
                                                         = 0x113;
                                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x30,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,2);
                                                  if (pOVar12 == (Object *)0x0)
                                                  goto code_?;
                                                  if ((*(int *)&pOVar12[1].monitor != 0) &&
                                                     (*(undefined4 *)&pOVar12[2].klass = 0x73,
                                                     1 < *(uint *)&pOVar12[1].monitor)) {
                                                    *(undefined4 *)((longlong)&pOVar12[2].klass + 4)
                                                         = 0x112;
                                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x31,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,1);
                                                  if (pOVar12 == (Object *)0x0)
                                                  goto code_?;
                                                  if (*(int *)&pOVar12[1].monitor != 0) {
                                                    *(undefined4 *)&pOVar12[2].klass = 0x72;
                                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x33,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,1);
                                                  if (pOVar12 == (Object *)0x0)
                                                  goto code_?;
                                                  if (*(int *)&pOVar12[1].monitor != 0) {
                                                    *(undefined4 *)&pOVar12[2].klass = 0x6a;
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x34,pOVar12,
                                                  (InsertionBehavior__Enum)
                                                  CONCAT71((int7)((ulonglong)uVar8 >> 8),2),
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  bVar7 = iRam_? != 0;
                                                  (this->fields).keyMapping =
                                                       (
                                                  Dictionary_2_KogamaControls_UnityEngine_KeyCode__1
                                                  *)this_02;
                                                  if (bVar7) {
                                                    uVar3 = (uint)((ulonglong)&this->fields >> 0xc)
                                                    ;
                                                    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) *
                                                            8;
                                                    do {
                                                      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                                                      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                                                      LOCK();
                                                      bVar7 = uVar5 == *puVar6;
                                                      if (bVar7) {
                                                        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                                      }
                                                      UNLOCK();
                                                    } while (!bVar7);
                                                  }
                                                  return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
code_?:
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

