
/* Void Start() */

void Assembly-CSharp.dll::RTG::Tut_0_CreatingGizmos_and_AssigningObjects::
     Tut_0_CreatingGizmos_and_AssigningObjects_Start
               (Tut_0_CreatingGizmos_and_AssigningObjects *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    func_?(&StringLiteral_YellowCube);
    func_?(&StringLiteral_GreenCube);
    func_?(&StringLiteral_RedCube);
    func_?(&StringLiteral_BlueCube);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
  }
  pRVar1 = (RTGizmosEngine *)
           MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
  if (pRVar1 != (RTGizmosEngine *)0x0) {
    pOVar2 = RTGizmosEngine::RTGizmosEngine_CreateObjectMoveGizmo(pRVar1,(MethodInfo *)0x0);
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Find
                       (StringLiteral_RedCube,(MethodInfo *)0x0);
    if (pOVar2 != (ObjectTransformGizmo *)0x0) {
      ObjectTransformGizmo::ObjectTransformGizmo_SetTargetObject(pOVar2,pGVar3,(MethodInfo *)0x0);
      pGVar4 = (pOVar2->fields)._._gizmo;
      if (pGVar4 != (Gizmo *)0x0) {
        this_00 = (pGVar4->fields)._moveGizmo;
        this_01 = (List_1_System_Object_ *)func_?();
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
        __Il2CppFullySharedGenericType]::
        LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                  ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
        if (this_01 != (List_1_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    (this_01,(Object *)pGVar3,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                    );
          if (this_00 != (MoveGizmo *)0x0) {
            MoveGizmo::MoveGizmo_SetVertexSnapTargetObjects
                      (this_00,(IEnumerable_1_UnityEngine_GameObject_ *)this_01,(MethodInfo *)0x0);
            pRVar1 = (RTGizmosEngine *)
                     MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                               (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
            if (pRVar1 != (RTGizmosEngine *)0x0) {
              pOVar2 = RTGizmosEngine::RTGizmosEngine_CreateObjectRotationGizmo
                                 (pRVar1,(MethodInfo *)0x0);
              pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Find
                                 (StringLiteral_GreenCube,(MethodInfo *)0x0);
              if (pOVar2 != (ObjectTransformGizmo *)0x0) {
                ObjectTransformGizmo::ObjectTransformGizmo_SetTargetObject
                          (pOVar2,pGVar3,(MethodInfo *)0x0);
                pRVar1 = (RTGizmosEngine *)
                         MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                                   (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
                if (pRVar1 != (RTGizmosEngine *)0x0) {
                  pOVar2 = RTGizmosEngine::RTGizmosEngine_CreateObjectScaleGizmo
                                     (pRVar1,(MethodInfo *)0x0);
                  pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Find
                                     (StringLiteral_BlueCube,(MethodInfo *)0x0);
                  if (pOVar2 != (ObjectTransformGizmo *)0x0) {
                    ObjectTransformGizmo::ObjectTransformGizmo_SetTargetObject
                              (pOVar2,pGVar3,(MethodInfo *)0x0);
                    pRVar1 = (RTGizmosEngine *)
                             MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                                       (
                                       MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__
                                       );
                    if (pRVar1 != (RTGizmosEngine *)0x0) {
                      pOVar2 = RTGizmosEngine::RTGizmosEngine_CreateObjectUniversalGizmo
                                         (pRVar1,(MethodInfo *)0x0);
                      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Find
                                         (StringLiteral_YellowCube,(MethodInfo *)0x0);
                      if (pOVar2 != (ObjectTransformGizmo *)0x0) {
                        ObjectTransformGizmo::ObjectTransformGizmo_SetTargetObject
                                  (pOVar2,pGVar3,(MethodInfo *)0x0);
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
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

