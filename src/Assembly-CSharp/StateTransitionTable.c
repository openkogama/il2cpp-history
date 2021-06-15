
/* IState GetState(Object) */

IState * Assembly-CSharp.dll::StateTransitionTable::StateTransitionTable_GetState
                   (StateTransitionTable *this,Object *evt,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  uStack_1 = 0;
  this_00 = (this->fields).table;
  if (this_00 != (Dictionary_2_System_Object_IState_ *)0x0) {
    pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)this_00,(Type *)evt,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__get_Item_System__Object_
                       );
    *unaff_FS_OFFSET = uStack_3;
    return (IState *)pPVar4;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  pIVar6 = (IState *)(*pcVar5)();
  return pIVar6;
}


/* Void SetState(Object, IState) */

void Assembly-CSharp.dll::StateTransitionTable::StateTransitionTable_SetState
               (StateTransitionTable *this,Object *evt,IState *state,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).table;
  if (this_00 != (Dictionary_2_System_Object_IState_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)this_00,(String *)evt,(CrossPlatformInputManager_VirtualButton *)state,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* StateTransitionTable() */

void Assembly-CSharp.dll::StateTransitionTable::StateTransitionTable__ctor
               (StateTransitionTable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_IState_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_IState>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Dictionary__
            );
  (this->fields).table = this_00;
  return;
}

