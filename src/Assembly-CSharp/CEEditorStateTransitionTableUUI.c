
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
  pEVar2 = (ESStateBase *)func_?(TypeInfo__CERoamUUI);
  pEVar2[1].klass = (ESStateBase__Class *)0xffffffff;
  ESStateBase::ESStateBase__ctor(pEVar2,(MethodInfo *)0x0);
  pEVar2[1].fields.stateType = (int32_t)centerPos.x;
  pEVar2[1].fields.logger = (ILogger *)centerPos.y;
  pEVar2[1].fields.tintedWo = (WorldObjectClientRef *)centerPos.z;
  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,key,(Object *)pEVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
              );
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this_00->fields)._._.table;
    centerPos.z = (float)func_?(TypeInfo__EditorEvent);
    pEVar2 = (ESStateBase *)func_?(TypeInfo__CEEditBodyUUI);
    pEVar2[1].fields.stateType = -1;
    ESStateBase::ESStateBase__ctor(pEVar2,(MethodInfo *)0x0);
    if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (pDVar1,(Object *)centerPos.z,(Object *)pEVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                );
      pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this_00->fields)._._.table;
      centerPos.z = (float)func_?(TypeInfo__EditorEvent);
      pEVar2 = (ESStateBase *)func_?(TypeInfo__CEAvatarAccessoryUUI);
      ESStateBase::ESStateBase__ctor(pEVar2,(MethodInfo *)0x0);
      if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (pDVar1,(Object *)centerPos.z,(Object *)pEVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                  );
        pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this_00->fields)._._.table;
        centerPos.z = (float)func_?(TypeInfo__EditorEvent);
        this_01 = (CEEnterCubeTutorial *)func_?(TypeInfo__CEEnterCubeTutorial);
        CEEnterCubeTutorial::CEEnterCubeTutorial__ctor(this_01,(MethodInfo *)0x0);
        if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (pDVar1,(Object *)centerPos.z,(Object *)this_01,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                    );
          pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this_00->fields)._._.table;
          centerPos.z = (float)func_?(TypeInfo__EditorEvent);
          this_02 = (CEEditCubeTutorial *)func_?(TypeInfo__CEEditCubeTutorial);
          CEEditCubeTutorial::CEEditCubeTutorial__ctor(this_02,(MethodInfo *)0x0);
          if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      (pDVar1,(Object *)centerPos.z,(Object *)this_02,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                      );
            pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this_00->fields)._._.table;
            centerPos.z = (float)func_?(TypeInfo__EditorEvent);
            this_03 = (ESLeaveCubeTutorial *)func_?(TypeInfo__CELeaveCubeTutorial);
            ESLeaveCubeTutorial::ESLeaveCubeTutorial__ctor(this_03,(MethodInfo *)0x0);
            if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        (pDVar1,(Object *)centerPos.z,(Object *)this_03,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                        );
              pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this_00->fields)._._.table;
              centerPos.z = (float)func_?(TypeInfo__EditorEvent);
              pEVar2 = (ESStateBase *)func_?(TypeInfo__ESCubeEdit);
              pEVar2[1].fields.stateType = -1;
              ESStateBase::ESStateBase__ctor(pEVar2,(MethodInfo *)0x0);
              if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__Add
                          (pDVar1,(Object *)centerPos.z,(Object *)pEVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                          );
                EditorStateTransitionTableBase::EditorStateTransitionTableBase_SetStateTypes
                          ((EditorStateTransitionTableBase *)this_00,(MethodInfo *)0x0);
                return;
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

