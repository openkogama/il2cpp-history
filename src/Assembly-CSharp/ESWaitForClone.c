
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESWaitForClone::ESWaitForClone_Enter
               (ESWaitForClone *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((e != (EditorStateMachine *)0x0) &&
     (this_00 = (e->fields)._.data, this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)this_00,StringLiteral_goToInsert,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    (this->fields).goToInsert = bVar1 != 0;
    pSVar2 = (e->fields).selectionController;
    if (pSVar2 != (SelectionController *)0x0) {
      pMVar3 = SelectionController::SelectionController_get_SingleSelectedWO
                         (pSVar2,(MethodInfo *)0x0);
      if ((pMVar3 != (MVWorldObjectClient *)0x0) && ((this->fields).goToInsert == 0)) {
        pSVar2 = (e->fields).selectionController;
        if (pSVar2 == (SelectionController *)0x0) goto code_?;
        pMVar3 = SelectionController::SelectionController_get_SingleSelectedWO
                           (pSVar2,(MethodInfo *)0x0);
        if (pMVar3 == (MVWorldObjectClient *)0x0) goto code_?;
        puVar4 = (undefined8 *)(*(code *)(pMVar3->klass->vtable).get_WorldPosition_1.method)();
        uVar5 = *puVar4;
        fVar6 = *(float *)(puVar4 + 1);
        (this->fields).pos.x = (float)(int)uVar5;
        (this->fields).pos.y = (float)(int)((ulonglong)uVar5 >> 0x20);
        (this->fields).pos.z = fVar6;
        pSVar2 = (e->fields).selectionController;
        if (pSVar2 == (SelectionController *)0x0) goto code_?;
        pMVar3 = SelectionController::SelectionController_get_SingleSelectedWO
                           (pSVar2,(MethodInfo *)0x0);
        if (pMVar3 == (MVWorldObjectClient *)0x0) goto code_?;
        pQVar7 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                            ((Quaternion *)&stack0xffffffec,pMVar3,(MethodInfo *)0x0);
        fVar6 = pQVar7->y;
        fVar8 = pQVar7->z;
        fVar9 = pQVar7->w;
        (this->fields).rot.x = pQVar7->x;
        (this->fields).rot.y = fVar6;
        (this->fields).rot.z = fVar8;
        (this->fields).rot.w = fVar9;
      }
      pSVar2 = (e->fields).selectionController;
      if (pSVar2 != (SelectionController *)0x0) {
        SelectionController::SelectionController_DeSelectAll(pSVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESWaitForClone::ESWaitForClone_Execute
               (ESWaitForClone *this,EditorStateMachine *e,MethodInfo *method)

{
  uVar1 = CONCAT44(unaff_ESI,unaff_EDI);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = e;
  if ((e != (EditorStateMachine *)0x0) &&
     (pSVar2 = (e->fields).selectionController, pSVar2 != (SelectionController *)0x0)) {
    pMVar3 = SelectionController::SelectionController_get_SingleSelectedWO(pSVar2,(MethodInfo *)0x0)
    ;
    if (pMVar3 == (MVWorldObjectClient *)0x0) {
      return;
    }
    pSVar2 = (this_00->fields).selectionController;
    if (pSVar2 != (SelectionController *)0x0) {
      uVar1 = ZEXT48(pSVar2);
      pMVar3 = SelectionController::SelectionController_get_SingleSelectedWO
                         (pSVar2,(MethodInfo *)0x0);
      if (pMVar3 != (MVWorldObjectClient *)0x0) {
        uVar1._0_4_ = (this->fields).pos.x;
        uVar1._4_4_ = (this->fields).pos.y;
        (*(code *)(pMVar3->klass->vtable).set_WorldPosition.method)
                  (pMVar3,uVar1,(this->fields).pos.z);
        pSVar2 = (this_00->fields).selectionController;
        if ((pSVar2 != (SelectionController *)0x0) &&
           (pMVar3 = SelectionController::SelectionController_get_SingleSelectedWO
                               (pSVar2,(MethodInfo *)0x0), pMVar3 != (MVWorldObjectClient *)0x0)) {
          MVWorldObjectClient::MVWorldObjectClient_set_SyncRot
                    (pMVar3,(this->fields).rot,(MethodInfo *)0x0);
          if ((this->fields).goToInsert != 0) {
            FSMEntity::FSMEntity_PushState_1
                      ((FSMEntity *)this_00,EditorEvent__Enum_ESInsert,
                       EditorEvent__Enum_ObjectSelected,(MethodInfo *)0x0);
            return;
          }
          pDVar4 = (this_00->fields)._.data;
          pCVar5 = (CrossPlatformInputManager_VirtualButton *)func_?();
          if (pDVar4 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]
            ::
            Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                      ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                        *)pDVar4,StringLiteral_translateMode,pCVar5,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      );
            pDVar4 = (this_00->fields)._.data;
            e = (EditorStateMachine *)CONCAT13(1,e._0_3_);
            pCVar5 = (CrossPlatformInputManager_VirtualButton *)
                     func_?(TypeInfo__System__Boolean,(int)&e + 3);
            if (pDVar4 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              String,UnityStandardAssets::CrossPlatformInput::
              CrossPlatformInputManager+VirtualButton]::
              Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                        ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                          *)pDVar4,StringLiteral_moveWithAvatar,pCVar5,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              FSMEntity::FSMEntity_PushState_1
                        ((FSMEntity *)this_00,EditorEvent__Enum_ESTranslate,
                         EditorEvent__Enum_ObjectSelected,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?(0,uVar1);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESWaitForClone::ESWaitForClone_Exit
               (ESWaitForClone *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_2,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  (this->fields).pos.x = pVVar1->x;
  (this->fields).pos.y = fVar3;
  (this->fields).pos.z = fVar4;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?();
  }
  pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                     ((Quaternion *)&stack0xffffffec,(MethodInfo *)0x0);
  fVar4 = pQVar5->y;
  fVar3 = pQVar5->z;
  fVar6 = pQVar5->w;
  (this->fields).rot.x = pQVar5->x;
  (this->fields).rot.y = fVar4;
  (this->fields).rot.z = fVar3;
  (this->fields).rot.w = fVar6;
  return;
}


/* ESWaitForClone() */

void Assembly-CSharp.dll::ESWaitForClone::ESWaitForClone__ctor
               (ESWaitForClone *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_2,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  (this->fields).pos.x = pVVar1->x;
  (this->fields).pos.y = fVar3;
  (this->fields).pos.z = fVar4;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?();
  }
  pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                     ((Quaternion *)&stack0xffffffec,(MethodInfo *)0x0);
  fVar4 = pQVar5->y;
  fVar3 = pQVar5->z;
  fVar6 = pQVar5->w;
  (this->fields).rot.x = pQVar5->x;
  (this->fields).rot.y = fVar4;
  (this->fields).rot.z = fVar3;
  (this->fields).rot.w = fVar6;
  ESStateBase::ESStateBase__ctor((ESStateBase *)this,(MethodInfo *)0x0);
  return;
}

