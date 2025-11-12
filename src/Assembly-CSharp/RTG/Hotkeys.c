
/* Void AddPotentialOverlap(Hotkeys) */

void Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_AddPotentialOverlap
               (Hotkeys *this,Hotkeys *hotkeys,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::Hotkeys>__Add_RTG__Hotkeys_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((hotkeys == (Hotkeys *)0x0) || (hotkeys == this)) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::Hotkeys>__Contains_RTG__Hotkeys_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._potentialOverlaps;
  if (pLVar1 != (List_1_RTG_Hotkeys_ *)0x0) {
    if (((pLVar1->fields)._size != 0) &&
       (iVar2 = mscorlib.dll::System::Array::Array_IndexOf_69
                          ((Object__Array *)(pLVar1->fields)._items,(Object *)hotkeys,0,
                           (pLVar1->fields)._size,
                           (MethodInfo__System__Collections__Generic__List<RTG::Hotkeys>__Contains_RTG__Hotkeys_
                            ->klass->rgctx_data[0x17].method)->klass->rgctx_data[0x27].method),
       iVar2 != -1)) {
      return;
    }
    pMVar3 = MethodInfo__System__Collections__Generic__List<RTG::Hotkeys>__Add_RTG__Hotkeys_;
    pLVar1 = (this->fields)._potentialOverlaps;
    if (pLVar1 != (List_1_RTG_Hotkeys_ *)0x0) {
      piVar4 = &(pLVar1->fields)._version;
      *piVar4 = *piVar4 + 1;
      pHVar5 = (pLVar1->fields)._items;
      if (pHVar5 != (Hotkeys__Array *)0x0) {
        uVar6 = (pLVar1->fields)._size;
        if ((uint)pHVar5->max_length <= uVar6) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__AddWithResize
                    ((List_1_System_Object_ *)pLVar1,(Object *)hotkeys,
                     pMVar3->klass->rgctx_data[0xe].method);
          return;
        }
        (pLVar1->fields)._size = uVar6 + 1;
        if (uVar6 < (uint)pHVar5->max_length) {
          bVar7 = iRam_? != 0;
          pHVar5->vector[(int)uVar6] = hotkeys;
          if (bVar7) {
            uVar6 = (uint)((ulonglong)(pHVar5->vector + (int)uVar6) >> 0xc);
            puVar8 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar9 = *puVar8;
              LOCK();
              uVar10 = *puVar8;
              if (uVar9 == uVar10) {
                *puVar8 = uVar9 | 1L << (uVar6 & 0x3f);
              }
              UNLOCK();
            } while (uVar9 != uVar10);
          }
          return;
        }
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Boolean ContainsPotentialOverlap(Hotkeys) */

bool Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_ContainsPotentialOverlap
               (Hotkeys *this,Hotkeys *hotkeys,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::Hotkeys>__Contains_RTG__Hotkeys_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._potentialOverlaps;
  if (pLVar1 != (List_1_RTG_Hotkeys_ *)0x0) {
    if ((pLVar1->fields)._size == 0) {
      return 0;
    }
    iVar2 = mscorlib.dll::System::Array::Array_IndexOf_69
                      ((Object__Array *)(pLVar1->fields)._items,(Object *)hotkeys,0,
                       (pLVar1->fields)._size,
                       (MethodInfo__System__Collections__Generic__List<RTG::Hotkeys>__Contains_RTG__Hotkeys_
                        ->klass->rgctx_data[0x17].method)->klass->rgctx_data[0x27].method);
    return iVar2 != -1;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void EstablishPotentialOverlaps(List`1[RTG.Hotkeys]) */

void Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_EstablishPotentialOverlaps
               (List_1_RTG_Hotkeys_ *hotkeysCollection,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Hotkeys>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Hotkeys>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Hotkeys>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::Hotkeys>__GetEnumerator__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)0x0;
  LStack_1._index = 0;
  LStack_1._version = 0;
  LStack_1._current = (Object *)0x0;
  if (hotkeysCollection == (List_1_RTG_Hotkeys_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
    lVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (ulonglong)(uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  pLStack_9 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)(uint)(hotkeysCollection->fields)._version << 0x20);
  uStack_10 = 0;
  LStack_11._8_8_ = pLStack_9;
  LStack_11._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_9 = &LStack_11;
  LStack_11._list = (List_1_System_Object_ *)hotkeysCollection;
  do {
    bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_11,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Hotkeys>__MoveNext__
                      );
    this = LStack_11._current;
    if (bVar12 == 0) {
      return;
    }
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&pLStack_13 >> 0xc);
      lVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (ulonglong)(uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    lStack_14 = (ulonglong)(uint)(hotkeysCollection->fields)._version << 0x20;
    uStack_15 = 0;
    LStack_1._index = (undefined4)lStack_14;
    LStack_1._version = lStack_14._4_4_;
    LStack_1._current = (Object *)0x0;
    uStack_16 = 0;
    pLStack_17 = &LStack_1;
    pLStack_13 = hotkeysCollection;
    LStack_1._list = (List_1_System_Object_ *)hotkeysCollection;
    while (bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_1,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Hotkeys>__MoveNext__
                             ), bVar12 != 0) {
      if ((Hotkeys *)this == (Hotkeys *)0x0) {
        FUN_?();
        FUN_?();
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      Hotkeys_AddPotentialOverlap((Hotkeys *)this,(Hotkeys *)LStack_1._current,(MethodInfo *)0x0);
    }
  } while( true );
}


/* List`1[UnityEngine.KeyCode] GetAllUsedModifiers() */

List_1_UnityEngine_KeyCode_ *
Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_GetAllUsedModifiers(Hotkeys *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__Add_UnityEngine__KeyCode_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::KeyCode>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = (this->fields)._lMouseBtn != 0;
  cVar2 = bVar1 + '\x01';
  if ((this->fields)._rMouseBtn == 0) {
    cVar2 = bVar1;
  }
  cVar3 = cVar2 + '\x01';
  if ((this->fields)._mMouseBtn == 0) {
    cVar3 = cVar2;
  }
  if (cVar3 == '\0') {
    this_00 = (List_1_UnityEngine_KeyCode_ *)
              FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::KeyCode>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
               MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__List__);
  }
  else {
    this_00 = (List_1_UnityEngine_KeyCode_ *)
              FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::KeyCode>);
    pvVar4 = MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__List_int_->klass
             ->rgctx_data[3].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar4 + 0x135) & 1) == 0) {
      pvVar4 = (void *)FUN_?(pvVar4);
    }
    pKVar5 = (KeyCode__Enum__Array *)FUN_?(pvVar4,3);
    bVar1 = iRam_? != 0;
    (this_00->fields)._items = pKVar5;
    if (bVar1) {
      uVar6 = (uint)((ulonglong)&this_00->fields >> 0xc);
      puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar8 = *puVar7;
        LOCK();
        uVar9 = *puVar7;
        if (uVar8 == uVar9) {
          *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (uVar8 != uVar9);
    }
    if ((this->fields)._lAlt != 0) {
      FUN_?(this_00,0x134);
    }
    if ((this->fields)._lShift != 0) {
      FUN_?(this_00,0x130);
    }
    if ((this->fields)._lCtrl != 0) {
      FUN_?(this_00,0x132);
      return this_00;
    }
  }
  return this_00;
}


/* List`1[RTG.MouseButton] GetAllUsedMouseButtons() */

List_1_RTG_MouseButton_ *
Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_GetAllUsedMouseButtons(Hotkeys *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::MouseButton>__Add_RTG__MouseButton_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::MouseButton>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::MouseButton>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::MouseButton>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = (this->fields)._lMouseBtn != 0;
  cVar2 = bVar1 + '\x01';
  if ((this->fields)._rMouseBtn == 0) {
    cVar2 = bVar1;
  }
  cVar3 = cVar2 + '\x01';
  if ((this->fields)._mMouseBtn == 0) {
    cVar3 = cVar2;
  }
  if (cVar3 == '\0') {
    this_00 = (List_1_RTG_MouseButton_ *)
              FUN_?(TypeInfo__System__Collections__Generic__List<RTG::MouseButton>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
               MethodInfo__System__Collections__Generic__List<RTG::MouseButton>__List__);
  }
  else {
    this_00 = (List_1_RTG_MouseButton_ *)
              FUN_?(TypeInfo__System__Collections__Generic__List<RTG::MouseButton>);
    pvVar4 = MethodInfo__System__Collections__Generic__List<RTG::MouseButton>__List_int_->klass->
             rgctx_data[3].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar4 + 0x135) & 1) == 0) {
      pvVar4 = (void *)FUN_?(pvVar4);
    }
    pMVar5 = (MouseButton__Enum__Array *)FUN_?(pvVar4,3);
    bVar1 = iRam_? != 0;
    (this_00->fields)._items = pMVar5;
    if (bVar1) {
      uVar6 = (uint)((ulonglong)&this_00->fields >> 0xc);
      puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar8 = *puVar7;
        LOCK();
        uVar9 = *puVar7;
        if (uVar8 == uVar9) {
          *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (uVar8 != uVar9);
    }
    if ((this->fields)._lMouseBtn != 0) {
      FUN_?(this_00,0);
    }
    if ((this->fields)._rMouseBtn != 0) {
      FUN_?(this_00,1);
    }
    if ((this->fields)._mMouseBtn != 0) {
      FUN_?(this_00,2);
      return this_00;
    }
  }
  return this_00;
}


/* Int32 GetNumModifiers() */

int32_t Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_GetNumModifiers(Hotkeys *this,MethodInfo *method)

{
  bVar1 = (this->fields)._lAlt != 0;
  uVar2 = bVar1 + 1;
  if ((this->fields)._lCtrl == 0) {
    uVar2 = (uint)bVar1;
  }
  uVar3 = uVar2 + 1;
  if ((this->fields)._lShift == 0) {
    uVar3 = uVar2;
  }
  return uVar3;
}


/* Int32 GetNumMouseButtons() */

int32_t Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_GetNumMouseButtons
                  (Hotkeys *this,MethodInfo *method)

{
  bVar1 = (this->fields)._lMouseBtn != 0;
  uVar2 = bVar1 + 1;
  if ((this->fields)._rMouseBtn == 0) {
    uVar2 = (uint)bVar1;
  }
  uVar3 = uVar2 + 1;
  if ((this->fields)._mMouseBtn == 0) {
    uVar3 = uVar2;
  }
  return uVar3;
}


/* Boolean HasNoModifiers() */

bool Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_HasNoModifiers(Hotkeys *this,MethodInfo *method)

{
  if ((((this->fields)._lAlt == 0) && ((this->fields)._lCmd == 0)) && ((this->fields)._lCtrl == 0))
  {
    return (this->fields)._lShift == 0;
  }
  return 0;
}


/* Boolean HasNoMouseButtons() */

bool Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_HasNoMouseButtons(Hotkeys *this,MethodInfo *method)

{
  if (((this->fields)._lMouseBtn == 0) && ((this->fields)._rMouseBtn == 0)) {
    return (this->fields)._mMouseBtn == 0;
  }
  return 0;
}


/* Boolean IsActive(Boolean) */

bool Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_IsActive
               (Hotkeys *this,bool checkForOverlaps,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Hotkeys>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Hotkeys>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Hotkeys>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._isEnabled == 0) {
    return 0;
  }
  if ((this->fields)._key == 0) {
    if (((((this->fields)._lAlt == 0) && ((this->fields)._lCmd == 0)) &&
        ((this->fields)._lCtrl == 0)) && ((this->fields)._lShift == 0)) {
      if (((this->fields)._lMouseBtn == 0) && ((this->fields)._rMouseBtn == 0)) {
        bVar1 = (this->fields)._mMouseBtn == 0;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        return 0;
      }
    }
    if ((this->fields)._key != 0) goto code_?;
  }
  else {
code_?:
    bVar2 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKey
                      ((this->fields)._key,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return 0;
    }
  }
  if ((((this->fields)._useStrictModifierCheck == 0) || ((this->fields)._lAlt != 0)) ||
     ((this->fields)._lCmd != 0)) {
code_?:
    if ((this->fields)._lCtrl != 0) goto code_?;
  }
  else {
    if ((this->fields)._lCtrl == 0) {
      if (((this->fields)._lShift == 0) &&
         (bVar2 = Hotkeys_IsAnyModifierKeyPressed(this,(MethodInfo *)0x0), bVar2 != 0)) {
        return 0;
      }
      goto code_?;
    }
code_?:
    bVar2 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKey
                      (KeyCode__Enum_LeftControl,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return 0;
    }
  }
  if (((this->fields)._lCmd != 0) &&
     (bVar2 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKey
                        (KeyCode__Enum_LeftApple,(MethodInfo *)0x0), bVar2 == 0)) {
    return 0;
  }
  if (((this->fields)._lAlt != 0) &&
     (bVar2 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKey
                        (KeyCode__Enum_LeftAlt,(MethodInfo *)0x0), bVar2 == 0)) {
    return 0;
  }
  if (((this->fields)._lShift != 0) &&
     (bVar2 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKey
                        (KeyCode__Enum_LeftShift,(MethodInfo *)0x0), bVar2 == 0)) {
    return 0;
  }
  if ((this->fields)._useStrictMouseCheck == 0) {
code_?:
    if ((this->fields)._lMouseBtn == 0) goto code_?;
  }
  else if ((this->fields)._lMouseBtn == 0) {
    if ((((this->fields)._rMouseBtn == 0) && ((this->fields)._mMouseBtn == 0)) &&
       (bVar2 = Hotkeys_IsAnyMouseButtonPressed(this,(MethodInfo *)0x0), bVar2 != 0)) {
      return 0;
    }
    goto code_?;
  }
  bVar2 = RTInput::RTInput_IsLeftMouseButtonPressed((MethodInfo *)0x0);
  if (bVar2 == 0) {
    return 0;
  }
code_?:
  if ((((this->fields)._rMouseBtn == 0) ||
      (bVar2 = RTInput::RTInput_IsRightMouseButtonPressed((MethodInfo *)0x0), bVar2 != 0)) &&
     (((this->fields)._mMouseBtn == 0 ||
      (bVar2 = RTInput::RTInput_IsMiddleMouseButtonPressed((MethodInfo *)0x0), bVar2 != 0)))) {
    if (checkForOverlaps == 0) {
      return 1;
    }
    LStack_3._list = (List_1_System_Object_ *)(this->fields)._potentialOverlaps;
    if ((List_1_RTG_Hotkeys_ *)LStack_3._list == (List_1_RTG_Hotkeys_ *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      bVar2 = (*pcVar4)();
      return bVar2;
    }
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&uStack_6 >> 0xc);
      puVar7 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar8 = *puVar7;
        LOCK();
        uVar9 = *puVar7;
        if (uVar8 == uVar9) {
          *puVar7 = uVar8 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar8 != uVar9);
    }
    pLStack_10 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(((List_1_RTG_Hotkeys_ *)LStack_3._list)->fields)._version <<
                 0x20);
    uStack_11 = 0;
    LStack_3._8_8_ = pLStack_10;
    LStack_3._current = (Object *)0x0;
    uStack_6 = 0;
    pLStack_10 = &LStack_3;
    do {
      bVar2 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_3,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Hotkeys>__MoveNext__
                        );
      hotkeys = LStack_3._current;
      if (bVar2 == 0) {
        return 1;
      }
      if ((Hotkeys *)LStack_3._current == (Hotkeys *)0x0) {
        FUN_?();
        FUN_?();
        pcVar4 = (code *)swi(3);
        bVar2 = (*pcVar4)();
        return bVar2;
      }
      bVar2 = Hotkeys_IsActive((Hotkeys *)LStack_3._current,0,(MethodInfo *)0x0);
    } while ((bVar2 == 0) ||
            (bVar2 = Hotkeys_IsOverlappedBy(this,(Hotkeys *)hotkeys,(MethodInfo *)0x0), bVar2 == 0))
    ;
  }
  return 0;
}


/* Boolean IsActiveInFrame(Boolean) */

bool Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_IsActiveInFrame
               (Hotkeys *this,bool checkForOverlaps,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Hotkeys>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Hotkeys>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Hotkeys>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._isEnabled == 0) {
    return 0;
  }
  if ((this->fields)._key == 0) {
    if (((((this->fields)._lAlt == 0) && ((this->fields)._lCmd == 0)) &&
        ((this->fields)._lCtrl == 0)) && ((this->fields)._lShift == 0)) {
      if (((this->fields)._lMouseBtn == 0) && ((this->fields)._rMouseBtn == 0)) {
        bVar1 = (this->fields)._mMouseBtn == 0;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        return 0;
      }
    }
    if ((this->fields)._key != 0) goto code_?;
  }
  else {
code_?:
    bVar2 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKeyDown
                      ((this->fields)._key,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return 0;
    }
  }
  if ((((this->fields)._useStrictModifierCheck == 0) || ((this->fields)._lAlt != 0)) ||
     ((this->fields)._lCmd != 0)) {
code_?:
    if ((this->fields)._lCtrl != 0) goto code_?;
  }
  else {
    if ((this->fields)._lCtrl == 0) {
      if (((this->fields)._lShift == 0) &&
         (bVar2 = Hotkeys_IsAnyModifierKeyPressed(this,(MethodInfo *)0x0), bVar2 != 0)) {
        return 0;
      }
      goto code_?;
    }
code_?:
    bVar2 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKey
                      (KeyCode__Enum_LeftControl,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return 0;
    }
  }
  if (((this->fields)._lCmd != 0) &&
     (bVar2 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKey
                        (KeyCode__Enum_LeftApple,(MethodInfo *)0x0), bVar2 == 0)) {
    return 0;
  }
  if (((this->fields)._lAlt != 0) &&
     (bVar2 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKey
                        (KeyCode__Enum_LeftAlt,(MethodInfo *)0x0), bVar2 == 0)) {
    return 0;
  }
  if (((this->fields)._lShift != 0) &&
     (bVar2 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKey
                        (KeyCode__Enum_LeftShift,(MethodInfo *)0x0), bVar2 == 0)) {
    return 0;
  }
  if ((this->fields)._useStrictMouseCheck == 0) {
code_?:
    if ((this->fields)._lMouseBtn != 0) goto code_?;
  }
  else {
    if ((this->fields)._lMouseBtn == 0) {
      if ((((this->fields)._rMouseBtn == 0) && ((this->fields)._mMouseBtn == 0)) &&
         (bVar2 = Hotkeys_IsAnyMouseButtonPressed(this,(MethodInfo *)0x0), bVar2 != 0)) {
        return 0;
      }
      goto code_?;
    }
code_?:
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      bVar2 = (*pcVar3)();
      return bVar2;
    }
    pcRam_? = pcVar3;
    cVar5 = (*pcRam_?)();
    if (cVar5 == '\0') {
      return 0;
    }
  }
  if ((this->fields)._rMouseBtn != 0) {
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      bVar2 = (*pcVar3)();
      return bVar2;
    }
    pcRam_? = pcVar3;
    cVar5 = (*pcRam_?)();
    if (cVar5 == '\0') {
      return 0;
    }
  }
  if ((this->fields)._mMouseBtn != 0) {
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      goto code_?;
    }
    pcRam_? = pcVar3;
    cVar5 = (*pcRam_?)();
    if (cVar5 == '\0') {
      return 0;
    }
  }
  if (checkForOverlaps == 0) {
    return 1;
  }
  LStack_6._list = (List_1_System_Object_ *)(this->fields)._potentialOverlaps;
  if ((List_1_RTG_Hotkeys_ *)LStack_6._list == (List_1_RTG_Hotkeys_ *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    bVar2 = (*pcVar3)();
    return bVar2;
  }
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&uStack_8 >> 0xc);
    puVar9 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar10 = *puVar9;
      LOCK();
      uVar11 = *puVar9;
      if (uVar10 == uVar11) {
        *puVar9 = uVar10 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (uVar10 != uVar11);
  }
  pLStack_12 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)(uint)(((List_1_RTG_Hotkeys_ *)LStack_6._list)->fields)._version << 0x20
               );
  uStack_13 = 0;
  LStack_6._8_8_ = pLStack_12;
  LStack_6._current = (Object *)0x0;
  uStack_8 = 0;
  pLStack_12 = &LStack_6;
  while( true ) {
    bVar2 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_6,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::Hotkeys>__MoveNext__
                      );
    hotkeys = LStack_6._current;
    if (bVar2 == 0) {
      return 1;
    }
    if ((Hotkeys *)LStack_6._current == (Hotkeys *)0x0) break;
    bVar2 = Hotkeys_IsActiveInFrame((Hotkeys *)LStack_6._current,0,(MethodInfo *)0x0);
    if ((bVar2 != 0) &&
       (bVar2 = Hotkeys_IsOverlappedBy(this,(Hotkeys *)hotkeys,(MethodInfo *)0x0), bVar2 != 0)) {
      return 0;
    }
  }
code_?:
  FUN_?();
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean IsAnyModifierKeyPressed() */

bool Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_IsAnyModifierKeyPressed
               (Hotkeys *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    bVar3 = (*pcVar1)();
    return bVar3;
  }
  pcRam_? = pcVar1;
  cVar4 = (*pcRam_?)(0x132);
  if (cVar4 == '\0') {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      bVar3 = (*pcVar1)();
      return bVar3;
    }
    pcRam_? = pcVar1;
    cVar4 = (*pcRam_?)(0x136);
    if (cVar4 == '\0') {
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        bVar3 = (*pcVar1)();
        return bVar3;
      }
      pcRam_? = pcVar1;
      cVar4 = (*pcRam_?)(0x134);
      if ((cVar4 == '\0') &&
         (bVar3 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKey
                            (KeyCode__Enum_LeftShift,(MethodInfo *)0x0), bVar3 == 0)) {
        return 0;
      }
    }
  }
  return 1;
}


/* Boolean IsAnyMouseButtonPressed() */

bool Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_IsAnyMouseButtonPressed
               (Hotkeys *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    bVar3 = (*pcVar1)();
    return bVar3;
  }
  pcRam_? = pcVar1;
  cVar4 = (*pcRam_?)(0);
  if (cVar4 == '\0') {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      bVar3 = (*pcVar1)();
      return bVar3;
    }
    pcRam_? = pcVar1;
    cVar4 = (*pcRam_?)();
    if ((cVar4 == '\0') &&
       (bVar3 = RTInput::RTInput_IsMiddleMouseButtonPressed((MethodInfo *)0x0), bVar3 == 0)) {
      return 0;
    }
  }
  return 1;
}


/* Boolean IsEmpty() */

bool Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_IsEmpty(Hotkeys *this,MethodInfo *method)

{
  if (((((this->fields)._key == 0) && ((this->fields)._lAlt == 0)) && ((this->fields)._lCmd == 0))
     && ((((this->fields)._lCtrl == 0 && ((this->fields)._lShift == 0)) &&
         (((this->fields)._lMouseBtn == 0 && ((this->fields)._rMouseBtn == 0)))))) {
    return (this->fields)._mMouseBtn == 0;
  }
  return 0;
}


/* Boolean IsOverlappedBy(Hotkeys) */

bool Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_IsOverlappedBy
               (Hotkeys *this,Hotkeys *hotkeys,MethodInfo *method)

{
  if ((hotkeys != (Hotkeys *)0x0) && (hotkeys != this)) {
    bVar1 = (this->fields)._lAlt != 0;
    bVar2 = bVar1 + 1;
    if ((this->fields)._lCtrl == 0) {
      bVar2 = bVar1;
    }
    bVar1 = (hotkeys->fields)._lAlt != 0;
    bVar3 = bVar1 + 1;
    if ((hotkeys->fields)._lCtrl == 0) {
      bVar3 = bVar1;
    }
    bVar4 = bVar3 + 1;
    if ((hotkeys->fields)._lShift == 0) {
      bVar4 = bVar3;
    }
    bVar3 = bVar2 + 1;
    if ((this->fields)._lShift == 0) {
      bVar3 = bVar2;
    }
    if (bVar3 <= bVar4) {
      bVar1 = (this->fields)._lMouseBtn != 0;
      bVar2 = bVar1 + 1;
      if ((this->fields)._rMouseBtn == 0) {
        bVar2 = bVar1;
      }
      bVar1 = (hotkeys->fields)._lMouseBtn != 0;
      bVar3 = bVar1 + 1;
      if ((hotkeys->fields)._rMouseBtn == 0) {
        bVar3 = bVar1;
      }
      bVar4 = bVar3 + 1;
      if ((hotkeys->fields)._mMouseBtn == 0) {
        bVar4 = bVar3;
      }
      bVar3 = bVar2 + 1;
      if ((this->fields)._mMouseBtn == 0) {
        bVar3 = bVar2;
      }
      if ((bVar3 <= bVar4) && ((hotkeys->fields)._key == (this->fields)._key)) {
        modifiers = Hotkeys_GetAllUsedModifiers(this,(MethodInfo *)0x0);
        bVar5 = Hotkeys_UsesModifiers(hotkeys,modifiers,(MethodInfo *)0x0);
        if (bVar5 != 0) {
          buttons = Hotkeys_GetAllUsedMouseButtons(this,(MethodInfo *)0x0);
          bVar5 = Hotkeys_UsesMouseButtons(hotkeys,buttons,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}


/* Boolean UsesModifiers(List`1[UnityEngine.KeyCode]) */

bool Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_UsesModifiers
               (Hotkeys *this,List_1_UnityEngine_KeyCode_ *modifiers,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::KeyCode>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::KeyCode>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::KeyCode>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__Contains_UnityEngine__KeyCode_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = Hotkeys_GetAllUsedModifiers(this,(MethodInfo *)0x0);
  if (modifiers == (List_1_UnityEngine_KeyCode_ *)0x0) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
code_?:
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    iStack_7 = (modifiers->fields)._version;
    uStack_8 = 0;
    uStack_9 = 0;
    uStack_10 = 0;
    uStack_3 = 0;
    puStack_11 = &uStack_12;
    uStack_12 = modifiers;
    while (uStack_12 != (List_1_UnityEngine_KeyCode_ *)0x0) {
      if ((iStack_7 != (uStack_12->fields)._version) ||
         (lVar13 = (longlong)(int)uStack_9, (uint)(uStack_12->fields)._size <= uStack_9)) {
        if ((MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::KeyCode>__MoveNext__
             ->klass->field_0x135 & 1) == 0) {
          FUN_?();
        }
        if (uStack_12 == (List_1_UnityEngine_KeyCode_ *)0x0) goto code_?;
        if (iStack_7 == (uStack_12->fields)._version) {
          return 1;
        }
        goto code_?;
      }
      pKVar14 = (uStack_12->fields)._items;
      if (pKVar14 == (KeyCode__Enum__Array *)0x0) goto code_?;
      if ((uint)pKVar14->max_length <= uStack_9) goto code_?;
      uStack_10 = CONCAT44(uStack_10._4_4_,pKVar14->vector[lVar13]);
      uStack_9 = uStack_9 + 1;
      if (pLVar1 == (List_1_UnityEngine_KeyCode_ *)0x0) goto code_?;
      if ((pLVar1->fields)._size == 0) {
        return 0;
      }
      iVar15 = FUN_?(pLVar1,pKVar14->vector[lVar13],
                            MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__Contains_UnityEngine__KeyCode_
                            ->klass->rgctx_data[0x17].rgctxDataDummy);
      if (iVar15 == -1) {
        return 0;
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar16 = (code *)swi(3);
  bVar17 = (*pcVar16)();
  return bVar17;
}


/* Boolean UsesMouseButtons(List`1[RTG.MouseButton]) */

bool Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_UsesMouseButtons
               (Hotkeys *this,List_1_RTG_MouseButton_ *buttons,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::MouseButton>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::MouseButton>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::MouseButton>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::MouseButton>__Contains_RTG__MouseButton_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::MouseButton>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = Hotkeys_GetAllUsedMouseButtons(this,(MethodInfo *)0x0);
  if (buttons == (List_1_RTG_MouseButton_ *)0x0) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
code_?:
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    iStack_7 = (buttons->fields)._version;
    uStack_8 = 0;
    uStack_9 = 0;
    uStack_10 = 0;
    uStack_3 = 0;
    puStack_11 = &uStack_12;
    uStack_12 = buttons;
    while (uStack_12 != (List_1_RTG_MouseButton_ *)0x0) {
      if ((iStack_7 != (uStack_12->fields)._version) ||
         (lVar13 = (longlong)(int)uStack_9, (uint)(uStack_12->fields)._size <= uStack_9)) {
        if ((MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::MouseButton>__MoveNext__
             ->klass->field_0x135 & 1) == 0) {
          FUN_?();
        }
        if (uStack_12 == (List_1_RTG_MouseButton_ *)0x0) goto code_?;
        if (iStack_7 == (uStack_12->fields)._version) {
          return 1;
        }
        goto code_?;
      }
      pMVar14 = (uStack_12->fields)._items;
      if (pMVar14 == (MouseButton__Enum__Array *)0x0) goto code_?;
      if ((uint)pMVar14->max_length <= uStack_9) goto code_?;
      uStack_10 = CONCAT44(uStack_10._4_4_,pMVar14->vector[lVar13]);
      uStack_9 = uStack_9 + 1;
      if (pLVar1 == (List_1_RTG_MouseButton_ *)0x0) goto code_?;
      if ((pLVar1->fields)._size == 0) {
        return 0;
      }
      iVar15 = FUN_?(pLVar1,pMVar14->vector[lVar13],
                            MethodInfo__System__Collections__Generic__List<RTG::MouseButton>__Contains_RTG__MouseButton_
                            ->klass->rgctx_data[0x17].rgctxDataDummy);
      if (iVar15 == -1) {
        return 0;
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar16 = (code *)swi(3);
  bVar17 = (*pcVar16)();
  return bVar17;
}


/* Hotkeys() */

void Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__Hotkeys);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__KeyCode);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__Add_UnityEngine__KeyCode_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::KeyCode>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_UnityEngine_KeyCode_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::KeyCode>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__List__);
  TypeInfo__RTG__Hotkeys->static_fields->_availableKeys = pLVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__RTG__Hotkeys->static_fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pMVar7 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__Add_UnityEngine__KeyCode_;
  pLVar8 = (List_1_System_UInt32Enum_ *)TypeInfo__RTG__Hotkeys->static_fields->_availableKeys;
  if (pLVar8 != (List_1_System_UInt32Enum_ *)0x0) {
    piVar9 = &(pLVar8->fields)._version;
    *piVar9 = *piVar9 + 1;
    pUVar10 = (pLVar8->fields)._items;
    if (pUVar10 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar2 = (pLVar8->fields)._size;
    if (uVar2 < (uint)pUVar10->max_length) {
      (pLVar8->fields)._size = uVar2 + 1;
      if ((uint)pUVar10->max_length <= uVar2) goto code_?;
      pUVar10->vector[(int)uVar2] = 0x20;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(pLVar8,0x20,pMVar7->klass->rgctx_data[0xe].method);
    }
    pMVar7 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__Add_UnityEngine__KeyCode_;
    lVar3 = 0x20;
    pLVar8 = (List_1_System_UInt32Enum_ *)TypeInfo__RTG__Hotkeys->static_fields->_availableKeys;
    if (pLVar8 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
    piVar9 = &(pLVar8->fields)._version;
    *piVar9 = *piVar9 + 1;
    pUVar10 = (pLVar8->fields)._items;
    if (pUVar10 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar2 = (pLVar8->fields)._size;
    if (uVar2 < (uint)pUVar10->max_length) {
      (pLVar8->fields)._size = uVar2 + 1;
      if ((uint)pUVar10->max_length <= uVar2) goto code_?;
      pUVar10->vector[(int)uVar2] = 8;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(pLVar8,8,pMVar7->klass->rgctx_data[0xe].method);
    }
    pMVar7 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__Add_UnityEngine__KeyCode_;
    pLVar8 = (List_1_System_UInt32Enum_ *)TypeInfo__RTG__Hotkeys->static_fields->_availableKeys;
    if (pLVar8 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
    piVar9 = &(pLVar8->fields)._version;
    *piVar9 = *piVar9 + 1;
    pUVar10 = (pLVar8->fields)._items;
    if (pUVar10 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar2 = (pLVar8->fields)._size;
    if (uVar2 < (uint)pUVar10->max_length) {
      (pLVar8->fields)._size = uVar2 + 1;
      if ((uint)pUVar10->max_length <= uVar2) goto code_?;
      pUVar10->vector[(int)uVar2] = 0xd;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(pLVar8,0xd,pMVar7->klass->rgctx_data[0xe].method);
    }
    pMVar7 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__Add_UnityEngine__KeyCode_;
    pLVar8 = (List_1_System_UInt32Enum_ *)TypeInfo__RTG__Hotkeys->static_fields->_availableKeys;
    if (pLVar8 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
    piVar9 = &(pLVar8->fields)._version;
    *piVar9 = *piVar9 + 1;
    pUVar10 = (pLVar8->fields)._items;
    if (pUVar10 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar2 = (pLVar8->fields)._size;
    if (uVar2 < (uint)pUVar10->max_length) {
      (pLVar8->fields)._size = uVar2 + 1;
      if ((uint)pUVar10->max_length <= uVar2) goto code_?;
      pUVar10->vector[(int)uVar2] = 9;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(pLVar8,9,pMVar7->klass->rgctx_data[0xe].method);
    }
    pMVar7 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__Add_UnityEngine__KeyCode_;
    pLVar8 = (List_1_System_UInt32Enum_ *)TypeInfo__RTG__Hotkeys->static_fields->_availableKeys;
    if (pLVar8 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
    piVar9 = &(pLVar8->fields)._version;
    *piVar9 = *piVar9 + 1;
    pUVar10 = (pLVar8->fields)._items;
    if (pUVar10 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar2 = (pLVar8->fields)._size;
    if (uVar2 < (uint)pUVar10->max_length) {
      (pLVar8->fields)._size = uVar2 + 1;
      if ((uint)pUVar10->max_length <= uVar2) goto code_?;
      pUVar10->vector[(int)uVar2] = 0x7f;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(pLVar8,0x7f,pMVar7->klass->rgctx_data[0xe].method);
    }
    pMVar7 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__Add_UnityEngine__KeyCode_;
    pLVar8 = (List_1_System_UInt32Enum_ *)TypeInfo__RTG__Hotkeys->static_fields->_availableKeys;
    if (pLVar8 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
    piVar9 = &(pLVar8->fields)._version;
    *piVar9 = *piVar9 + 1;
    pUVar10 = (pLVar8->fields)._items;
    if (pUVar10 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar2 = (pLVar8->fields)._size;
    if (uVar2 < (uint)pUVar10->max_length) {
      (pLVar8->fields)._size = uVar2 + 1;
      if ((uint)pUVar10->max_length <= uVar2) goto code_?;
      pUVar10->vector[(int)uVar2] = 0x5b;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(pLVar8,0x5b,pMVar7->klass->rgctx_data[0xe].method);
    }
    pMVar7 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__Add_UnityEngine__KeyCode_;
    pLVar8 = (List_1_System_UInt32Enum_ *)TypeInfo__RTG__Hotkeys->static_fields->_availableKeys;
    if (pLVar8 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
    piVar9 = &(pLVar8->fields)._version;
    *piVar9 = *piVar9 + 1;
    pUVar10 = (pLVar8->fields)._items;
    if (pUVar10 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar2 = (pLVar8->fields)._size;
    if (uVar2 < (uint)pUVar10->max_length) {
      (pLVar8->fields)._size = uVar2 + 1;
      if ((uint)pUVar10->max_length <= uVar2) goto code_?;
      pUVar10->vector[(int)uVar2] = 0x5d;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(pLVar8,0x5d,pMVar7->klass->rgctx_data[0xe].method);
    }
    UVar11 = 0x61;
    do {
      pMVar7 = 
      MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__Add_UnityEngine__KeyCode_
      ;
      pLVar8 = (List_1_System_UInt32Enum_ *)TypeInfo__RTG__Hotkeys->static_fields->_availableKeys;
      if (pLVar8 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
      piVar9 = &(pLVar8->fields)._version;
      *piVar9 = *piVar9 + 1;
      pUVar10 = (pLVar8->fields)._items;
      if (pUVar10 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
      uVar2 = (pLVar8->fields)._size;
      if (uVar2 < (uint)pUVar10->max_length) {
        (pLVar8->fields)._size = uVar2 + 1;
        if ((uint)pUVar10->max_length <= uVar2) goto code_?;
        pUVar10->vector[(int)uVar2] = UVar11;
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
        List_1_System_UInt32Enum__AddWithResize
                  (pLVar8,UVar11,pMVar7->klass->rgctx_data[0xe].method);
      }
      UVar11 = UVar11 + 1;
    } while ((int)UVar11 < 0x7b);
    UVar11 = 0x30;
    do {
      pMVar7 = 
      MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__Add_UnityEngine__KeyCode_
      ;
      pLVar8 = (List_1_System_UInt32Enum_ *)TypeInfo__RTG__Hotkeys->static_fields->_availableKeys;
      if (pLVar8 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
      piVar9 = &(pLVar8->fields)._version;
      *piVar9 = *piVar9 + 1;
      pUVar10 = (pLVar8->fields)._items;
      if (pUVar10 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
      uVar2 = (pLVar8->fields)._size;
      if (uVar2 < (uint)pUVar10->max_length) {
        (pLVar8->fields)._size = uVar2 + 1;
        if ((uint)pUVar10->max_length <= uVar2) goto code_?;
        pUVar10->vector[(int)uVar2] = UVar11;
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
        List_1_System_UInt32Enum__AddWithResize
                  (pLVar8,UVar11,pMVar7->klass->rgctx_data[0xe].method);
      }
      pMVar7 = 
      MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__Add_UnityEngine__KeyCode_
      ;
      UVar11 = UVar11 + 1;
    } while ((int)UVar11 < 0x3a);
    pLVar8 = (List_1_System_UInt32Enum_ *)TypeInfo__RTG__Hotkeys->static_fields->_availableKeys;
    if (pLVar8 != (List_1_System_UInt32Enum_ *)0x0) {
      piVar9 = &(pLVar8->fields)._version;
      *piVar9 = *piVar9 + 1;
      pUVar10 = (pLVar8->fields)._items;
      if (pUVar10 != (UInt32Enum__Enum__Array *)0x0) {
        uVar2 = (pLVar8->fields)._size;
        uVar12 = 0;
        if (uVar2 < (uint)pUVar10->max_length) {
          (pLVar8->fields)._size = uVar2 + 1;
          if ((uint)pUVar10->max_length <= uVar2) {
code_?:
            FUN_?();
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pUVar10->vector[(int)uVar2] = 0;
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
          List_1_System_UInt32Enum__AddWithResize(pLVar8,0,pMVar7->klass->rgctx_data[0xe].method);
        }
        pLVar14 = (List_1_System_String_ *)
                  FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
        __Il2CppFullySharedGenericType]::
        LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                  ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar14,
                   MethodInfo__System__Collections__Generic__List<System::String>__List__);
        TypeInfo__RTG__Hotkeys->static_fields->_availableKeyNames = pLVar14;
        if (iRam_? != 0) {
          uVar2 = (uint)((ulonglong)&TypeInfo__RTG__Hotkeys->static_fields->_availableKeyNames >>
                         0xc);
          lVar15 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
          do {
            uVar4 = *(ulonglong *)(lVar15 + 0xADDR);
            puVar5 = (ulonglong *)(lVar15 + 0xADDR);
            LOCK();
            bVar6 = uVar4 == *puVar5;
            if (bVar6) {
              *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar6);
        }
        pLVar1 = TypeInfo__RTG__Hotkeys->static_fields->_availableKeys;
        while (pLVar1 != (List_1_UnityEngine_KeyCode_ *)0x0) {
          if ((pLVar1->fields)._size <= (int)uVar12) {
            return;
          }
          pLVar1 = TypeInfo__RTG__Hotkeys->static_fields->_availableKeys;
          pLVar14 = TypeInfo__RTG__Hotkeys->static_fields->_availableKeyNames;
          if (pLVar1 == (List_1_UnityEngine_KeyCode_ *)0x0) break;
          if ((uint)(pLVar1->fields)._size <= uVar12) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pKVar16 = (pLVar1->fields)._items;
          if (pKVar16 == (KeyCode__Enum__Array *)0x0) break;
          if ((uint)pKVar16->max_length <= uVar12) goto code_?;
          uStack_17 = *(undefined4 *)((longlong)pKVar16->vector + lVar3 + -0x20);
          EStack_18.monitor = (MonitorData *)0xffffffffffffffff;
          EStack_18.klass = (Enum__Class *)TypeInfo__UnityEngine__KeyCode;
          item = mscorlib.dll::System::Enum::Enum_ToString(&EStack_18,(MethodInfo *)0x0);
          pMVar7 = 
          MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_;
          if (pLVar14 == (List_1_System_String_ *)0x0) break;
          piVar9 = &(pLVar14->fields)._version;
          *piVar9 = *piVar9 + 1;
          pSVar19 = (pLVar14->fields)._items;
          if (pSVar19 == (String__Array *)0x0) break;
          uVar2 = (pLVar14->fields)._size;
          if (uVar2 < (uint)pSVar19->max_length) {
            (pLVar14->fields)._size = uVar2 + 1;
            FUN_?(pSVar19,(longlong)(int)uVar2,item);
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__AddWithResize
                      ((List_1_System_Object_ *)pLVar14,(Object *)item,
                       pMVar7->klass->rgctx_data[0xe].method);
          }
          uVar12 = uVar12 + 1;
          lVar3 = lVar3 + 4;
          pLVar1 = TypeInfo__RTG__Hotkeys->static_fields->_availableKeys;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Hotkeys(String) */

void Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys__ctor(Hotkeys *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::Hotkeys>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::Hotkeys>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Hotkeys);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields)._isEnabled = 1;
  (this->fields)._useStrictModifierCheck = 1;
  (this->fields)._name = StringLiteral_Hotkeys;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._name >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_00 = (List_1_RTG_Hotkeys_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<RTG::Hotkeys>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<RTG::Hotkeys>__List__);
  iVar6 = iRam_?;
  (this->fields)._potentialOverlaps = this_00;
  if (iVar6 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._potentialOverlaps >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar6 = iRam_?;
    } while (!bVar1);
  }
  (this->fields)._name = name;
  if (iVar6 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._name >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  (this->fields)._staticData.CanHaveMouseButtons = 1;
  (this->fields)._key = 0;
  return;
}


/* Hotkeys(String, HotkeysStaticData) */

void Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys__ctor_1
               (Hotkeys *this,String *name,HotkeysStaticData staticData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::Hotkeys>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::Hotkeys>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Hotkeys);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields)._isEnabled = 1;
  (this->fields)._useStrictModifierCheck = 1;
  (this->fields)._name = StringLiteral_Hotkeys;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._name >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_00 = (List_1_RTG_Hotkeys_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<RTG::Hotkeys>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<RTG::Hotkeys>__List__);
  iVar6 = iRam_?;
  (this->fields)._potentialOverlaps = this_00;
  if (iVar6 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._potentialOverlaps >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar6 = iRam_?;
    } while (!bVar1);
  }
  (this->fields)._name = name;
  if (iVar6 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._name >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  (this->fields)._staticData.CanHaveMouseButtons = staticData.CanHaveMouseButtons;
  (this->fields)._key = 0;
  return;
}


/* List`1[System.String] get_AvailableKeyNames() */

List_1_System_String_ *
Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_get_AvailableKeyNames(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__Hotkeys);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__Hotkeys->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__RTG__Hotkeys);
  }
  collection = TypeInfo__RTG__Hotkeys->static_fields->_availableKeyNames;
  this = (List_1_System_String_ *)
         FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object___ctor_1
            ((List_1_System_Object_ *)this,(IEnumerable_1_System_Object_ *)collection,
             MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
            );
  return this;
}


/* List`1[UnityEngine.KeyCode] get_AvailableKeys() */

List_1_UnityEngine_KeyCode_ *
Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_get_AvailableKeys(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__Hotkeys);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__List_System__Collections__Generic__IEnumerable<UnityEngine::KeyCode>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::KeyCode>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__Hotkeys->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__RTG__Hotkeys);
  }
  collection = TypeInfo__RTG__Hotkeys->static_fields->_availableKeys;
  this = (List_1_System_Int32Enum_ *)
         FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::KeyCode>);
  mscorlib.dll::System::Collections::Generic::List`1[System::Int32Enum]::
  List_1_System_Int32Enum___ctor_1
            (this,(IEnumerable_1_System_Int32Enum_ *)collection,
             MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__List_System__Collections__Generic__IEnumerable<UnityEngine::KeyCode>_
            );
  return (List_1_UnityEngine_KeyCode_ *)this;
}


/* Boolean get_LShift() */

bool Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_get_LShift(Hotkeys *this,MethodInfo *method)

{
  return (this->fields)._lShift;
}


/* Boolean get_MMouseButton() */

bool Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_get_MMouseButton(Hotkeys *this,MethodInfo *method)

{
  return (this->fields)._mMouseBtn;
}


/* Boolean get_RMouseButton() */

bool Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_get_RMouseButton(Hotkeys *this,MethodInfo *method)

{
  return (this->fields)._rMouseBtn;
}


/* Void set_Key(KeyCode) */

void Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_set_Key
               (Hotkeys *this,KeyCode__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__Hotkeys);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__Contains_UnityEngine__KeyCode_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__Hotkeys->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__RTG__Hotkeys);
  }
  pLVar1 = TypeInfo__RTG__Hotkeys->static_fields->_availableKeys;
  if (pLVar1 != (List_1_UnityEngine_KeyCode_ *)0x0) {
    if ((pLVar1->fields)._size != 0) {
      iVar2 = FUN_?(pLVar1,value,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::KeyCode>__Contains_UnityEngine__KeyCode_
                            ->klass->rgctx_data[0x17].rgctxDataDummy);
      if (iVar2 != -1) {
        (this->fields)._key = value;
      }
    }
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void set_LMouseButton(Boolean) */

void Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_set_LMouseButton
               (Hotkeys *this,bool value,MethodInfo *method)

{
  (this->fields)._lMouseBtn = value;
  return;
}


/* Void set_MMouseButton(Boolean) */

void Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_set_MMouseButton
               (Hotkeys *this,bool value,MethodInfo *method)

{
  (this->fields)._mMouseBtn = value;
  return;
}


/* Void set_RMouseButton(Boolean) */

void Assembly-CSharp.dll::RTG::Hotkeys::Hotkeys_set_RMouseButton
               (Hotkeys *this,bool value,MethodInfo *method)

{
  (this->fields)._rMouseBtn = value;
  return;
}

