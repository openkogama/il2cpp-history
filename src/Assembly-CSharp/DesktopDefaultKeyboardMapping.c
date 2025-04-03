
/* Boolean GetBooleanControl(KogamaControls, KeyState) */

bool Assembly-CSharp.dll::DesktopDefaultKeyboardMapping::
     DesktopDefaultKeyboardMapping_GetBooleanControl
               (DesktopDefaultKeyboardMapping *this,KogamaControls__Enum control,
               KeyState__Enum keyState,MethodInfo *method)

{
  pDVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Unexpected_key_state_);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__get_Item_KogamaControls_
                   );
    cRam_? = '\x01';
  }
  pDVar2 = (this->fields).keyMapping;
  if (pDVar2 != (Dictionary_2_KogamaControls_UnityEngine_KeyCode__1 *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,control,
                        MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__get_Item_KogamaControls_
                       );
    pMVar4 = (MonitorData *)0x0;
    if (pOVar3 != (Object *)0x0) {
      pOVar5 = pOVar3 + 2;
      while( true ) {
        if ((int)pOVar3[1].monitor <= (int)pMVar4) break;
        if (pOVar3[1].monitor <= pMVar4) goto code_?;
        bVar6 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKeyDown
                          ((KeyCode__Enum)pOVar5->klass,(MethodInfo *)0x0);
        if (bVar6 != 0) {
          uVar7 = 1;
          pDVar8 = (this->fields).controlDown;
          if ((pDVar8 == (DesktopDefaultKeyboardMapping_ControlBitArray *)0x0) ||
             (pBVar9 = (pDVar8->fields).controlDown, pBVar9 == (BitArray *)0x0))
          goto code_?;
          mscorlib.dll::System::Collections::BitArray::BitArray_set_Item
                    (pBVar9,control,1,(MethodInfo *)0x0);
          goto code_?;
        }
        pMVar4 = pMVar4 + 1;
        pOVar5 = (Object *)&pOVar5->monitor;
      }
      uVar7 = 0;
code_?:
      pDVar8 = (this->fields).controlDown;
      if ((pDVar8 != (DesktopDefaultKeyboardMapping_ControlBitArray *)0x0) &&
         (pBVar9 = (pDVar8->fields).controlDown, pBVar9 != (BitArray *)0x0)) {
        bVar6 = mscorlib.dll::System::Collections::BitArray::BitArray_get_Item
                          (pBVar9,control,(MethodInfo *)0x0);
        ppMVar10 = (MethodInfo **)((uint)CONCAT11(uVar7,bVar6) << 0x10);
        if (cRam_? == '\0') {
          ppMVar10 = &
                     MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__get_Item_KogamaControls_
          ;
          func_?();
          cRam_? = '\x01';
        }
        pDVar2 = (this->fields).keyMapping;
        this = (DesktopDefaultKeyboardMapping *)0x0;
        if (pDVar2 != (Dictionary_2_KogamaControls_UnityEngine_KeyCode__1 *)0x0) {
          pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,control,
                              MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__get_Item_KogamaControls_
                             );
          pMVar4 = (MonitorData *)0x0;
          if (pOVar3 != (Object *)0x0) {
            pOVar11 = (Object__Class *)(pOVar3 + 2);
code_?:
            do {
              uVar12 = (undefined2)((uint)ppMVar10 >> 0x10);
              if ((int)pOVar3[1].monitor <= (int)pMVar4) goto code_?;
              if (pOVar3[1].monitor <= pMVar4) goto code_?;
              pDVar8 = (pDVar1->fields).controlDown;
              key = (Object__Class *)(pOVar11->_0).image;
              if ((pDVar8 == (DesktopDefaultKeyboardMapping_ControlBitArray *)0x0) ||
                 (pBVar9 = (pDVar8->fields).controlDown, pBVar9 == (BitArray *)0x0)) break;
              bVar6 = mscorlib.dll::System::Collections::BitArray::BitArray_get_Item
                                (pBVar9,control,(MethodInfo *)0x0);
              if (bVar6 == 0) {
code_?:
                bVar6 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKeyUp
                                  ((KeyCode__Enum)key,(MethodInfo *)0x0);
                if (bVar6 == 0) {
                  pDVar8 = (pDVar1->fields).controlDown;
                  if (pDVar8 == (DesktopDefaultKeyboardMapping_ControlBitArray *)0x0) break;
                  bVar6 = DesktopDefaultKeyboardMapping+ControlBitArray::
                          DesktopDefaultKeyboardMapping_ControlBitArray_get_Item
                                    (pDVar8,control,(MethodInfo *)0x0);
                  uVar12 = (undefined2)((uint)ppMVar10 >> 0x10);
                  if (bVar6 != 0) {
                    this._3_1_ = 0;
                    goto code_?;
                  }
                  pMVar4 = pMVar4 + 1;
                  pOVar11 = (Object__Class *)&(pOVar11->_0).gc_desc;
                  goto code_?;
                }
              }
              else {
                ppMVar10 = (MethodInfo **)0x0;
                pOVar3 = (Object *)&UNK_?;
                pOVar11 = key;
                bVar6 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKey
                                  ((KeyCode__Enum)key,(MethodInfo *)0x0);
                if (bVar6 != 0) goto code_?;
              }
              this = (DesktopDefaultKeyboardMapping *)0x1000000;
              pMVar4 = pMVar4 + 1;
              pOVar11 = (Object__Class *)&(pOVar11->_0).gc_desc;
            } while( true );
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  bVar6 = (*pcVar13)();
  return bVar6;
code_?:
  if (this._3_1_ != 0) {
    pDVar8 = (pDVar1->fields).controlDown;
    if ((pDVar8 == (DesktopDefaultKeyboardMapping_ControlBitArray *)0x0) ||
       (pBVar9 = (pDVar8->fields).controlDown, pBVar9 == (BitArray *)0x0)) goto code_?;
    mscorlib.dll::System::Collections::BitArray::BitArray_set_Item
              (pBVar9,control,0,(MethodInfo *)0x0);
  }
code_?:
  if (keyState == KeyState__Enum_Up) {
    return this._3_1_;
  }
  if (keyState != KeyState__Enum_Down) {
    if (keyState != KeyState__Enum_Pressed) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Unexpected_key_state_,(MethodInfo *)0x0);
      return 0;
    }
    return (bool)uVar12;
  }
  return (bool)((ushort)uVar12 >> 8);
}


/* Boolean KeyDown(KogamaControls) */

bool Assembly-CSharp.dll::DesktopDefaultKeyboardMapping::DesktopDefaultKeyboardMapping_KeyDown
               (DesktopDefaultKeyboardMapping *this,KogamaControls__Enum control,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__get_Item_KogamaControls_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).keyMapping;
  if (this_00 != (Dictionary_2_KogamaControls_UnityEngine_KeyCode__1 *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,control,
                        MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__get_Item_KogamaControls_
                       );
    pMVar2 = (MonitorData *)0x0;
    if (pOVar1 != (Object *)0x0) {
      pOVar3 = pOVar1 + 2;
      while( true ) {
        if ((int)pOVar1[1].monitor <= (int)pMVar2) {
          return 0;
        }
        if (pOVar1[1].monitor <= pMVar2) break;
        bVar4 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKeyDown
                          ((KeyCode__Enum)pOVar3->klass,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          return 1;
        }
        pMVar2 = pMVar2 + 1;
        pOVar3 = (Object *)&pOVar3->monitor;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean KeyUp(KogamaControls) */

bool Assembly-CSharp.dll::DesktopDefaultKeyboardMapping::DesktopDefaultKeyboardMapping_KeyUp
               (DesktopDefaultKeyboardMapping *this,KogamaControls__Enum control,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__get_Item_KogamaControls_
                   );
    cRam_? = '\x01';
  }
  pOVar1 = (Object__Class *)0x0;
  this_00 = (this->fields).keyMapping;
  if (this_00 != (Dictionary_2_KogamaControls_UnityEngine_KeyCode__1 *)0x0) {
    pOStack_2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,control,
                           MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__get_Item_KogamaControls_
                          );
    pMVar3 = (MonitorData *)0x0;
    if (pOStack_2 != (Object *)0x0) {
      pOVar4 = pOStack_2 + 2;
code_?:
      do {
        if ((int)pOStack_2[1].monitor <= (int)pMVar3) {
          return (bool)((uint)pOVar1 >> 0x18);
        }
        if (pOStack_2[1].monitor <= pMVar3) goto code_?;
        key = pOVar4->klass;
        pDVar5 = (this->fields).controlDown;
        if ((pDVar5 == (DesktopDefaultKeyboardMapping_ControlBitArray *)0x0) ||
           (this_01 = (pDVar5->fields).controlDown, this_01 == (BitArray *)0x0)) break;
        bVar6 = mscorlib.dll::System::Collections::BitArray::BitArray_get_Item
                          (this_01,control,(MethodInfo *)0x0);
        if (bVar6 == 0) {
code_?:
          bVar6 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKeyUp
                            ((KeyCode__Enum)key,(MethodInfo *)0x0);
          if (bVar6 == 0) {
            pDVar5 = (this->fields).controlDown;
            if (pDVar5 == (DesktopDefaultKeyboardMapping_ControlBitArray *)0x0) break;
            bVar6 = DesktopDefaultKeyboardMapping+ControlBitArray::
                    DesktopDefaultKeyboardMapping_ControlBitArray_get_Item
                              (pDVar5,control,(MethodInfo *)0x0);
            if (bVar6 != 0) {
              return 0;
            }
            pMVar3 = pMVar3 + 1;
            pOVar4 = (Object *)&pOVar4->monitor;
            goto code_?;
          }
        }
        else {
          pOVar1 = key;
          bVar6 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKey
                            ((KeyCode__Enum)key,(MethodInfo *)0x0);
          if (bVar6 != 0) goto code_?;
        }
        pOVar1 = (Object__Class *)0x1000000;
        pMVar3 = pMVar3 + 1;
        pOVar4 = (Object *)&pOVar4->monitor;
      } while( true );
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  bVar6 = (*pcVar7)();
  return bVar6;
}


/* Void Reset() */

void Assembly-CSharp.dll::DesktopDefaultKeyboardMapping::DesktopDefaultKeyboardMapping_Reset
               (DesktopDefaultKeyboardMapping *this,MethodInfo *method)

{
  pDVar1 = (this->fields).controlDown;
  if ((pDVar1 != (DesktopDefaultKeyboardMapping_ControlBitArray *)0x0) &&
     (this_00 = (pDVar1->fields).controlDown, this_00 != (BitArray *)0x0)) {
    mscorlib.dll::System::Collections::BitArray::BitArray_SetAll(this_00,0,(MethodInfo *)0x0);
    return;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* DesktopDefaultKeyboardMapping() */

void Assembly-CSharp.dll::DesktopDefaultKeyboardMapping::DesktopDefaultKeyboardMapping__ctor
               (DesktopDefaultKeyboardMapping *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DesktopDefaultKeyboardMapping__ControlBitArray);
    func_?(&MethodInfo__DesktopDefaultKeyboardMapping__Reset__);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>
                   );
    func_?(&TypeInfo__UnityEngine__KeyCode);
    func_?(&_4599282D3F9B45AF3BD85923032DA3555BB21379E7B4794D7CDC90902084CA13_Field);
    func_?(&F002D88D1605774CD2608C1D941E46CAD47C23D0F8E6530B87794DC9244A45AB_Field);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  value = (DesktopDefaultKeyboardMapping_ControlBitArray *)
          func_?(TypeInfo__DesktopDefaultKeyboardMapping__ControlBitArray);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__BitArray);
    cRam_? = '\x01';
  }
  this_00 = (BitArray *)func_?(TypeInfo__System__Collections__BitArray);
  mscorlib.dll::System::Collections::BitArray::BitArray__ctor(this_00,0x36,(MethodInfo *)0x0);
  pMVar1 = (MethodInfo *)&value->fields;
  ((DesktopDefaultKeyboardMapping_ControlBitArray__Fields *)pMVar1)->controlDown = this_00;
  func_?(pMVar1,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,pMVar1);
  pMVar1 = (MethodInfo *)&(this->fields).controlDown;
  *(DesktopDefaultKeyboardMapping_ControlBitArray **)pMVar1 = value;
  func_?(pMVar1,value);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,pMVar1);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pUVar2 = TypeInfo__MVGameControllerDesktop->static_fields->_OnApplicationLostFocus_k__BackingField
  ;
  this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_01,(Object *)this,MethodInfo__DesktopDefaultKeyboardMapping__Reset__,
             (MethodInfo *)0x0);
  pUVar3 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar2,(Delegate *)this_01,(MethodInfo *)0x0);
  pUVar2 = (UnityAction *)0x0;
  if (pUVar3 == (UnityAction *)0x0) {
code_?:
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    TypeInfo__MVGameControllerDesktop->static_fields->_OnApplicationLostFocus_k__BackingField =
         pUVar2;
    func_?();
    this_02 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
              func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
    Int32Enum,GamePassesHighScoreList+HighScoreListData]::
    Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
              (this_02,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Dictionary__
              );
    pOVar4 = (Object *)func_?();
    if (pOVar4 == (Object *)0x0) goto code_?;
    if ((pOVar4[1].monitor != (MonitorData *)0x0) &&
       (pOVar4[2].klass = (Object__Class *)0x65, (MonitorData *)0x1 < pOVar4[1].monitor)) {
      pOVar4[2].monitor = (MonitorData *)0x20;
      if (this_02 == (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0
         ) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__Add
                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,0x2c,pOVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                );
      pOVar4 = (Object *)func_?();
      if (pOVar4 == (Object *)0x0) goto code_?;
      if ((pOVar4[1].monitor != (MonitorData *)0x0) &&
         (pOVar4[2].klass = (Object__Class *)0x63, (MonitorData *)0x1 < pOVar4[1].monitor)) {
        pOVar4[2].monitor = (MonitorData *)0x132;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__Add
                  ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,0x2d,pOVar4,
                   MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                  );
        pOVar4 = (Object *)func_?();
        if (pOVar4 == (Object *)0x0) goto code_?;
        if (pOVar4[1].monitor != (MonitorData *)0x0) {
          pOVar4[2].klass = (Object__Class *)0x143;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]
          ::Dictionary_2_System_Int32Enum_System_Object__Add
                    ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,5,pOVar4,
                     MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                    );
          pOVar4 = (Object *)func_?();
          if (pOVar4 == (Object *)0x0) goto code_?;
          if (pOVar4[1].monitor != (MonitorData *)0x0) {
            pOVar4[2].klass = (Object__Class *)0x144;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__Add
                      ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,6,pOVar4,
                       MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                      );
            pOVar4 = (Object *)func_?();
            if (pOVar4 == (Object *)0x0) goto code_?;
            if (pOVar4[1].monitor != (MonitorData *)0x0) {
              pOVar4[2].klass = (Object__Class *)0x7f;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__Add
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,8,pOVar4,
                         MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                        );
              pOVar4 = (Object *)func_?();
              if (pOVar4 == (Object *)0x0) goto code_?;
              if (pOVar4[1].monitor != (MonitorData *)0x0) {
                pOVar4[2].klass = (Object__Class *)0x1b;
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__Add
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,9,pOVar4,
                           MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                          );
                pOVar4 = (Object *)func_?();
                if (pOVar4 == (Object *)0x0) goto code_?;
                if ((pOVar4[1].monitor != (MonitorData *)0x0) &&
                   (pOVar4[2].klass = (Object__Class *)0x130, (MonitorData *)0x1 < pOVar4[1].monitor
                   )) {
                  pOVar4[2].monitor = (MonitorData *)0x12f;
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__Add
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,10,pOVar4,
                             MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                            );
                  pOVar4 = (Object *)func_?();
                  if (pOVar4 == (Object *)0x0) goto code_?;
                  if (pOVar4[1].monitor != (MonitorData *)0x0) {
                    pOVar4[2].klass = (Object__Class *)0x118;
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__Add
                              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,0xb,pOVar4,
                               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                              );
                    pOVar4 = (Object *)func_?();
                    if (pOVar4 == (Object *)0x0) goto code_?;
                    if (pOVar4[1].monitor != (MonitorData *)0x0) {
                      pOVar4[2].klass = (Object__Class *)0x119;
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__Add
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,0xc,pOVar4,
                                 MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                );
                      pAVar5 = (Array *)func_?();
                      mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
                      RuntimeHelpers_InitializeArray_1
                                (pAVar5,
                                 __4599282D3F9B45AF3BD85923032DA3555BB21379E7B4794D7CDC90902084CA13_Field
                                 ,(MethodInfo *)0x0);
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__Add
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,0xd,
                                 (Object *)pAVar5,
                                 MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                );
                      pOVar4 = (Object *)func_?();
                      if (pOVar4 == (Object *)0x0) goto code_?;
                      if (pOVar4[1].monitor != (MonitorData *)0x0) {
                        pOVar4[2].klass = (Object__Class *)0x6f;
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__Add
                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,0xe,
                                   pOVar4,
                                   MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                  );
                        pOVar4 = (Object *)func_?();
                        if (pOVar4 == (Object *)0x0) goto code_?;
                        if (pOVar4[1].monitor != (MonitorData *)0x0) {
                          pOVar4[2].klass = (Object__Class *)0x68;
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,System::Object]::
                          Dictionary_2_System_Int32Enum_System_Object__Add
                                    ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,0x28,
                                     pOVar4,
                                     MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                    );
                          pOVar4 = (Object *)func_?();
                          if (pOVar4 == (Object *)0x0) goto code_?;
                          if ((pOVar4[1].monitor != (MonitorData *)0x0) &&
                             (pOVar4[2].klass = (Object__Class *)0x74,
                             (MonitorData *)0x1 < pOVar4[1].monitor)) {
                            pOVar4[2].monitor = (MonitorData *)0xd;
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32Enum,System::Object]::
                            Dictionary_2_System_Int32Enum_System_Object__Add
                                      ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,0xf,
                                       pOVar4,
                                       MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                      );
                            pOVar4 = (Object *)func_?();
                            if (pOVar4 == (Object *)0x0) goto code_?;
                            if (pOVar4[1].monitor != (MonitorData *)0x0) {
                              pOVar4[2].klass = (Object__Class *)0x6b;
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Int32Enum,System::Object]::
                              Dictionary_2_System_Int32Enum_System_Object__Add
                                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,
                                         0x10,pOVar4,
                                         MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                        );
                              pOVar4 = (Object *)func_?();
                              if (pOVar4 == (Object *)0x0) goto code_?;
                              if (pOVar4[1].monitor != (MonitorData *)0x0) {
                                pOVar4[2].klass = (Object__Class *)0x79;
                                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Int32Enum,System::Object]::
                                Dictionary_2_System_Int32Enum_System_Object__Add
                                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,
                                           0x11,pOVar4,
                                           MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                          );
                                pOVar4 = (Object *)func_?();
                                if (pOVar4 == (Object *)0x0) goto code_?;
                                if (pOVar4[1].monitor != (MonitorData *)0x0) {
                                  pOVar4[2].klass = (Object__Class *)0x9;
                                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Int32Enum,System::Object]::
                                  Dictionary_2_System_Int32Enum_System_Object__Add
                                            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02
                                             ,0x12,pOVar4,
                                             MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                            );
                                  pOVar4 = (Object *)func_?();
                                  if (pOVar4 == (Object *)0x0) goto code_?;
                                  if (pOVar4[1].monitor != (MonitorData *)0x0) {
                                    pOVar4[2].klass = (Object__Class *)0x76;
                                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                    ::Int32Enum,System::Object]::
                                    Dictionary_2_System_Int32Enum_System_Object__Add
                                              ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                               this_02,0x13,pOVar4,
                                               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                              );
                                    pOVar4 = (Object *)func_?();
                                    if (pOVar4 == (Object *)0x0) goto code_?;
                                    if (pOVar4[1].monitor != (MonitorData *)0x0) {
                                      pOVar4[2].klass = (Object__Class *)0x71;
                                      mscorlib.dll::System::Collections::Generic::
                                      Dictionary`2[System::Int32Enum,System::Object]::
                                      Dictionary_2_System_Int32Enum_System_Object__Add
                                                ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                                 this_02,0x2b,pOVar4,
                                                 MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                );
                                      pOVar4 = (Object *)func_?();
                                      if (pOVar4 == (Object *)0x0) goto code_?;
                                      if (pOVar4[1].monitor != (MonitorData *)0x0) {
                                        pOVar4[2].klass = (Object__Class *)0x65;
                                        mscorlib.dll::System::Collections::Generic::
                                        Dictionary`2[System::Int32Enum,System::Object]::
                                        Dictionary_2_System_Int32Enum_System_Object__Add
                                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                                   this_02,0x14,pOVar4,
                                                                                                      
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  );
                                        pOVar4 = (Object *)func_?();
                                        if (pOVar4 == (Object *)0x0) goto code_?;
                                        if (pOVar4[1].monitor != (MonitorData *)0x0) {
                                          pOVar4[2].klass = (Object__Class *)0x76;
                                          mscorlib.dll::System::Collections::Generic::
                                          Dictionary`2[System::Int32Enum,System::Object]::
                                          Dictionary_2_System_Int32Enum_System_Object__Add
                                                    ((Dictionary_2_System_Int32Enum_System_Object_ *
                                                     )this_02,0x15,pOVar4,
                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  );
                                          pOVar4 = (Object *)func_?();
                                          if (pOVar4 == (Object *)0x0) goto code_?;
                                          if (pOVar4[1].monitor != (MonitorData *)0x0) {
                                            pOVar4[2].klass = (Object__Class *)0x70;
                                            mscorlib.dll::System::Collections::Generic::
                                            Dictionary`2[System::Int32Enum,System::Object]::
                                            Dictionary_2_System_Int32Enum_System_Object__Add
                                                      ((Dictionary_2_System_Int32Enum_System_Object_
                                                        *)this_02,0x16,pOVar4,
                                                                                                              
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  );
                                            pOVar4 = (Object *)func_?();
                                            if (pOVar4 == (Object *)0x0) goto code_?;
                                            if (pOVar4[1].monitor != (MonitorData *)0x0) {
                                              pOVar4[2].klass = (Object__Class *)0x6c;
                                              mscorlib.dll::System::Collections::Generic::
                                              Dictionary`2[System::Int32Enum,System::Object]::
                                              Dictionary_2_System_Int32Enum_System_Object__Add
                                                        ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x17,pOVar4,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  );
                                              pOVar4 = (Object *)func_?();
                                              if (pOVar4 == (Object *)0x0) goto code_?;
                                              if (pOVar4[1].monitor != (MonitorData *)0x0) {
                                                pOVar4[2].klass = (Object__Class *)0x67;
                                                mscorlib.dll::System::Collections::Generic::
                                                Dictionary`2[System::Int32Enum,System::Object]::
                                                Dictionary_2_System_Int32Enum_System_Object__Add
                                                          ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x18,pOVar4,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  );
                                                pOVar4 = (Object *)func_?();
                                                if (pOVar4 == (Object *)0x0) goto code_?;
                                                if (pOVar4[1].monitor != (MonitorData *)0x0) {
                                                  pOVar4[2].klass = (Object__Class *)0x31;
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Int32Enum,System::Object]::
                                                  Dictionary_2_System_Int32Enum_System_Object__Add
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x19,pOVar4,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  );
                                                  pOVar4 = (Object *)func_?();
                                                  if (pOVar4 == (Object *)0x0)
                                                  goto code_?;
                                                  if (pOVar4[1].monitor != (MonitorData *)0x0) {
                                                    pOVar4[2].klass = (Object__Class *)0x32;
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                    Dictionary_2_System_Int32Enum_System_Object__Add
                                                              ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x1a,pOVar4,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  );
                                                  pOVar4 = (Object *)func_?();
                                                  if (pOVar4 == (Object *)0x0)
                                                  goto code_?;
                                                  if (pOVar4[1].monitor != (MonitorData *)0x0) {
                                                    pOVar4[2].klass = (Object__Class *)0x33;
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                    Dictionary_2_System_Int32Enum_System_Object__Add
                                                              ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x1b,pOVar4,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  );
                                                  pOVar4 = (Object *)func_?();
                                                  if (pOVar4 == (Object *)0x0)
                                                  goto code_?;
                                                  if (pOVar4[1].monitor != (MonitorData *)0x0) {
                                                    pOVar4[2].klass = (Object__Class *)0x34;
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                    Dictionary_2_System_Int32Enum_System_Object__Add
                                                              ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x35,pOVar4,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  );
                                                  pOVar4 = (Object *)func_?();
                                                  if (pOVar4 == (Object *)0x0)
                                                  goto code_?;
                                                  if (pOVar4[1].monitor != (MonitorData *)0x0) {
                                                    pOVar4[2].klass = (Object__Class *)0x72;
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                    Dictionary_2_System_Int32Enum_System_Object__Add
                                                              ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x1c,pOVar4,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  );
                                                  pOVar4 = (Object *)func_?();
                                                  if (pOVar4 == (Object *)0x0)
                                                  goto code_?;
                                                  if (pOVar4[1].monitor != (MonitorData *)0x0) {
                                                    pOVar4[2].klass = (Object__Class *)0x69;
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                    Dictionary_2_System_Int32Enum_System_Object__Add
                                                              ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x1d,pOVar4,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  );
                                                  pOVar4 = (Object *)func_?();
                                                  if (pOVar4 == (Object *)0x0)
                                                  goto code_?;
                                                  if (pOVar4[1].monitor != (MonitorData *)0x0) {
                                                    pOVar4[2].klass = (Object__Class *)0x6e;
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                    Dictionary_2_System_Int32Enum_System_Object__Add
                                                              ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x1e,pOVar4,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  );
                                                  pOVar4 = (Object *)func_?();
                                                  if (pOVar4 == (Object *)0x0)
                                                  goto code_?;
                                                  if (pOVar4[1].monitor != (MonitorData *)0x0) {
                                                    pOVar4[2].klass = (Object__Class *)0x66;
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                    Dictionary_2_System_Int32Enum_System_Object__Add
                                                              ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x1f,pOVar4,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  );
                                                  pAVar5 = (Array *)func_?();
                                                  mscorlib.dll::System::Runtime::CompilerServices::
                                                  RuntimeHelpers::RuntimeHelpers_InitializeArray_1
                                                            (pAVar5,
                                                  _F002D88D1605774CD2608C1D941E46CAD47C23D0F8E6530B87794DC9244A45AB_Field
                                                  ,(MethodInfo *)0x0);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Int32Enum,System::Object]::
                                                  Dictionary_2_System_Int32Enum_System_Object__Add
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x22,(Object *)pAVar5,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  );
                                                  pOVar4 = (Object *)func_?();
                                                  if (pOVar4 == (Object *)0x0)
                                                  goto code_?;
                                                  if ((pOVar4[1].monitor != (MonitorData *)0x0) &&
                                                     (pOVar4[2].klass = (Object__Class *)0xd,
                                                     (MonitorData *)0x1 < pOVar4[1].monitor)) {
                                                    pOVar4[2].monitor = (MonitorData *)0x10f;
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                    Dictionary_2_System_Int32Enum_System_Object__Add
                                                              ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x23,pOVar4,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  );
                                                  pOVar4 = (Object *)func_?();
                                                  if (pOVar4 == (Object *)0x0)
                                                  goto code_?;
                                                  if (pOVar4[1].monitor != (MonitorData *)0x0) {
                                                    pOVar4[2].klass = (Object__Class *)0x112;
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                    Dictionary_2_System_Int32Enum_System_Object__Add
                                                              ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x25,pOVar4,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  );
                                                  pOVar4 = (Object *)func_?();
                                                  if (pOVar4 == (Object *)0x0)
                                                  goto code_?;
                                                  if (pOVar4[1].monitor != (MonitorData *)0x0) {
                                                    pOVar4[2].klass = (Object__Class *)0x111;
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                    Dictionary_2_System_Int32Enum_System_Object__Add
                                                              ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x24,pOVar4,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  );
                                                  pOVar4 = (Object *)func_?();
                                                  if (pOVar4 == (Object *)0x0)
                                                  goto code_?;
                                                  if (pOVar4[1].monitor != (MonitorData *)0x0) {
                                                    pOVar4[2].klass = (Object__Class *)0x9;
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                    Dictionary_2_System_Int32Enum_System_Object__Add
                                                              ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x26,pOVar4,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  );
                                                  pOVar4 = (Object *)func_?();
                                                  if (pOVar4 == (Object *)0x0)
                                                  goto code_?;
                                                  if ((pOVar4[1].monitor != (MonitorData *)0x0) &&
                                                     (pOVar4[2].klass = (Object__Class *)0x130,
                                                     (MonitorData *)0x1 < pOVar4[1].monitor)) {
                                                    pOVar4[2].monitor = (MonitorData *)0x12f;
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                    Dictionary_2_System_Int32Enum_System_Object__Add
                                                              ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x27,pOVar4,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  );
                                                  pOVar4 = (Object *)func_?();
                                                  if (pOVar4 == (Object *)0x0)
                                                  goto code_?;
                                                  if ((pOVar4[1].monitor != (MonitorData *)0x0) &&
                                                     (pOVar4[2].klass = (Object__Class *)0x6d,
                                                     (MonitorData *)0x1 < pOVar4[1].monitor)) {
                                                    pOVar4[2].monitor = (MonitorData *)0x1b;
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                    Dictionary_2_System_Int32Enum_System_Object__Add
                                                              ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x29,pOVar4,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  );
                                                  pOVar4 = (Object *)func_?();
                                                  if (pOVar4 == (Object *)0x0)
                                                  goto code_?;
                                                  if (pOVar4[1].monitor != (MonitorData *)0x0) {
                                                    pOVar4[2].klass = (Object__Class *)0x1b;
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                    Dictionary_2_System_Int32Enum_System_Object__Add
                                                              ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x2a,pOVar4,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  );
                                                  pOVar4 = (Object *)func_?();
                                                  if (pOVar4 == (Object *)0x0)
                                                  goto code_?;
                                                  if ((pOVar4[1].monitor != (MonitorData *)0x0) &&
                                                     (pOVar4[2].klass = (Object__Class *)0x130,
                                                     (MonitorData *)0x1 < pOVar4[1].monitor)) {
                                                    pOVar4[2].monitor = (MonitorData *)0x12f;
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                    Dictionary_2_System_Int32Enum_System_Object__Add
                                                              ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x32,pOVar4,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  );
                                                  pOVar4 = (Object *)func_?();
                                                  if (pOVar4 == (Object *)0x0)
                                                  goto code_?;
                                                  if ((pOVar4[1].monitor != (MonitorData *)0x0) &&
                                                     (pOVar4[2].klass = (Object__Class *)0x77,
                                                     (MonitorData *)0x1 < pOVar4[1].monitor)) {
                                                    pOVar4[2].monitor = (MonitorData *)0x111;
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                    Dictionary_2_System_Int32Enum_System_Object__Add
                                                              ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x2e,pOVar4,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  );
                                                  pOVar4 = (Object *)func_?();
                                                  if (pOVar4 == (Object *)0x0)
                                                  goto code_?;
                                                  if ((pOVar4[1].monitor != (MonitorData *)0x0) &&
                                                     (pOVar4[2].klass = (Object__Class *)0x61,
                                                     (MonitorData *)0x1 < pOVar4[1].monitor)) {
                                                    pOVar4[2].monitor = (MonitorData *)0x114;
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                    Dictionary_2_System_Int32Enum_System_Object__Add
                                                              ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x2f,pOVar4,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  );
                                                  pOVar4 = (Object *)func_?();
                                                  if (pOVar4 == (Object *)0x0)
                                                  goto code_?;
                                                  if ((pOVar4[1].monitor != (MonitorData *)0x0) &&
                                                     (pOVar4[2].klass = (Object__Class *)0x64,
                                                     (MonitorData *)0x1 < pOVar4[1].monitor)) {
                                                    pOVar4[2].monitor = (MonitorData *)0x113;
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                    Dictionary_2_System_Int32Enum_System_Object__Add
                                                              ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x30,pOVar4,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  );
                                                  pOVar4 = (Object *)func_?();
                                                  if (pOVar4 == (Object *)0x0)
                                                  goto code_?;
                                                  if ((pOVar4[1].monitor != (MonitorData *)0x0) &&
                                                     (pOVar4[2].klass = (Object__Class *)0x73,
                                                     (MonitorData *)0x1 < pOVar4[1].monitor)) {
                                                    pOVar4[2].monitor = (MonitorData *)0x112;
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                    Dictionary_2_System_Int32Enum_System_Object__Add
                                                              ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x31,pOVar4,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  );
                                                  pOVar4 = (Object *)func_?();
                                                  if (pOVar4 == (Object *)0x0)
                                                  goto code_?;
                                                  if (pOVar4[1].monitor != (MonitorData *)0x0) {
                                                    pOVar4[2].klass = (Object__Class *)0x72;
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                    Dictionary_2_System_Int32Enum_System_Object__Add
                                                              ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x33,pOVar4,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  );
                                                  pOVar4 = (Object *)func_?();
                                                  if (pOVar4 == (Object *)0x0)
                                                  goto code_?;
                                                  if (pOVar4[1].monitor != (MonitorData *)0x0) {
                                                    pOVar4[2].klass = (Object__Class *)0x6a;
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                    Dictionary_2_System_Int32Enum_System_Object__Add
                                                              ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_02,0x34,pOVar4,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  );
                                                  (this->fields).keyMapping =
                                                       (
                                                  Dictionary_2_KogamaControls_UnityEngine_KeyCode__1
                                                  *)this_02;
                                                  func_?();
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
    }
  }
  else {
    if (pUVar3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar2 = pUVar3;
    }
    if (pUVar2 != (UnityAction *)0x0) goto code_?;
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

