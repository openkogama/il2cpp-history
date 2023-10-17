
/* CEEditorStateTransitionTableUUI(Vector3) */

void Assembly-CSharp.dll::CEEditorStateTransitionTableUUI::CEEditorStateTransitionTableUUI__ctor
               (CEEditorStateTransitionTableUUI *this,Vector3 centerPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CEAvatarAccessoryUUI);
    func_?(&TypeInfo__CEEditBodyUUI);
    func_?(&TypeInfo__CEEditCubeTutorial);
    func_?(&TypeInfo__CEEnterCubeTutorial);
    func_?(&TypeInfo__CELeaveCubeTutorial);
    func_?(&TypeInfo__CERoamUUI);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                   );
    func_?(&TypeInfo__ESCubeEdit);
    func_?(&TypeInfo__EditorEvent);
    cRam_? = '\x01';
  }
  this_00 = this;
  StateTransitionTable::StateTransitionTable__ctor((StateTransitionTable *)this,(MethodInfo *)0x0);
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this_00->fields)._._.table;
  this = (CEEditorStateTransitionTableUUI *)0x34;
  key = (Object *)func_?(TypeInfo__EditorEvent,&this);
  this_01 = (CERoamUUI *)func_?(TypeInfo__CERoamUUI);
  if (this_01 != (CERoamUUI *)0x0) {
    centerPos_00.z = centerPos.z;
    centerPos_00.x = centerPos.x;
    centerPos_00.y = centerPos.y;
    CERoamUUI::CERoamUUI__ctor(this_01,centerPos_00,(MethodInfo *)0x0);
    if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (pDVar1,key,(Object *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                );
      pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this_00->fields)._._.table;
      centerPos.z = (float)func_?();
      this_02 = (ESCubeEdit *)func_?();
      if (this_02 != (ESCubeEdit *)0x0) {
        ESCubeEdit::ESCubeEdit__ctor(this_02,(MethodInfo *)0x0);
        if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (pDVar1,(Object *)centerPos.z,(Object *)this_02,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                    );
          pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this_00->fields)._._.table;
          centerPos.z = (float)func_?();
          pEVar2 = (ESLeaveCubeTutorial *)func_?();
          if (pEVar2 != (ESLeaveCubeTutorial *)0x0) {
            ESLeaveCubeTutorial::ESLeaveCubeTutorial__ctor(pEVar2,(MethodInfo *)0x0);
            if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        (pDVar1,(Object *)centerPos.z,(Object *)pEVar2,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                        );
              pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this_00->fields)._._.table;
              centerPos.z = (float)func_?();
              this_03 = (CEEnterCubeTutorial *)func_?();
              if (this_03 != (CEEnterCubeTutorial *)0x0) {
                CEEnterCubeTutorial::CEEnterCubeTutorial__ctor(this_03,(MethodInfo *)0x0);
                if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            (pDVar1,(Object *)centerPos.z,(Object *)this_03,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                            );
                  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this_00->fields)._._.table;
                  centerPos.z = (float)func_?();
                  this_04 = (CEEditCubeTutorial *)func_?();
                  if (this_04 != (CEEditCubeTutorial *)0x0) {
                    CEEditCubeTutorial::CEEditCubeTutorial__ctor(this_04,(MethodInfo *)0x0);
                    if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__Add
                                (pDVar1,(Object *)centerPos.z,(Object *)this_04,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                                );
                      pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
                               (this_00->fields)._._.table;
                      centerPos.z = (float)func_?();
                      pEVar2 = (ESLeaveCubeTutorial *)func_?();
                      if (pEVar2 != (ESLeaveCubeTutorial *)0x0) {
                        ESLeaveCubeTutorial::ESLeaveCubeTutorial__ctor(pEVar2,(MethodInfo *)0x0);
                        if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__Add
                                    (pDVar1,(Object *)centerPos.z,(Object *)pEVar2,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                                    );
                          pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
                                   (this_00->fields)._._.table;
                          centerPos.z = (float)func_?();
                          this_05 = (ESStateBase *)func_?();
                          if (this_05 != (ESStateBase *)0x0) {
                            this_05[1].fields.stateType = -1;
                            ESStateBase::ESStateBase__ctor(this_05,(MethodInfo *)0x0);
                            if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Object,System::Object]::Dictionary_2_System_Object_System_Object__Add
                                        (pDVar1,(Object *)centerPos.z,(Object *)this_05,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                                        );
                              EditorStateTransitionTableBase::
                              EditorStateTransitionTableBase_SetStateTypes
                                        ((EditorStateTransitionTableBase *)this_00,(MethodInfo *)0x0
                                        );
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
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

