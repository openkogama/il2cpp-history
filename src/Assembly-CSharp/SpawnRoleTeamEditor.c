
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
  ppUVar1 = &(this->fields).onTeamChangeCallback;
  *ppUVar1 = onTeamChangeCallback;
  func_?(ppUVar1,onTeamChangeCallback);
  pLVar2 = (this->fields).teamButtons;
  index = 0;
  if (pLVar2 != (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) {
    while( true ) {
      if ((pLVar2->fields)._size <= index) {
        return;
      }
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar3 == (MVNetworkGame *)0x0) ||
         (pMVar4 = (pMVar3->fields).teamManager, pMVar4 == (MVTeamManager *)0x0)) break;
      this_00 = (pMVar4->fields).teamNames;
      pLVar5 = (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                *)(this->fields).teamButtons;
      if ((pLVar5 == (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                      *)0x0) ||
         (pIVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Linq::Expressions::
                   Interpreter::InstructionList+DebugView+InstructionView]::
                   List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView__get_Item
                             (&IStack_7,pLVar5,index,
                              MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                             ), this_00 == (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0)
         ) break;
      pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                           (Int32Enum__Enum)pIVar6->_instruction,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                          );
      pLVar5 = (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                *)(this->fields).teamButtons;
      if (pLVar5 == (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                     *)0x0) break;
      pIVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Linq::Expressions::
               Interpreter::InstructionList+DebugView+InstructionView]::
               List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView__get_Item
                         ((InstructionList_DebugView_InstructionView *)&stack0xffffffd4,pLVar5,index
                          ,
                          MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                         );
      piVar9 = (int *)pIVar6->_continuationsDepth;
      IStack_7._instruction = pIVar6->_instruction;
      if (piVar9 == (int *)0x0) break;
      IStack_7._name = *(String **)(*piVar9 + 0x31c);
      IStack_7._index = (int32_t)&UNK_?;
      IStack_7._stackDepth = (int32_t)piVar9;
      IStack_7._continuationsDepth = (int32_t)pOVar8;
      (**(code **)(*piVar9 + 0x318))();
      pLVar5 = (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                *)(this->fields).teamButtons;
      if (pLVar5 == (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                     *)0x0) break;
      pIVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Linq::Expressions::
               Interpreter::InstructionList+DebugView+InstructionView]::
               List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView__get_Item
                         ((InstructionList_DebugView_InstructionView *)&stack0xffffffd4,pLVar5,index
                          ,
                          MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                         );
      pSVar10 = pIVar6->_name;
      IStack_7._instruction = pIVar6->_instruction;
      if (pSVar10 == (String *)0x0) break;
      (*pSVar10->klass[1].vtable.System_IConvertible_ToType.methodPtr)
                (pSVar10,pOVar8,pSVar10->klass[1].vtable.System_IConvertible_ToType.method);
      pLVar5 = (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                *)(this->fields).teamButtons;
      if (pLVar5 == (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                     *)0x0) break;
      pIVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Linq::Expressions::
               Interpreter::InstructionList+DebugView+InstructionView]::
               List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView__get_Item
                         ((InstructionList_DebugView_InstructionView *)&stack0xffffffd4,pLVar5,index
                          ,
                          MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                         );
      value = (Instruction *)spawnRolesTeam == pIVar6->_instruction;
      IStack_7._index = pIVar6->_index;
      IStack_7._stackDepth = pIVar6->_stackDepth;
      IStack_7._continuationsDepth = pIVar6->_continuationsDepth;
      IStack_7._name = pIVar6->_name;
      pLVar5 = (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                *)(this->fields).teamButtons;
      if (pLVar5 == (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                     *)0x0) break;
      pIVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Linq::Expressions::
               Interpreter::InstructionList+DebugView+InstructionView]::
               List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView__get_Item
                         ((InstructionList_DebugView_InstructionView *)&stack0xffffffd4,pLVar5,index
                          ,
                          MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                         );
      IStack_7._instruction = pIVar6->_instruction;
      if ((GameObject *)pIVar6->_index == (GameObject *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                ((GameObject *)pIVar6->_index,value,(MethodInfo *)0x0);
      pLVar5 = (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                *)(this->fields).teamButtons;
      if (pLVar5 == (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                     *)0x0) break;
      pIVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Linq::Expressions::
               Interpreter::InstructionList+DebugView+InstructionView]::
               List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView__get_Item
                         ((InstructionList_DebugView_InstructionView *)&stack0xffffffd4,pLVar5,index
                          ,
                          MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                         );
      IStack_7._instruction = pIVar6->_instruction;
      if ((GameObject *)pIVar6->_stackDepth == (GameObject *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                ((GameObject *)pIVar6->_stackDepth,!value,(MethodInfo *)0x0);
      pLVar2 = (this->fields).teamButtons;
      index = index + 1;
      if (pLVar2 == (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) break;
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
    pLVar2 = (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
              *)(this->fields).teamButtons;
    while (pLVar2 != (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                      *)0x0) {
      if ((pLVar2->fields)._size <= index) {
        return;
      }
      if (pLVar2 == (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                     *)0x0) break;
      pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Linq::Expressions::
               Interpreter::InstructionList+DebugView+InstructionView]::
               List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView__get_Item
                         ((InstructionList_DebugView_InstructionView *)&stack0xffffffe8,pLVar2,index
                          ,
                          MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                         );
      value = (Instruction *)teamSelected == pIVar3->_instruction;
      pLVar2 = (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                *)(this->fields).teamButtons;
      if (pLVar2 == (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                     *)0x0) break;
      pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Linq::Expressions::
               Interpreter::InstructionList+DebugView+InstructionView]::
               List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView__get_Item
                         ((InstructionList_DebugView_InstructionView *)&stack0xffffffd4,pLVar2,index
                          ,
                          MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                         );
      if ((GameObject *)pIVar3->_index == (GameObject *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                ((GameObject *)pIVar3->_index,value,(MethodInfo *)0x0);
      pLVar2 = (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                *)(this->fields).teamButtons;
      if (pLVar2 == (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                     *)0x0) break;
      pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Linq::Expressions::
               Interpreter::InstructionList+DebugView+InstructionView]::
               List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView__get_Item
                         ((InstructionList_DebugView_InstructionView *)&stack0xffffffd4,pLVar2,index
                          ,
                          MethodInfo__System__Collections__Generic__List<SpawnRoleTeamEditor::SpawnRoleTeamButton>__get_Item_int_
                         );
      if ((GameObject *)pIVar3->_stackDepth == (GameObject *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                ((GameObject *)pIVar3->_stackDepth,!value,(MethodInfo *)0x0);
      index = index + 1;
      pLVar2 = (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                *)(this->fields).teamButtons;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SelectYellowTeam() */

void Assembly-CSharp.dll::SpawnRoleTeamEditor::SpawnRoleTeamEditor_SelectYellowTeam
               (SpawnRoleTeamEditor *this,MethodInfo *method)

{
  SpawnRoleTeamEditor_SelectTeam(this,MVTeam__Enum_Yellow,(MethodInfo *)0x0);
  return;
}

