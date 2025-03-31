
/* Void Initialize(MVTeam, UnityAction`1[MV.WorldObject.MVTeam]) */

void Assembly-CSharp.dll::SpawnRoleTeamEditor::SpawnRoleTeamEditor_Initialize
               (SpawnRoleTeamEditor *this,MVTeam__Enum spawnRolesTeam,
               UnityAction_1_MV_WorldObject_MVTeam_ *onTeamChangeCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  (this->fields).onTeamChangeCallback = onTeamChangeCallback;
  func_?(&(this->fields).onTeamChangeCallback,onTeamChangeCallback);
  pLVar1 = (this->fields).teamButtons;
  index = 0;
  if (pLVar1 != (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) {
    while( true ) {
      if ((pLVar1->fields)._size <= index) {
        return;
      }
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar2 == (MVNetworkGame *)0x0) ||
         (pMVar3 = (pMVar2->fields).teamManager, pMVar3 == (MVTeamManager *)0x0)) break;
      this_00 = (pMVar3->fields).teamNames;
      pLVar4 = (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                *)(this->fields).teamButtons;
      if ((pLVar4 == (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                      *)0x0) ||
         (pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Linq::Expressions::
                   Interpreter::InstructionList+DebugView+InstructionView]::
                   List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView__get_Item
                             (&IStack_6,pLVar4,index,
                              MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                             ), this_00 == (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0)
         ) break;
      pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                          (Int32Enum__Enum)pIVar5->_instruction,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                         );
      pLVar4 = (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                *)(this->fields).teamButtons;
      if (pLVar4 == (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                     *)0x0) break;
      pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Linq::Expressions::
               Interpreter::InstructionList+DebugView+InstructionView]::
               List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView__get_Item
                         ((InstructionList_DebugView_InstructionView *)&stack0xffffffd4,pLVar4,index
                          ,
                          MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                         );
      piVar8 = (int *)pIVar5->_continuationsDepth;
      IStack_6._instruction = pIVar5->_instruction;
      if (piVar8 == (int *)0x0) break;
      IStack_6._name = *(String **)(*piVar8 + 0x31c);
      IStack_6._index = (int32_t)&UNK_?;
      IStack_6._stackDepth = (int32_t)piVar8;
      IStack_6._continuationsDepth = (int32_t)pOVar7;
      (**(code **)(*piVar8 + 0x318))();
      pLVar4 = (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                *)(this->fields).teamButtons;
      if (pLVar4 == (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                     *)0x0) break;
      pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Linq::Expressions::
               Interpreter::InstructionList+DebugView+InstructionView]::
               List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView__get_Item
                         ((InstructionList_DebugView_InstructionView *)&stack0xffffffd4,pLVar4,index
                          ,
                          MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                         );
      pSVar9 = pIVar5->_name;
      IStack_6._instruction = pIVar5->_instruction;
      if (pSVar9 == (String *)0x0) break;
      (*pSVar9->klass[1].vtable.System_IConvertible_ToType.methodPtr)
                (pSVar9,pOVar7,pSVar9->klass[1].vtable.System_IConvertible_ToType.method);
      pLVar4 = (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                *)(this->fields).teamButtons;
      if (pLVar4 == (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                     *)0x0) break;
      pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Linq::Expressions::
               Interpreter::InstructionList+DebugView+InstructionView]::
               List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView__get_Item
                         ((InstructionList_DebugView_InstructionView *)&stack0xffffffd4,pLVar4,index
                          ,
                          MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                         );
      value = (Instruction *)spawnRolesTeam == pIVar5->_instruction;
      IStack_6._index = pIVar5->_index;
      IStack_6._stackDepth = pIVar5->_stackDepth;
      IStack_6._continuationsDepth = pIVar5->_continuationsDepth;
      IStack_6._name = pIVar5->_name;
      pLVar4 = (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                *)(this->fields).teamButtons;
      if (pLVar4 == (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                     *)0x0) break;
      pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Linq::Expressions::
               Interpreter::InstructionList+DebugView+InstructionView]::
               List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView__get_Item
                         ((InstructionList_DebugView_InstructionView *)&stack0xffffffd4,pLVar4,index
                          ,
                          MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                         );
      IStack_6._instruction = pIVar5->_instruction;
      if ((GameObject *)pIVar5->_index == (GameObject *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                ((GameObject *)pIVar5->_index,value,(MethodInfo *)0x0);
      pLVar4 = (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                *)(this->fields).teamButtons;
      if (pLVar4 == (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                     *)0x0) break;
      pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Linq::Expressions::
               Interpreter::InstructionList+DebugView+InstructionView]::
               List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView__get_Item
                         ((InstructionList_DebugView_InstructionView *)&stack0xffffffd4,pLVar4,index
                          ,
                          MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                         );
      IStack_6._instruction = pIVar5->_instruction;
      if ((GameObject *)pIVar5->_stackDepth == (GameObject *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                ((GameObject *)pIVar5->_stackDepth,!value,(MethodInfo *)0x0);
      pLVar1 = (this->fields).teamButtons;
      index = index + 1;
      if (pLVar1 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SelectBlueTeam() */

void Assembly-CSharp.dll::SpawnRoleTeamEditor::SpawnRoleTeamEditor_SelectBlueTeam
               (SpawnRoleTeamEditor *this,MethodInfo *method)

{
  SpawnRoleTeamEditor_SelectTeam(this,MVTeam__Enum_Blue,(MethodInfo *)0x0);
  return;
}


/* Void SelectGreenTeam() */

void Assembly-CSharp.dll::SpawnRoleTeamEditor::SpawnRoleTeamEditor_SelectGreenTeam
               (SpawnRoleTeamEditor *this,MethodInfo *method)

{
  SpawnRoleTeamEditor_SelectTeam(this,MVTeam__Enum_Green,(MethodInfo *)0x0);
  return;
}


/* Void SelectRedTeam() */

void Assembly-CSharp.dll::SpawnRoleTeamEditor::SpawnRoleTeamEditor_SelectRedTeam
               (SpawnRoleTeamEditor *this,MethodInfo *method)

{
  SpawnRoleTeamEditor_SelectTeam(this,MVTeam__Enum_Red,(MethodInfo *)0x0);
  return;
}


/* Void SelectTeam(MVTeam) */

void Assembly-CSharp.dll::SpawnRoleTeamEditor::SpawnRoleTeamEditor_SelectTeam
               (SpawnRoleTeamEditor *this,MVTeam__Enum teamSelected,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields).onTeamChangeCallback;
  if (pUVar1 != (UnityAction_1_MV_WorldObject_MVTeam_ *)0x0) {
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,teamSelected,(pUVar1->fields)._._.method);
    index = 0;
    pLVar2 = (this->fields).teamButtons;
    while (pLVar2 != (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) {
      if ((pLVar2->fields)._size <= index) {
        return;
      }
      pLVar3 = (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                *)(this->fields).teamButtons;
      if (pLVar3 == (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                     *)0x0) break;
      pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Linq::Expressions::
               Interpreter::InstructionList+DebugView+InstructionView]::
               List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView__get_Item
                         ((InstructionList_DebugView_InstructionView *)&stack0xffffffe8,pLVar3,index
                          ,
                          MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                         );
      value = (Instruction *)teamSelected == pIVar4->_instruction;
      pLVar3 = (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                *)(this->fields).teamButtons;
      if (pLVar3 == (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                     *)0x0) break;
      pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Linq::Expressions::
               Interpreter::InstructionList+DebugView+InstructionView]::
               List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView__get_Item
                         ((InstructionList_DebugView_InstructionView *)&stack0xffffffd4,pLVar3,index
                          ,
                          MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                         );
      if ((GameObject *)pIVar4->_index == (GameObject *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                ((GameObject *)pIVar4->_index,value,(MethodInfo *)0x0);
      pLVar3 = (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                *)(this->fields).teamButtons;
      if (pLVar3 == (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                     *)0x0) break;
      pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Linq::Expressions::
               Interpreter::InstructionList+DebugView+InstructionView]::
               List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView__get_Item
                         ((InstructionList_DebugView_InstructionView *)&stack0xffffffd4,pLVar3,index
                          ,
                          MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                         );
      if ((GameObject *)pIVar4->_stackDepth == (GameObject *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                ((GameObject *)pIVar4->_stackDepth,!value,(MethodInfo *)0x0);
      index = index + 1;
      pLVar2 = (this->fields).teamButtons;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SelectYellowTeam() */

void Assembly-CSharp.dll::SpawnRoleTeamEditor::SpawnRoleTeamEditor_SelectYellowTeam
               (SpawnRoleTeamEditor *this,MethodInfo *method)

{
  SpawnRoleTeamEditor_SelectTeam(this,MVTeam__Enum_Yellow,(MethodInfo *)0x0);
  return;
}

