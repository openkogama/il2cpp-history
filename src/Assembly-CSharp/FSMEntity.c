
/* Void ClearStateStack() */

void Assembly-CSharp.dll::FSMEntity::FSMEntity_ClearStateStack(FSMEntity *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = this;
  pSVar1 = (this->fields).stateStack;
  if (pSVar1 != (Stack_1_EditorEvent_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pSVar1,
                        MethodInfo__System__Collections__Generic__Stack<EditorEvent>__get_Count__);
    if (0 < (int)pOVar2) {
      pSVar1 = (this_00->fields).stateStack;
      if (pSVar1 == (Stack_1_EditorEvent_ *)0x0) goto code_?;
      this = (FSMEntity *)
             System.dll::System::Collections::Generic::Stack`1[EditorEvent]::
             Stack_1_EditorEvent__Pop
                       (pSVar1,MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Pop__);
      (this_00->fields).clearStack = 1;
      pOVar2 = (Object *)func_?(TypeInfo__EditorEvent,&this);
      FSMEntity_set_Event(this_00,pOVar2,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean PopState() */

bool Assembly-CSharp.dll::FSMEntity::FSMEntity_PopState(FSMEntity *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = this;
  if ((this->fields).lockState != 0) {
    return 0;
  }
  pSVar1 = (this->fields).stateStack;
  if (pSVar1 != (Stack_1_EditorEvent_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pSVar1,
                        MethodInfo__System__Collections__Generic__Stack<EditorEvent>__get_Count__);
    if ((int)pOVar2 < 1) {
      return 0;
    }
    pSVar1 = (this_00->fields).stateStack;
    if (pSVar1 != (Stack_1_EditorEvent_ *)0x0) {
      this = (FSMEntity *)
             System.dll::System::Collections::Generic::Stack`1[EditorEvent]::
             Stack_1_EditorEvent__Pop
                       (pSVar1,MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Pop__);
      (this_00->fields).clearStack = 0;
      pOVar2 = (Object *)func_?(TypeInfo__EditorEvent,&this);
      FSMEntity_set_Event(this_00,pOVar2,(MethodInfo *)0x0);
      return 1;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void PushState(EditorEvent) */

void Assembly-CSharp.dll::FSMEntity::FSMEntity_PushState
               (FSMEntity *this,EditorEvent__Enum nextState,MethodInfo *method)

{
  if ((this->fields).lockState == 0) {
    FSMEntity_PushState_1(this,nextState,EditorEvent__Enum_UndefinedState,(MethodInfo *)0x0);
  }
  return;
}


/* Void PushState(EditorEvent, EditorEvent) */

void Assembly-CSharp.dll::FSMEntity::FSMEntity_PushState_1
               (FSMEntity *this,EditorEvent__Enum nextState,EditorEvent__Enum overridePushState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = this;
  if ((this->fields).lockState != 0) {
    return;
  }
  this_00 = (Stack_1_ShortcutManager_ShortcutKey_ *)(this->fields).stateStack;
  if (overridePushState == EditorEvent__Enum_UndefinedState) {
    pOVar1 = (this->fields).curEvent;
    if ((this_00 != (Stack_1_ShortcutManager_ShortcutKey_ *)0x0) && (pOVar1 != (Object *)0x0)) {
      pEVar2 = TypeInfo__EditorEvent;
      if ((pOVar1->klass->_0).element_class == (TypeInfo__EditorEvent->_0).element_class) {
        puVar3 = (undefined4 *)func_?(pOVar1);
        System.dll::System::Collections::Generic::Stack`1[ShortcutManager+ShortcutKey]::
        Stack_1_ShortcutManager_ShortcutKey__Push
                  (this_00,(ShortcutManager_ShortcutKey *)*puVar3,
                   MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Push_EditorEvent_);
        goto code_?;
      }
      goto code_?;
    }
  }
  else if (this_00 != (Stack_1_ShortcutManager_ShortcutKey_ *)0x0) {
    System.dll::System::Collections::Generic::Stack`1[ShortcutManager+ShortcutKey]::
    Stack_1_ShortcutManager_ShortcutKey__Push
              (this_00,(ShortcutManager_ShortcutKey *)overridePushState,
               MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Push_EditorEvent_);
code_?:
    this = (FSMEntity *)nextState;
    (this_01->fields).clearStack = 0;
    pOVar1 = (Object *)func_?(TypeInfo__EditorEvent,&this);
    FSMEntity_set_Event(this_01,pOVar1,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pOVar1 = extraout_ECX;
  pEVar2 = extraout_EDX;
code_?:
  func_?(pOVar1,pEVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* FSMEntity() */

void Assembly-CSharp.dll::FSMEntity::FSMEntity__ctor(FSMEntity *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  (this->fields).data = this_00;
  (this->fields).clearStack = 1;
  method_00 = TypeInfo__System__Collections__Generic__Stack<EditorEvent>;
  this_01 = (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)func_?();
  UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
  TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
  TweenRunner_1_T_Start_c_Iterator0_FloatTween___ctor
            (this_01,MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Stack__);
  (this->fields).stateStack = (Stack_1_EditorEvent_ *)this_01;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  return;
}


/* Boolean get_LockState() */

bool Assembly-CSharp.dll::FSMEntity::FSMEntity_get_LockState(FSMEntity *this,MethodInfo *method)

{
  return (this->fields).lockState;
}


/* Void set_Event(Object) */

void Assembly-CSharp.dll::FSMEntity::FSMEntity_set_Event
               (FSMEntity *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).lockState != 0) {
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat
                       ((Object *)StringLiteral_State_is_locked__could_not_set_s,value,
                        (MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)pSVar1,(MethodInfo *)0x0);
    return;
  }
  (this->fields).nextEvent = value;
  if (value == (Object *)0x0) {
    pIVar2 = (this->fields).currentState;
    if (pIVar2 != (IState *)0x0) {
      func_?(2,TypeInfo__IState,pIVar2,this);
      (this->fields).currentState = (IState *)0x0;
      return;
    }
  }
  else {
    this_00 = (this->fields).transitionTable;
    if (this_00 != (StateTransitionTable *)0x0) {
      pIVar2 = StateTransitionTable::StateTransitionTable_GetState(this_00,value,(MethodInfo *)0x0);
      if (pIVar2 != (IState *)0x0) {
        pIVar3 = (this->fields).currentState;
        if (pIVar3 != (IState *)0x0) {
          func_?(2,TypeInfo__IState,pIVar3,this);
        }
        pSVar1 = (String *)
                 (*(code *)(value->klass->vtable).ToString.method)(value,value->klass[1]._0.image);
        (this->fields).stateName = pSVar1;
        (this->fields).currentState = pIVar2;
        (this->fields).nextEvent = (Object *)0x0;
        (this->fields).prevEvent = (this->fields).curEvent;
        (this->fields).curEvent = value;
        func_?(0,TypeInfo__IState,pIVar2,this);
        this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)(this->fields).data;
        if (this_01 ==
            (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
                  (this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                  );
      }
      if ((this->fields).clearStack == 0) {
        (this->fields).clearStack = 1;
        return;
      }
      this_02 = (this->fields).stateStack;
      if (this_02 != (Stack_1_EditorEvent_ *)0x0) {
        System.dll::System::Collections::Generic::Stack`1[System::Int32]::
        Stack_1_System_Int32__Clear
                  ((Stack_1_System_Int32_ *)this_02,
                   MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Clear__);
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void set_LockState(Boolean) */

void Assembly-CSharp.dll::FSMEntity::FSMEntity_set_LockState
               (FSMEntity *this,bool value,MethodInfo *method)

{
  (this->fields).lockState = value;
  return;
}

