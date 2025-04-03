
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
  this_00 = (List_1_RTG_IUndoRedoAction_ *)
            func_?(TypeInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>__List__);
  pRVar1 = &this->fields;
  pRVar1->Actions = this_00;
  method_00 = (MethodInfo *)pRVar1;
  func_?(pRVar1,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  if ((List_1_System_Object_ *)pRVar1->Actions != (List_1_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)pRVar1->Actions,
               (Object *)
               MethodInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>__Add_RTG__IUndoRedoAction_
               ,
               MethodInfo__System__Collections__Generic__List<RTG::IUndoRedoAction>__Add_RTG__IUndoRedoAction_
              );
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

