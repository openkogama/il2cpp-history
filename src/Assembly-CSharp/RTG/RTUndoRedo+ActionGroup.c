
/* RTUndoRedo+ActionGroup(IUndoRedoAction) */

void Assembly-CSharp.dll::RTG::RTUndoRedo+ActionGroup::RTUndoRedo_ActionGroup__ctor
               (RTUndoRedo_ActionGroup *this,IUndoRedoAction *action,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>__Add_RTG__IUndoRedoAction_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>);
    cRam_? = '\x01';
  }
  this_01 = (List_1_RTG_IUndoRedoAction_ *)
            func_?(TypeInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>__List__);
  method_00 = (MethodInfo *)&this->fields;
  (this->fields).Actions = this_01;
  func_?(method_00,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  this_00 = (List_1_System_Object_ *)(this->fields).Actions;
  if (this_00 != (List_1_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              (this_00,(Object *)
                       MethodInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>__Add_RTG__IUndoRedoAction_
               ,
               MethodInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>__Add_RTG__IUndoRedoAction_
              );
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

