
/* EditorStateTransitionTable3D(ContextMenuController, GizmoController) */

void Assembly-CSharp.dll::EditorStateTransitionTable3D::EditorStateTransitionTable3D__ctor
               (EditorStateTransitionTable3D *this,ContextMenuController *contextMenuController,
               GizmoController *gizmoController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CEEditCubeTutorial);
    func_?(&TypeInfo__CEEnterCubeTutorial);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                   );
    func_?(&TypeInfo__ESAddLink);
    func_?(&TypeInfo__ESAddObjectLink);
    func_?(&TypeInfo__ESAddToMarketPlaceState);
    func_?(&TypeInfo__ESCubeEdit);
    func_?(&TypeInfo__ESInsert);
    func_?(&TypeInfo__ESLeaveCubeTutorial);
    func_?(&TypeInfo__ESRotating);
    func_?(&TypeInfo__ESSelection);
    func_?(&TypeInfo__ESTerrainEdit);
    func_?(&TypeInfo__ESTranslate);
    func_?(&TypeInfo__ESWaitForBuildModeAvatar);
    func_?(&TypeInfo__ESWaitForClone);
    func_?(&TypeInfo__ESWaitForGroup);
    func_?(&TypeInfo__ESWaitForPlayModeAvatar);
    func_?(&TypeInfo__ESWaitForSelected);
    func_?(&TypeInfo__ESWalkMode);
    func_?(&TypeInfo__EditorEvent);
    cRam_? = '\x01';
  }
  this_00 = this;
  StateTransitionTable::StateTransitionTable__ctor((StateTransitionTable *)this,(MethodInfo *)0x0);
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this_00->fields)._._.table;
  this = (EditorStateTransitionTable3D *)0x0;
  pOVar2 = (Object *)func_?(TypeInfo__EditorEvent,&this);
  pEVar3 = (ESStateBase *)func_?(TypeInfo__ESCubeEdit);
  pEVar3[1].fields.stateType = -1;
  ESStateBase::ESStateBase__ctor(pEVar3,(MethodInfo *)0x0);
  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,pOVar2,(Object *)pEVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
              );
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this_00->fields)._._.table;
    pOVar2 = (Object *)func_?(TypeInfo__EditorEvent);
    this_01 = (ESRotating *)func_?(TypeInfo__ESRotating);
    ESRotating::ESRotating__ctor(this_01,(MethodInfo *)0x0);
    if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (pDVar1,pOVar2,(Object *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                );
      pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this_00->fields)._._.table;
      pOVar2 = (Object *)func_?(TypeInfo__EditorEvent);
      pEVar3 = (ESStateBase *)func_?(TypeInfo__ESSelection);
      pWVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                         ((MethodInfo *)0x0);
      pEVar3[1].fields.stateType = (int32_t)pWVar4;
      func_?(&pEVar3[1].fields,pWVar4);
      ESStateBase::ESStateBase__ctor(pEVar3,(MethodInfo *)0x0);
      pEVar3[2].klass = (ESStateBase__Class *)contextMenuController;
      func_?(pEVar3 + 2,contextMenuController);
      pEVar3[2].monitor = (MonitorData *)gizmoController;
      func_?(&pEVar3[2].monitor,gizmoController);
      if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (pDVar1,pOVar2,(Object *)pEVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                  );
        pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this_00->fields)._._.table;
        pOVar2 = (Object *)func_?(TypeInfo__EditorEvent);
        pEVar5 = (ESLeaveCubeTutorial *)func_?(TypeInfo__ESTerrainEdit);
        ESLeaveCubeTutorial::ESLeaveCubeTutorial__ctor(pEVar5,(MethodInfo *)0x0);
        if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (pDVar1,pOVar2,(Object *)pEVar5,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                    );
          pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this_00->fields)._._.table;
          pOVar2 = (Object *)func_?(TypeInfo__EditorEvent);
          this_02 = (ESWaitForSelected *)func_?(TypeInfo__ESWaitForSelected);
          ESWaitForSelected::ESWaitForSelected__ctor(this_02,(MethodInfo *)0x0);
          if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      (pDVar1,pOVar2,(Object *)this_02,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                      );
            pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this_00->fields)._._.table;
            pOVar2 = (Object *)func_?(TypeInfo__EditorEvent);
            this_03 = (ESWaitForGroup *)func_?(TypeInfo__ESWaitForGroup);
            ESWaitForGroup::ESWaitForGroup__ctor(this_03,(MethodInfo *)0x0);
            if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        (pDVar1,pOVar2,(Object *)this_03,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                        );
              pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this_00->fields)._._.table;
              pOVar2 = (Object *)func_?(TypeInfo__EditorEvent);
              this_04 = (ESTranslate *)func_?(TypeInfo__ESTranslate);
              ESTranslate::ESTranslate__ctor(this_04,(MethodInfo *)0x0);
              if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__Add
                          (pDVar1,pOVar2,(Object *)this_04,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                          );
                pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this_00->fields)._._.table;
                pOVar2 = (Object *)func_?(TypeInfo__EditorEvent);
                this_05 = (ESWaitForClone *)func_?(TypeInfo__ESWaitForClone);
                ESWaitForClone::ESWaitForClone__ctor(this_05,(MethodInfo *)0x0);
                if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            (pDVar1,pOVar2,(Object *)this_05,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                            );
                  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this_00->fields)._._.table;
                  pOVar2 = (Object *)func_?(TypeInfo__EditorEvent);
                  pEVar3 = (ESStateBase *)func_?(TypeInfo__ESAddLink);
                  pEVar3[3].klass = (ESStateBase__Class *)0x3f333333;
                  ESStateBase::ESStateBase__ctor(pEVar3,(MethodInfo *)0x0);
                  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__Add
                              (pDVar1,pOVar2,(Object *)pEVar3,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                              );
                    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
                             (this_00->fields)._._.table;
                    pOVar2 = (Object *)func_?(TypeInfo__EditorEvent);
                    pEVar5 = (ESLeaveCubeTutorial *)func_?(TypeInfo__ESWalkMode);
                    ESLeaveCubeTutorial::ESLeaveCubeTutorial__ctor(pEVar5,(MethodInfo *)0x0);
                    if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__Add
                                (pDVar1,pOVar2,(Object *)pEVar5,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                                );
                      pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
                               (this_00->fields)._._.table;
                      pOVar2 = (Object *)func_?(TypeInfo__EditorEvent);
                      this_06 = (ESWaitForPlayModeAvatar *)
                                func_?(TypeInfo__ESWaitForPlayModeAvatar);
                      ESWaitForPlayModeAvatar::ESWaitForPlayModeAvatar__ctor
                                (this_06,(MethodInfo *)0x0);
                      if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,System::Object]::Dictionary_2_System_Object_System_Object__Add
                                  (pDVar1,pOVar2,(Object *)this_06,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                                  );
                        pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
                                 (this_00->fields)._._.table;
                        pOVar2 = (Object *)func_?(TypeInfo__EditorEvent);
                        pEVar5 = (ESLeaveCubeTutorial *)
                                 func_?(TypeInfo__ESWaitForBuildModeAvatar);
                        ESLeaveCubeTutorial::ESLeaveCubeTutorial__ctor(pEVar5,(MethodInfo *)0x0);
                        if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__Add
                                    (pDVar1,pOVar2,(Object *)pEVar5,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                                    );
                          pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
                                   (this_00->fields)._._.table;
                          pOVar2 = (Object *)func_?(TypeInfo__EditorEvent);
                          pEVar3 = (ESStateBase *)func_?(TypeInfo__ESInsert);
                          if (cRam_? == '\0') {
                            func_?();
                            func_?();
                            cRam_? = '\x01';
                          }
                          pEVar3[1].klass = (ESStateBase__Class *)0x40a00000;
                          if (cRam_? == '\0') {
                            func_?();
                            cRam_? = '\x01';
                          }
                          pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
                          fVar7 = (pVVar6->zeroVector).y;
                          pWVar4 = (WorldObjectClientRef *)(pVVar6->zeroVector).z;
                          pEVar3[1].monitor = (MonitorData *)(pVVar6->zeroVector).x;
                          pEVar3[1].fields.stateType = (int32_t)fVar7;
                          pEVar3[1].fields.tintedWo = pWVar4;
                          if (cRam_? == '\0') {
                            func_?();
                            cRam_? = '\x01';
                          }
                          pMVar8 = (MonitorData *)
                                   (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
                          *(undefined8 *)&pEVar3[1].fields.logger =
                               *(undefined8 *)
                                &TypeInfo__UnityEngine__Vector3->static_fields->zeroVector;
                          pEVar3[2].monitor = pMVar8;
                          this_07 = (HashSet_1_System_Int32_ *)func_?();
                          System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
                          HashSet_1_System_Int32___ctor
                                    (this_07,
                                     MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__
                                    );
                          pEVar3[3].fields.logger = (ILogger *)this_07;
                          func_?();
                          ESStateBase::ESStateBase__ctor(pEVar3,(MethodInfo *)0x0);
                          if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Object,System::Object]::Dictionary_2_System_Object_System_Object__Add
                                      (pDVar1,pOVar2,(Object *)pEVar3,
                                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                                      );
                            pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
                                     (this_00->fields)._._.table;
                            pOVar2 = (Object *)func_?(TypeInfo__EditorEvent);
                            pEVar3 = (ESStateBase *)func_?(TypeInfo__ESAddObjectLink);
                            ESStateBase::ESStateBase__ctor(pEVar3,(MethodInfo *)0x0);
                            if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Object,System::Object]::Dictionary_2_System_Object_System_Object__Add
                                        (pDVar1,pOVar2,(Object *)pEVar3,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                                        );
                              pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
                                       (this_00->fields)._._.table;
                              pOVar2 = (Object *)func_?(TypeInfo__EditorEvent);
                              this_08 = (CEEnterCubeTutorial *)
                                        func_?(TypeInfo__CEEnterCubeTutorial);
                              CEEnterCubeTutorial::CEEnterCubeTutorial__ctor
                                        (this_08,(MethodInfo *)0x0);
                              if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Object,System::Object]::
                                Dictionary_2_System_Object_System_Object__Add
                                          (pDVar1,pOVar2,(Object *)this_08,
                                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                                          );
                                pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
                                         (this_00->fields)._._.table;
                                pOVar2 = (Object *)func_?(TypeInfo__EditorEvent);
                                this_09 = (CEEditCubeTutorial *)
                                          func_?(TypeInfo__CEEditCubeTutorial);
                                CEEditCubeTutorial::CEEditCubeTutorial__ctor
                                          (this_09,(MethodInfo *)0x0);
                                if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Object,System::Object]::
                                  Dictionary_2_System_Object_System_Object__Add
                                            (pDVar1,pOVar2,(Object *)this_09,
                                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                                            );
                                  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
                                           (this_00->fields)._._.table;
                                  pOVar2 = (Object *)func_?(TypeInfo__EditorEvent);
                                  pEVar5 = (ESLeaveCubeTutorial *)
                                           func_?(TypeInfo__ESLeaveCubeTutorial);
                                  ESLeaveCubeTutorial::ESLeaveCubeTutorial__ctor
                                            (pEVar5,(MethodInfo *)0x0);
                                  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                    ::Object,System::Object]::
                                    Dictionary_2_System_Object_System_Object__Add
                                              (pDVar1,pOVar2,(Object *)pEVar5,
                                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                                              );
                                    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
                                             (this_00->fields)._._.table;
                                    pOVar2 = (Object *)func_?(TypeInfo__EditorEvent);
                                    pEVar3 = (ESStateBase *)
                                             func_?(TypeInfo__ESAddToMarketPlaceState);
                                    ESStateBase::ESStateBase__ctor(pEVar3,(MethodInfo *)0x0);
                                    if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0)
                                    {
                                      mscorlib.dll::System::Collections::Generic::
                                      Dictionary`2[System::Object,System::Object]::
                                      Dictionary_2_System_Object_System_Object__Add
                                                (pDVar1,pOVar2,(Object *)pEVar3,
                                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                                                );
                                      EditorStateTransitionTableBase::
                                      EditorStateTransitionTableBase_SetStateTypes
                                                ((EditorStateTransitionTableBase *)this_00,
                                                 (MethodInfo *)0x0);
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
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

