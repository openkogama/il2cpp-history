
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESWaitForSelected::ESWaitForSelected_Enter
               (ESWaitForSelected *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((e != (EditorStateMachine *)0x0) &&
     (this_00 = (e->fields).selectionController, this_00 != (SelectionController *)0x0)) {
    SelectionController::SelectionController_DeSelectAll(this_00,(MethodInfo *)0x0);
    this_01 = (e->fields)._.data;
    if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
              WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
              KogamaSettingWrapperBase]::
              Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                        ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                          *)this_01,StringLiteral_IsNewPrototype,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      (this->fields).isNewPrototype = bVar1;
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESWaitForSelected::ESWaitForSelected_Execute
               (ESWaitForSelected *this,EditorStateMachine *e,MethodInfo *method)

{
  if ((e != (EditorStateMachine *)0x0) &&
     (this_00 = (e->fields).selectionController, this_00 != (SelectionController *)0x0)) {
    pMVar1 = SelectionController::SelectionController_get_SingleSelectedWO
                       (this_00,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      if ((this->fields).useESInsert != 0) {
        FSMEntity::FSMEntity_PushState_1
                  ((FSMEntity *)e,EditorEvent__Enum_ESInsert,EditorEvent__Enum_ObjectSelected,
                   (MethodInfo *)0x0);
        return;
      }
      FSMEntity::FSMEntity_PushState_1
                ((FSMEntity *)e,EditorEvent__Enum_ESTranslate,EditorEvent__Enum_ObjectSelected,
                 (MethodInfo *)0x0);
    }
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESWaitForSelected::ESWaitForSelected_Exit
               (ESWaitForSelected *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isNewPrototype == 0) {
    return;
  }
  if (e != (EditorStateMachine *)0x0) {
    this_00 = (e->fields)._.data;
    this = (ESWaitForSelected *)CONCAT13(1,this._0_3_);
    value = (Theme *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
      Dictionary_2_System_String_Theme__set_Item
                ((Dictionary_2_System_String_Theme_ *)this_00,StringLiteral_IsNewPrototype,value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* ESWaitForSelected() */

void Assembly-CSharp.dll::ESWaitForSelected::ESWaitForSelected__ctor
               (ESWaitForSelected *this,MethodInfo *method)

{
  (this->fields).useESInsert = 1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pWVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                     ((MethodInfo *)0x0);
  (this->fields)._.tintedWo = pWVar1;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  if ((((uint)(TypeInfo__LoggerManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LoggerManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__LoggerManager);
  }
  this_00 = LoggerManager::LoggerManager_get_Instance((MethodInfo *)0x0);
  type = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
  if (this_00 != (LoggerManager *)0x0) {
    pIVar2 = LoggerManager::LoggerManager_GetLogger(this_00,type,(MethodInfo *)0x0);
    (this->fields)._.logger = pIVar2;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

