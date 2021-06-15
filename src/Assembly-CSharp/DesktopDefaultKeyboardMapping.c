
/* Boolean GetBooleanControl(KogamaControls, KeyState) */

bool Assembly-CSharp.dll::DesktopDefaultKeyboardMapping::
     DesktopDefaultKeyboardMapping_GetBooleanControl
               (DesktopDefaultKeyboardMapping *this,KogamaControls__Enum control,
               KeyState__Enum keyState,MethodInfo *method)

{
  pDVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar2 = (this->fields).keyMapping;
  if (pDVar2 != (Dictionary_2_KogamaControls_UnityEngine_KeyCode__1 *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]
             ::Dictionary_2_KogamaControls_System_Object__get_Item
                       ((Dictionary_2_KogamaControls_System_Object_ *)pDVar2,control,
                        MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__get_Item_KogamaControls_
                       );
    pMVar4 = (MonitorData *)0x0;
    if (pOVar3 != (Object *)0x0) {
      pOVar5 = pOVar3 + 2;
      for (; (int)pMVar4 < (int)pOVar3[1].monitor; pMVar4 = pMVar4 + 1) {
        if (pOVar3[1].monitor <= pMVar4) goto code_?;
        bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Input::Input_GetKeyDown
                          ((KeyCode__Enum)pOVar5->klass,(MethodInfo *)0x0);
        if (bVar6 != 0) {
          uVar7 = 1;
          pDVar8 = (this->fields).controlDown;
          if ((pDVar8 == (DesktopDefaultKeyboardMapping_ControlBitArray *)0x0) ||
             (pBVar9 = (pDVar8->fields).controlDown, pBVar9 == (BitArray *)0x0))
          goto code_?;
          mscorlib.dll::System::Collections::BitArray::BitArray_Set
                    (pBVar9,control,1,(MethodInfo *)0x0);
          goto code_?;
        }
        pOVar5 = (Object *)&pOVar5->monitor;
      }
      uVar7 = 0;
code_?:
      pDVar8 = (this->fields).controlDown;
      if ((pDVar8 != (DesktopDefaultKeyboardMapping_ControlBitArray *)0x0) &&
         (pBVar9 = (pDVar8->fields).controlDown, pBVar9 != (BitArray *)0x0)) {
        bVar6 = mscorlib.dll::System::Collections::BitArray::BitArray_Get
                          (pBVar9,control,(MethodInfo *)0x0);
        iVar10 = (uint)CONCAT11(uVar7,bVar6) << 0x10;
        if (cRam_? == '\0') {
          iVar10 = _UNK_?;
          func_?();
          cRam_? = '\x01';
        }
        pDVar2 = (this->fields).keyMapping;
        this = (DesktopDefaultKeyboardMapping *)0x0;
        if (pDVar2 != (Dictionary_2_KogamaControls_UnityEngine_KeyCode__1 *)0x0) {
          pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::
                   Object]::Dictionary_2_KogamaControls_System_Object__get_Item
                             ((Dictionary_2_KogamaControls_System_Object_ *)pDVar2,control,
                              MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__get_Item_KogamaControls_
                             );
          pMVar4 = (MonitorData *)0x0;
          if (pOVar3 != (Object *)0x0) {
            pOVar11 = (Object__Class *)(pOVar3 + 2);
            while( true ) {
              uVar12 = (undefined2)((uint)iVar10 >> 0x10);
              if ((int)pOVar3[1].monitor <= (int)pMVar4) break;
              if (pOVar3[1].monitor <= pMVar4) goto code_?;
              pDVar8 = (pDVar1->fields).controlDown;
              key = (Object__Class *)(pOVar11->_0).image;
              if ((pDVar8 == (DesktopDefaultKeyboardMapping_ControlBitArray *)0x0) ||
                 (pBVar9 = (pDVar8->fields).controlDown, pBVar9 == (BitArray *)0x0))
              goto code_?;
              bVar6 = mscorlib.dll::System::Collections::BitArray::BitArray_Get
                                (pBVar9,control,(MethodInfo *)0x0);
              if (bVar6 == 0) {
code_?:
                bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Input::Input_GetKeyUp
                                  ((KeyCode__Enum)key,(MethodInfo *)0x0);
                if (bVar6 != 0) goto code_?;
                pDVar8 = (pDVar1->fields).controlDown;
                if (pDVar8 == (DesktopDefaultKeyboardMapping_ControlBitArray *)0x0)
                goto code_?;
                bVar6 = DesktopDefaultKeyboardMapping+ControlBitArray::
                        DesktopDefaultKeyboardMapping_ControlBitArray_get_Item
                                  (pDVar8,control,(MethodInfo *)0x0);
                uVar12 = (undefined2)((uint)iVar10 >> 0x10);
                if (bVar6 != 0) {
                  this._3_1_ = 0;
                  goto code_?;
                }
                pMVar4 = pMVar4 + 1;
                pOVar11 = (Object__Class *)&(pOVar11->_0).gc_desc;
              }
              else {
                iVar10 = 0;
                pOVar3 = (Object *)&UNK_?;
                pOVar11 = key;
                bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Input::Input_GetKey
                                  ((KeyCode__Enum)key,(MethodInfo *)0x0);
                if (bVar6 != 0) goto code_?;
code_?:
                this = (DesktopDefaultKeyboardMapping *)0x1000000;
                pMVar4 = pMVar4 + 1;
                pOVar11 = (Object__Class *)&(pOVar11->_0).gc_desc;
              }
            }
            if (this._3_1_ != 0) {
              pDVar8 = (pDVar1->fields).controlDown;
              if ((pDVar8 == (DesktopDefaultKeyboardMapping_ControlBitArray *)0x0) ||
                 (pBVar9 = (pDVar8->fields).controlDown, pBVar9 == (BitArray *)0x0))
              goto code_?;
              mscorlib.dll::System::Collections::BitArray::BitArray_Set
                        (pBVar9,control,0,(MethodInfo *)0x0);
            }
code_?:
            if (keyState == KeyState__Enum_Up) {
              return this._3_1_;
            }
            if (keyState == KeyState__Enum_Down) {
              return (bool)((ushort)uVar12 >> 8);
            }
            if (keyState == KeyState__Enum_Pressed) {
              return (bool)uVar12;
            }
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)StringLiteral_Unexpected_key_state_,(MethodInfo *)0x0);
            return 0;
          }
        }
      }
    }
  }
code_?:
  func_?(0);
code_?:
  uVar13 = func_?(0,0);
  func_?(uVar13);
  pcVar14 = (code *)swi(3);
  bVar6 = (*pcVar14)();
  return bVar6;
}


/* Boolean KeyDown(KogamaControls) */

bool Assembly-CSharp.dll::DesktopDefaultKeyboardMapping::DesktopDefaultKeyboardMapping_KeyDown
               (DesktopDefaultKeyboardMapping *this,KogamaControls__Enum control,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).keyMapping;
  if (this_00 != (Dictionary_2_KogamaControls_UnityEngine_KeyCode__1 *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]
             ::Dictionary_2_KogamaControls_System_Object__get_Item
                       ((Dictionary_2_KogamaControls_System_Object_ *)this_00,control,
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
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Input::Input_GetKeyDown
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
  func_?(0);
code_?:
  uVar5 = func_?(0);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  bVar4 = (*pcVar6)();
  return bVar4;
}


/* Boolean KeyUp(KogamaControls) */

bool Assembly-CSharp.dll::DesktopDefaultKeyboardMapping::DesktopDefaultKeyboardMapping_KeyUp
               (DesktopDefaultKeyboardMapping *this,KogamaControls__Enum control,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = (Object__Class *)0x0;
  this_00 = (this->fields).keyMapping;
  if (this_00 != (Dictionary_2_KogamaControls_UnityEngine_KeyCode__1 *)0x0) {
    pOStack_2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::
                Object]::Dictionary_2_KogamaControls_System_Object__get_Item
                          ((Dictionary_2_KogamaControls_System_Object_ *)this_00,control,
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
        bVar6 = mscorlib.dll::System::Collections::BitArray::BitArray_Get
                          (this_01,control,(MethodInfo *)0x0);
        if (bVar6 == 0) {
code_?:
          bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Input::Input_GetKeyUp
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
          bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Input::Input_GetKey
                            ((KeyCode__Enum)key,(MethodInfo *)0x0);
          if (bVar6 != 0) goto code_?;
        }
        pOVar1 = (Object__Class *)0x1000000;
        pMVar3 = pMVar3 + 1;
        pOVar4 = (Object *)&pOVar4->monitor;
      } while( true );
    }
  }
  func_?(0);
code_?:
  uVar7 = func_?(0,0);
  func_?(uVar7);
  pcVar8 = (code *)swi(3);
  bVar6 = (*pcVar8)();
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
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* DesktopDefaultKeyboardMapping() */

void Assembly-CSharp.dll::DesktopDefaultKeyboardMapping::DesktopDefaultKeyboardMapping__ctor
               (DesktopDefaultKeyboardMapping *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (ScaleAnimationBase *)
            func_?(TypeInfo__DesktopDefaultKeyboardMapping__ControlBitArray);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__System__Collections__BitArray;
  this_01 = (BitArray *)func_?();
  mscorlib.dll::System::Collections::BitArray::BitArray__ctor_2(this_01,0x34,(MethodInfo *)0x0);
  (this_00->fields)._._._._.m_CachedPtr = this_01;
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this->fields).controlDown = (DesktopDefaultKeyboardMapping_ControlBitArray *)this_00;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  pUVar1 = MVGameControllerDesktop::MVGameControllerDesktop_get_OnApplicationLostFocus
                     ((MethodInfo *)0x0);
  this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_02,(Object *)this,MethodInfo__DesktopDefaultKeyboardMapping__Reset__,
             (MethodInfo *)0x0);
  pUVar2 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar1,(Delegate *)this_02,(MethodInfo *)0x0);
  pUVar1 = (UnityAction *)0x0;
  if (pUVar2 == (UnityAction *)0x0) {
code_?:
    MVGameControllerDesktop::MVGameControllerDesktop_set_OnApplicationLostFocus
              (pUVar1,(MethodInfo *)0x0);
    this_03 = (Dictionary_2_KogamaControls_UnityEngine_KeyCode__1 *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_03,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Dictionary__
              );
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)0x65;
    if (pOVar3[1].monitor < (MonitorData *)0x2) goto code_?;
    pOVar3[2].monitor = (MonitorData *)0x20;
    if (this_03 == (Dictionary_2_KogamaControls_UnityEngine_KeyCode__1 *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,KogamaControls__Enum_EditMoveUp
               ,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)0x63;
    if (pOVar3[1].monitor < (MonitorData *)0x2) goto code_?;
    pOVar3[2].monitor = (MonitorData *)0x132;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,
               KogamaControls__Enum_EditMoveDown,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)0x143;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,
               KogamaControls__Enum_PointerSelect,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)0x144;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,
               KogamaControls__Enum_PointerSelectAlt,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)0x7f;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,
               KogamaControls__Enum_DeleteObject,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)0x1b;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,
               KogamaControls__Enum_LeaveObject,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)0x130;
    if (pOVar3[1].monitor < (MonitorData *)0x2) goto code_?;
    pOVar3[2].monitor = (MonitorData *)0x12f;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,
               KogamaControls__Enum_AddToSelection,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)0x118;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,
               KogamaControls__Enum_MoveDrawPlaneUp,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)0x119;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,
               KogamaControls__Enum_MoveDrawPlaneDown,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pAVar4 = (Array *)func_?();
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              (pAVar4,__field_A6455EF620D582230E301BBFB6200818126320E2_Field,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,
               KogamaControls__Enum_EmbedChangeGame,(Object *)pAVar4,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)0x6f;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,
               KogamaControls__Enum_ToggleFullScreen,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)0x68;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,KogamaControls__Enum_ToggleHD,
               pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)0x74;
    if (pOVar3[1].monitor < (MonitorData *)0x2) goto code_?;
    pOVar3[2].monitor = (MonitorData *)0xd;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,KogamaControls__Enum_ShowChat,
               pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)0x6b;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,KogamaControls__Enum_Respawn,
               pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)0x79;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,
               KogamaControls__Enum_TogglePlayerParticles,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)0x9;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,
               KogamaControls__Enum_ShowPlayerWindow,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)0x76;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,
               KogamaControls__Enum_DropCurrentItem,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)0x71;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,KogamaControls__Enum_Holster,
               pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)0x65;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,KogamaControls__Enum_Use,pOVar3
               ,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)0x76;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,
               KogamaControls__Enum_FocusOnSelectedModel,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)0x70;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,
               KogamaControls__Enum_TogglePlayInEditor,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)0x6c;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,
               KogamaControls__Enum_ToggleLogicRendering,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)0x67;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,
               KogamaControls__Enum_ToggleGripdSnapSize,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)0x31;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,
               KogamaControls__Enum_ActivateEditCubeTool,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)0x32;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,
               KogamaControls__Enum_ActivateDeleteCubeTool,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)0x33;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,
               KogamaControls__Enum_ActivetaPaintCubeTool,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)0x72;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,
               KogamaControls__Enum_ChangeMaterial,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)0x69;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,
               KogamaControls__Enum_OpenInventory,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)0x6e;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,
               KogamaControls__Enum_CreateNewModel,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)0x66;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,
               KogamaControls__Enum_ToggleDrawPlane,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pAVar4 = (Array *)func_?();
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              (pAVar4,__field_30FD64AA2D79FA3FEE42A8BD5147DAFB8836D66D_Field,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,
               KogamaControls__Enum_DrawAudioBox,(Object *)pAVar4,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)0xd;
    if (pOVar3[1].monitor < (MonitorData *)0x2) goto code_?;
    pOVar3[2].monitor = (MonitorData *)0x10f;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,
               KogamaControls__Enum_ChatSendLine,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)0x112;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,
               KogamaControls__Enum_ChatShiftLineDown,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)0x111;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,
               KogamaControls__Enum_ChatShiftLineUp,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)0x9;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,
               KogamaControls__Enum_ChangeFocus,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)0x130;
    if (pOVar3[1].monitor < (MonitorData *)0x2) goto code_?;
    pOVar3[2].monitor = (MonitorData *)0x12f;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,
               KogamaControls__Enum_ChangeChangeFocusDirection,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)0x6d;
    if (pOVar3[1].monitor < (MonitorData *)0x2) goto code_?;
    pOVar3[2].monitor = (MonitorData *)0x1b;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,KogamaControls__Enum_LobbyMenu,
               pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)0x1b;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,KogamaControls__Enum_Escape,
               pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)0x130;
    if (pOVar3[1].monitor < (MonitorData *)0x2) goto code_?;
    pOVar3[2].monitor = (MonitorData *)0x12f;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,
               KogamaControls__Enum_EditMoveFast,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)0x77;
    if (pOVar3[1].monitor < (MonitorData *)0x2) goto code_?;
    pOVar3[2].monitor = (MonitorData *)0x111;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,
               KogamaControls__Enum_EditMoveForward,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)0x61;
    if (pOVar3[1].monitor < (MonitorData *)0x2) goto code_?;
    pOVar3[2].monitor = (MonitorData *)0x114;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,
               KogamaControls__Enum_EditMoveLeft,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)0x64;
    if (pOVar3[1].monitor < (MonitorData *)0x2) goto code_?;
    pOVar3[2].monitor = (MonitorData *)0x113;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,
               KogamaControls__Enum_EditMoveRight,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)0x73;
    if (pOVar3[1].monitor < (MonitorData *)0x2) goto code_?;
    pOVar3[2].monitor = (MonitorData *)0x112;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_03,
               KogamaControls__Enum_EditMoveBackwards,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (pOVar3[1].monitor != (MonitorData *)0x0) {
      pOVar3[2].klass = (Object__Class *)0x72;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
      Dictionary_2_KogamaControls_System_Object__Add
                ((Dictionary_2_KogamaControls_System_Object_ *)this_03,
                 KogamaControls__Enum_NotificationAcceptFriendshipRequest,pOVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                );
      (this->fields).keyMapping = this_03;
      return;
    }
  }
  else {
    if (pUVar2->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar1 = pUVar2;
    }
    if (pUVar1 != (UnityAction *)0x0) goto code_?;
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
  }
  func_?();
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

