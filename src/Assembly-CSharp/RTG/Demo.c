
/* Void Start() */

void Assembly-CSharp.dll::RTG::Demo::Demo_Start(Demo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__BoxCollider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::BoxCollider>__
                   );
    func_?(&
                    UnityEngine__CapsuleCollider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::CapsuleCollider>__
                   );
    func_?(&
                    UnityEngine__Light_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Light>__
                   );
    func_?(&
                    UnityEngine__SphereCollider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::SphereCollider>__
                   );
    func_?(&
                    UnityEngine__Terrain_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Terrain>__
                   );
    func_?(&
                    RTG__BoxColliderGizmo3D_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::BoxColliderGizmo3D>__
                   );
    func_?(&
                    RTG__CapsuleColliderGizmo3D_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::CapsuleColliderGizmo3D>__
                   );
    func_?(&
                    RTG__DirectionalLightGizmo3D_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::DirectionalLightGizmo3D>__
                   );
    func_?(&
                    RTG__PointLightGizmo3D_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::PointLightGizmo3D>__
                   );
    func_?(&
                    RTG__SphereColliderGizmo_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::SphereColliderGizmo>__
                   );
    func_?(&
                    RTG__SpotLightGizmo3D_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::SpotLightGizmo3D>__
                   );
    func_?(&RTG__TerrainGizmo_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::TerrainGizmo>__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_Red_Cube);
    func_?(&StringLiteral_Directional_Light);
    func_?(&StringLiteral_Spot_Light);
    func_?(&StringLiteral_Blue_Cube__1_);
    func_?(&StringLiteral_Sphere_SphereCollider);
    func_?(&StringLiteral_Green_Cube);
    func_?(&StringLiteral_Cylinder);
    func_?(&StringLiteral_Sphere);
    func_?(&StringLiteral_Cube_BoxCollider);
    func_?(&StringLiteral_Blue_Cube);
    func_?(&StringLiteral_Terrain);
    func_?(&StringLiteral_Cylinder__1_);
    func_?(&StringLiteral_Point_Light);
    func_?(&StringLiteral_Capsule_CapsuleCollider);
    func_?(&StringLiteral_Sphere__1_);
    cRam_? = '\x01';
  }
  iVar1 = func_?(TypeInfo__System__String,2);
  pSVar2 = StringLiteral_Blue_Cube;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0xc) == 0) goto code_?;
    *(String **)(iVar1 + 0x10) = StringLiteral_Blue_Cube;
    func_?(iVar1 + 0x10,pSVar2);
    pSVar2 = StringLiteral_Sphere;
    if (*(uint *)(iVar1 + 0xc) < 2) goto code_?;
    *(String **)(iVar1 + 0x14) = StringLiteral_Sphere;
    func_?(iVar1 + 0x14,pSVar2);
    ppMVar3 = (MonitorData **)(iVar1 + 0x10);
    for (uVar4 = 0; (int)uVar4 < *(int *)(iVar1 + 0xc); uVar4 = uVar4 + 1) {
      if (*(uint *)(iVar1 + 0xc) <= uVar4) goto code_?;
      pSVar2 = (String *)*ppMVar3;
      if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
      }
      pRVar5 = (RTGizmosEngine *)
               MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                         (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
      if (pRVar5 == (RTGizmosEngine *)0x0) goto code_?;
      pOVar6 = RTGizmosEngine::RTGizmosEngine_CreateObjectMoveGizmo(pRVar5,(MethodInfo *)0x0);
      pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Find
                         (pSVar2,(MethodInfo *)0x0);
      if (pOVar6 == (ObjectTransformGizmo *)0x0) goto code_?;
      item = pOVar6;
      ObjectTransformGizmo::ObjectTransformGizmo_SetTargetObject(pOVar6,pGVar7,(MethodInfo *)0x0);
      pGVar8 = (pOVar6->fields)._._gizmo;
      if (pGVar8 == (Gizmo *)0x0) goto code_?;
      this_01 = (pGVar8->fields)._moveGizmo;
      pLVar9 = (List_1_System_Object_ *)func_?();
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar9,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
      if (pLVar9 == (List_1_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                (pLVar9,(Object *)item,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                );
      if (this_01 == (MoveGizmo *)0x0) goto code_?;
      MoveGizmo::MoveGizmo_SetVertexSnapTargetObjects
                (this_01,(IEnumerable_1_UnityEngine_GameObject_ *)pLVar9,(MethodInfo *)0x0);
      ObjectTransformGizmo::ObjectTransformGizmo_SetTransformSpace
                (pOVar6,GizmoSpace__Enum_Local,(MethodInfo *)0x0);
      ppMVar3 = &pGVar7->monitor;
    }
    iVar1 = func_?(TypeInfo__System__String,2);
    pSVar2 = StringLiteral_Cylinder;
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0xc) == 0) goto code_?;
      *(String **)(iVar1 + 0x10) = StringLiteral_Cylinder;
      func_?(iVar1 + 0x10,pSVar2);
      pSVar2 = StringLiteral_Red_Cube;
      if (*(uint *)(iVar1 + 0xc) < 2) goto code_?;
      *(String **)(iVar1 + 0x14) = StringLiteral_Red_Cube;
      func_?(iVar1 + 0x14,pSVar2);
      puVar10 = (undefined4 *)(iVar1 + 0x10);
      for (uVar4 = 0; (int)uVar4 < *(int *)(iVar1 + 0xc); uVar4 = uVar4 + 1) {
        if (*(uint *)(iVar1 + 0xc) <= uVar4) goto code_?;
        pSVar2 = (String *)*puVar10;
        if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).cctor_finished_or_no_cctor == 0)
        {
          func_?(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
        }
        pRVar5 = (RTGizmosEngine *)
                 MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                           (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
        if (pRVar5 == (RTGizmosEngine *)0x0) goto code_?;
        pOVar6 = RTGizmosEngine::RTGizmosEngine_CreateObjectRotationGizmo(pRVar5,(MethodInfo *)0x0);
        pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Find
                           (pSVar2,(MethodInfo *)0x0);
        if (pOVar6 == (ObjectTransformGizmo *)0x0) goto code_?;
        ObjectTransformGizmo::ObjectTransformGizmo_SetTargetObject(pOVar6,pGVar7,(MethodInfo *)0x0);
        iVar11 = 1;
        ObjectTransformGizmo::ObjectTransformGizmo_SetTransformSpace
                  (pOVar6,GizmoSpace__Enum_Local,(MethodInfo *)0x0);
        puVar10 = (undefined4 *)(iVar11 + 4);
      }
      iVar1 = func_?(TypeInfo__System__String,2);
      pSVar2 = StringLiteral_Cylinder__1_;
      if (iVar1 != 0) {
        if (*(int *)(iVar1 + 0xc) == 0) goto code_?;
        *(String **)(iVar1 + 0x10) = StringLiteral_Cylinder__1_;
        func_?(iVar1 + 0x10,pSVar2);
        pSVar2 = StringLiteral_Sphere__1_;
        if (*(uint *)(iVar1 + 0xc) < 2) goto code_?;
        *(String **)(iVar1 + 0x14) = StringLiteral_Sphere__1_;
        func_?(iVar1 + 0x14,pSVar2);
        puVar10 = (undefined4 *)(iVar1 + 0x10);
        for (uVar4 = 0; (int)uVar4 < *(int *)(iVar1 + 0xc); uVar4 = uVar4 + 1) {
          if (*(uint *)(iVar1 + 0xc) <= uVar4) goto code_?;
          pSVar2 = (String *)*puVar10;
          if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
          }
          pRVar5 = (RTGizmosEngine *)
                   MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                             (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
          if (pRVar5 == (RTGizmosEngine *)0x0) goto code_?;
          pOVar6 = RTGizmosEngine::RTGizmosEngine_CreateObjectScaleGizmo(pRVar5,(MethodInfo *)0x0);
          pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Find
                             (pSVar2,(MethodInfo *)0x0);
          if (pOVar6 == (ObjectTransformGizmo *)0x0) goto code_?;
          ObjectTransformGizmo::ObjectTransformGizmo_SetTargetObject
                    (pOVar6,pGVar7,(MethodInfo *)0x0);
          iVar11 = 1;
          ObjectTransformGizmo::ObjectTransformGizmo_SetTransformSpace
                    (pOVar6,GizmoSpace__Enum_Local,(MethodInfo *)0x0);
          puVar10 = (undefined4 *)(iVar11 + 4);
        }
        iVar1 = func_?(TypeInfo__System__String,2);
        pSVar2 = StringLiteral_Blue_Cube__1_;
        if (iVar1 != 0) {
          if (*(int *)(iVar1 + 0xc) == 0) goto code_?;
          *(String **)(iVar1 + 0x10) = StringLiteral_Blue_Cube__1_;
          func_?(iVar1 + 0x10,pSVar2);
          pSVar2 = StringLiteral_Green_Cube;
          if (*(uint *)(iVar1 + 0xc) < 2) goto code_?;
          *(String **)(iVar1 + 0x14) = StringLiteral_Green_Cube;
          func_?(iVar1 + 0x14,pSVar2);
          puVar10 = (undefined4 *)(iVar1 + 0x10);
          uVar4 = 0;
          while( true ) {
            if (*(int *)(iVar1 + 0xc) <= (int)uVar4) break;
            if (*(uint *)(iVar1 + 0xc) <= uVar4) goto code_?;
            pSVar2 = (String *)*puVar10;
            if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
            }
            pRVar5 = (RTGizmosEngine *)
                     MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                               (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
            if (pRVar5 == (RTGizmosEngine *)0x0) goto code_?;
            pOVar6 = RTGizmosEngine::RTGizmosEngine_CreateObjectUniversalGizmo
                               (pRVar5,(MethodInfo *)0x0);
            pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Find
                               (pSVar2,(MethodInfo *)0x0);
            if (pOVar6 == (ObjectTransformGizmo *)0x0) goto code_?;
            iVar11 = 0;
            pOVar12 = (Object *)&UNK_?;
            ObjectTransformGizmo::ObjectTransformGizmo_SetTargetObject
                      (pOVar6,pGVar7,(MethodInfo *)0x0);
            pGVar8 = (pOVar6->fields)._._gizmo;
            if (pGVar8 == (Gizmo *)0x0) goto code_?;
            this_02 = (pGVar8->fields)._universalGizmo;
            pLVar9 = (List_1_System_Object_ *)func_?();
            mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
            __Il2CppFullySharedGenericType]::
            LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                      ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar9,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__
                      );
            if (pLVar9 == (List_1_System_Object_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      (pLVar9,pOVar12,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                      );
            if (this_02 == (UniversalGizmo *)0x0) goto code_?;
            UniversalGizmo::UniversalGizmo_SetMvVertexSnapTargetObjects
                      (this_02,(IEnumerable_1_UnityEngine_GameObject_ *)pLVar9,(MethodInfo *)0x0);
            ObjectTransformGizmo::ObjectTransformGizmo_SetTransformSpace
                      (pOVar6,GizmoSpace__Enum_Global,(MethodInfo *)0x0);
            ObjectTransformGizmo::ObjectTransformGizmo_SetCanAffectScale(pOVar6,0,(MethodInfo *)0x0)
            ;
            uVar4 = uVar4 + 1;
            puVar10 = (undefined4 *)(iVar11 + 4);
          }
          pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Find
                             (StringLiteral_Cube_BoxCollider,(MethodInfo *)0x0);
          if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
          }
          pRVar5 = (RTGizmosEngine *)
                   MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                             (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
          if (pRVar5 != (RTGizmosEngine *)0x0) {
            pGVar8 = RTGizmosEngine::RTGizmosEngine_CreateGizmo(pRVar5,(MethodInfo *)0x0);
            if (pGVar8 != (Gizmo *)0x0) {
              pOVar12 = Gizmo::Gizmo_AddBehaviour_1
                                  (pGVar8,
                                   RTG__BoxColliderGizmo3D_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::BoxColliderGizmo3D>__
                                  );
              if (pGVar7 != (GameObject *)0x0) {
                pOVar13 = (Object__Class *)
                         UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_GetComponent_1
                                   (pGVar7,
                                    UnityEngine__BoxCollider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::BoxCollider>__
                                   );
                if (pOVar12 != (Object *)0x0) {
                  pOVar12[2].klass = pOVar13;
                  func_?();
                  pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Find
                                     (StringLiteral_Sphere_SphereCollider,(MethodInfo *)0x0);
                  pRVar5 = (RTGizmosEngine *)
                           MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                                     (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__
                                     );
                  if (pRVar5 != (RTGizmosEngine *)0x0) {
                    pGVar8 = RTGizmosEngine::RTGizmosEngine_CreateGizmo(pRVar5,(MethodInfo *)0x0);
                    if (pGVar8 != (Gizmo *)0x0) {
                      pOVar12 = Gizmo::Gizmo_AddBehaviour_1
                                          (pGVar8,
                                           RTG__SphereColliderGizmo_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::SphereColliderGizmo>__
                                          );
                      if (pGVar7 != (GameObject *)0x0) {
                        pOVar13 = (Object__Class *)
                                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                 GameObject_GetComponent_1
                                           (pGVar7,
                                            UnityEngine__SphereCollider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::SphereCollider>__
                                           );
                        if (pOVar12 != (Object *)0x0) {
                          pOVar12[2].klass = pOVar13;
                          func_?(pOVar12 + 2,pOVar13);
                          pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                   GameObject_Find(StringLiteral_Capsule_CapsuleCollider,
                                                   (MethodInfo *)0x0);
                          pRVar5 = (RTGizmosEngine *)
                                   MonoSingleton`1[System::Object]::
                                   MonoSingleton_1_System_Object__get_Get
                                             (
                                             MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__
                                             );
                          if (pRVar5 != (RTGizmosEngine *)0x0) {
                            pGVar8 = RTGizmosEngine::RTGizmosEngine_CreateGizmo
                                               (pRVar5,(MethodInfo *)0x0);
                            if (pGVar8 != (Gizmo *)0x0) {
                              pOVar12 = Gizmo::Gizmo_AddBehaviour_1
                                                  (pGVar8,
                                                  RTG__CapsuleColliderGizmo3D_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::CapsuleColliderGizmo3D>__
                                                  );
                              if (pGVar7 != (GameObject *)0x0) {
                                pOVar13 = (Object__Class *)
                                         UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                         GameObject_GetComponent_1
                                                   (pGVar7,
                                                  UnityEngine__CapsuleCollider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::CapsuleCollider>__
                                                  );
                                if (pOVar12 != (Object *)0x0) {
                                  pOVar12[2].klass = pOVar13;
                                  func_?(pOVar12 + 2,pOVar13);
                                  pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                           GameObject_Find(StringLiteral_Directional_Light,
                                                           (MethodInfo *)0x0);
                                  pRVar5 = (RTGizmosEngine *)
                                           MonoSingleton`1[System::Object]::
                                           MonoSingleton_1_System_Object__get_Get
                                                     (
                                                  MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__
                                                  );
                                  if (pRVar5 != (RTGizmosEngine *)0x0) {
                                    pGVar8 = RTGizmosEngine::RTGizmosEngine_CreateGizmo
                                                       (pRVar5,(MethodInfo *)0x0);
                                    if (pGVar8 != (Gizmo *)0x0) {
                                      pOVar12 = Gizmo::Gizmo_AddBehaviour_1
                                                          (pGVar8,
                                                  RTG__DirectionalLightGizmo3D_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::DirectionalLightGizmo3D>__
                                                  );
                                      if (pGVar7 != (GameObject *)0x0) {
                                        pOVar13 = (Object__Class *)
                                                 UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                 ::GameObject_GetComponent_1
                                                           (pGVar7,
                                                  UnityEngine__Light_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Light>__
                                                  );
                                        if (pOVar12 != (Object *)0x0) {
                                          pOVar12[2].klass = pOVar13;
                                          func_?(pOVar12 + 2,pOVar13);
                                          pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::
                                                   GameObject::GameObject_Find
                                                             (StringLiteral_Point_Light,
                                                              (MethodInfo *)0x0);
                                          pRVar5 = (RTGizmosEngine *)
                                                   MonoSingleton`1[System::Object]::
                                                   MonoSingleton_1_System_Object__get_Get
                                                             (
                                                  MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__
                                                  );
                                          if (pRVar5 != (RTGizmosEngine *)0x0) {
                                            pGVar8 = RTGizmosEngine::RTGizmosEngine_CreateGizmo
                                                               (pRVar5,(MethodInfo *)0x0);
                                            if (pGVar8 != (Gizmo *)0x0) {
                                              pOVar12 = Gizmo::Gizmo_AddBehaviour_1
                                                                  (pGVar8,
                                                  RTG__PointLightGizmo3D_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::PointLightGizmo3D>__
                                                  );
                                              if (pGVar7 != (GameObject *)0x0) {
                                                pOVar13 = (Object__Class *)
                                                         UnityEngine.CoreModule.dll::UnityEngine::
                                                         GameObject::GameObject_GetComponent_1
                                                                   (pGVar7,
                                                  UnityEngine__Light_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Light>__
                                                  );
                                                if (pOVar12 != (Object *)0x0) {
                                                  pOVar12[2].klass = pOVar13;
                                                  func_?(pOVar12 + 2,pOVar13);
                                                  pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::
                                                           GameObject::GameObject_Find
                                                                     (StringLiteral_Spot_Light,
                                                                      (MethodInfo *)0x0);
                                                  pRVar5 = (RTGizmosEngine *)
                                                           MonoSingleton`1[System::Object]::
                                                           MonoSingleton_1_System_Object__get_Get
                                                                     (
                                                  MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__
                                                  );
                                                  if (pRVar5 != (RTGizmosEngine *)0x0) {
                                                    pGVar8 = RTGizmosEngine::
                                                             RTGizmosEngine_CreateGizmo
                                                                       (pRVar5,(MethodInfo *)0x0);
                                                    if (pGVar8 != (Gizmo *)0x0) {
                                                      pOVar12 = Gizmo::Gizmo_AddBehaviour_1
                                                                          (pGVar8,
                                                  RTG__SpotLightGizmo3D_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::SpotLightGizmo3D>__
                                                  );
                                                  if (pGVar7 != (GameObject *)0x0) {
                                                    pOVar13 = (Object__Class *)
                                                             UnityEngine.CoreModule.dll::UnityEngine
                                                             ::GameObject::GameObject_GetComponent_1
                                                                       (pGVar7,
                                                  UnityEngine__Light_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Light>__
                                                  );
                                                  if (pOVar12 != (Object *)0x0) {
                                                    pOVar12[2].klass = pOVar13;
                                                    func_?(pOVar12 + 2,pOVar13);
                                                    pGVar7 = UnityEngine.CoreModule.dll::UnityEngine
                                                             ::GameObject::GameObject_Find
                                                                       (StringLiteral_Terrain,
                                                                        (MethodInfo *)0x0);
                                                    pRVar5 = (RTGizmosEngine *)
                                                             MonoSingleton`1[System::Object]::
                                                             MonoSingleton_1_System_Object__get_Get
                                                                       (
                                                  MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__
                                                  );
                                                  if (pRVar5 != (RTGizmosEngine *)0x0) {
                                                    pGVar8 = RTGizmosEngine::
                                                             RTGizmosEngine_CreateGizmo
                                                                       (pRVar5,(MethodInfo *)0x0);
                                                    if (pGVar8 != (Gizmo *)0x0) {
                                                      this_00 = (TerrainGizmo *)
                                                                Gizmo::Gizmo_AddBehaviour_1
                                                                          (pGVar8,
                                                  RTG__TerrainGizmo_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::TerrainGizmo>__
                                                  );
                                                  if (pGVar7 != (GameObject *)0x0) {
                                                    terrain = (Terrain *)
                                                              UnityEngine.CoreModule.dll::
                                                              UnityEngine::GameObject::
                                                              GameObject_GetComponent_1
                                                                        (pGVar7,
                                                  UnityEngine__Terrain_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Terrain>__
                                                  );
                                                  if (this_00 != (TerrainGizmo *)0x0) {
                                                    TerrainGizmo::TerrainGizmo_SetTargetTerrain
                                                              (this_00,terrain,(MethodInfo *)0x0);
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
code_?:
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}

