
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
  puVar1 = (undefined *)func_?(TypeInfo__System__String,2);
  pSVar2 = StringLiteral_Blue_Cube;
  if (puVar1 != (undefined *)0x0) {
    if (*(int *)(puVar1 + 0xc) == 0) goto code_?;
    puVar3 = (undefined4 *)(puVar1 + 0x10);
    *puVar3 = StringLiteral_Blue_Cube;
    func_?(puVar3,pSVar2);
    pSVar2 = StringLiteral_Sphere;
    if (*(uint *)(puVar1 + 0xc) < 2) goto code_?;
    *(String **)(puVar1 + 0x14) = StringLiteral_Sphere;
    func_?(puVar1 + 0x14,pSVar2);
    for (uVar4 = 0; (int)uVar4 < (int)*(uint *)(puVar1 + 0xc); uVar4 = uVar4 + 1) {
      if (*(uint *)(puVar1 + 0xc) <= uVar4) goto code_?;
      pSVar2 = (String *)*puVar3;
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
      iVar8 = 0;
      puVar1 = &UNK_?;
      ObjectTransformGizmo::ObjectTransformGizmo_SetTargetObject(pOVar6,pGVar7,(MethodInfo *)0x0);
      pGVar9 = (pOVar6->fields)._._gizmo;
      if (pGVar9 == (Gizmo *)0x0) goto code_?;
      this_02 = (pGVar9->fields)._moveGizmo;
      pLVar10 = (List_1_System_Object_ *)func_?();
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar10,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
      if (pLVar10 == (List_1_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                (pLVar10,(Object *)pGVar7,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                );
      if (this_02 == (MoveGizmo *)0x0) goto code_?;
      MoveGizmo::MoveGizmo_SetVertexSnapTargetObjects
                (this_02,(IEnumerable_1_UnityEngine_GameObject_ *)pLVar10,(MethodInfo *)0x0);
      ObjectTransformGizmo::ObjectTransformGizmo_SetTransformSpace
                (pOVar6,GizmoSpace__Enum_Local,(MethodInfo *)0x0);
      puVar3 = (undefined4 *)(iVar8 + 4);
    }
    pOVar6 = (ObjectTransformGizmo *)func_?(TypeInfo__System__String,2);
    pSVar2 = StringLiteral_Cylinder;
    if (pOVar6 != (ObjectTransformGizmo *)0x0) {
      if (*(int *)&(pOVar6->fields)._._isEnabled == 0) goto code_?;
      piVar11 = &(pOVar6->fields)._targetObjectMode;
      *piVar11 = (int32_t)StringLiteral_Cylinder;
      func_?(piVar11,pSVar2);
      pSVar2 = StringLiteral_Red_Cube;
      if (*(uint *)&(pOVar6->fields)._._isEnabled < 2) goto code_?;
      piVar12 = &(pOVar6->fields)._transformChannelFlags;
      *piVar12 = (int32_t)StringLiteral_Red_Cube;
      func_?(piVar12,pSVar2);
      for (uVar4 = 0; uVar13 = *(uint *)&(pOVar6->fields)._._isEnabled, (int)uVar4 < (int)uVar13;
          uVar4 = uVar4 + 1) {
        if (uVar13 <= uVar4) goto code_?;
        pSVar2 = (String *)*piVar11;
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
        ObjectTransformGizmo::ObjectTransformGizmo_SetTransformSpace
                  (pOVar6,GizmoSpace__Enum_Local,(MethodInfo *)0x0);
        piVar11 = piVar11 + 1;
      }
      this_00 = (UniversalGizmo *)func_?(TypeInfo__System__String,2);
      pSVar2 = StringLiteral_Cylinder__1_;
      if (this_00 != (UniversalGizmo *)0x0) {
        if (*(int *)&(this_00->fields)._._isEnabled == 0) goto code_?;
        ppGVar14 = &(this_00->fields)._mvPXSlider;
        *ppGVar14 = (GizmoLineSlider3D *)StringLiteral_Cylinder__1_;
        this_03 = this_00;
        func_?(ppGVar14,pSVar2);
        pSVar2 = StringLiteral_Sphere__1_;
        if (*(uint *)&(this_00->fields)._._isEnabled < 2) goto code_?;
        ppGVar15 = &(this_00->fields)._mvPYSlider;
        *ppGVar15 = (GizmoLineSlider3D *)StringLiteral_Sphere__1_;
        func_?(ppGVar15,pSVar2);
        for (uVar4 = 0; uVar13 = *(uint *)&(this_00->fields)._._isEnabled, (int)uVar4 < (int)uVar13;
            uVar4 = uVar4 + 1) {
          if (uVar13 <= uVar4) goto code_?;
          name = *ppGVar14;
          if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
          }
          pRVar5 = (RTGizmosEngine *)
                   MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                             (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
          if (pRVar5 == (RTGizmosEngine *)0x0) goto code_?;
          this_00 = (UniversalGizmo *)
                    RTGizmosEngine::RTGizmosEngine_CreateObjectScaleGizmo(pRVar5,(MethodInfo *)0x0);
          pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Find
                             ((String *)name,(MethodInfo *)0x0);
          if (this_00 == (UniversalGizmo *)0x0) goto code_?;
          ObjectTransformGizmo::ObjectTransformGizmo_SetTargetObject
                    ((ObjectTransformGizmo *)this_00,pGVar7,(MethodInfo *)0x0);
          ObjectTransformGizmo::ObjectTransformGizmo_SetTransformSpace
                    ((ObjectTransformGizmo *)this_00,GizmoSpace__Enum_Local,(MethodInfo *)0x0);
          ppGVar14 = ppGVar14 + 1;
          this_03 = this_00;
        }
        pGVar7 = (GameObject *)func_?(TypeInfo__System__String,2);
        pSVar2 = StringLiteral_Blue_Cube__1_;
        if (pGVar7 != (GameObject *)0x0) {
          if (pGVar7[1].klass == (GameObject__Class *)0x0) goto code_?;
          ppMVar16 = &pGVar7[1].monitor;
          *ppMVar16 = (MonitorData *)StringLiteral_Blue_Cube__1_;
          pGVar17 = pGVar7;
          ppMVar18 = ppMVar16;
          func_?(ppMVar16,pSVar2);
          pSVar2 = StringLiteral_Green_Cube;
          if (pGVar7[1].klass < (GameObject__Class *)0x2) goto code_?;
          pGVar7[1].fields._.m_CachedPtr = StringLiteral_Green_Cube;
          func_?(&pGVar7[1].fields,pSVar2);
          pGVar19 = (GameObject__Class *)0x0;
          while( true ) {
            if ((int)pGVar7[1].klass <= (int)pGVar19) break;
            if (pGVar7[1].klass <= pGVar19) goto code_?;
            pSVar2 = (String *)*ppMVar16;
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
            iVar8 = 0;
            pOVar20 = (Object *)&UNK_?;
            ObjectTransformGizmo::ObjectTransformGizmo_SetTargetObject
                      (pOVar6,pGVar7,(MethodInfo *)0x0);
            pGVar9 = (pOVar6->fields)._._gizmo;
            if (pGVar9 == (Gizmo *)0x0) goto code_?;
            this_03 = (pGVar9->fields)._universalGizmo;
            pLVar10 = (List_1_System_Object_ *)func_?();
            mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
            __Il2CppFullySharedGenericType]::
            LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                      ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar10,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__
                      );
            if (pLVar10 == (List_1_System_Object_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      (pLVar10,pOVar20,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                      );
            if (this_03 == (UniversalGizmo *)0x0) goto code_?;
            UniversalGizmo::UniversalGizmo_SetMvVertexSnapTargetObjects
                      (this_03,(IEnumerable_1_UnityEngine_GameObject_ *)pLVar10,(MethodInfo *)0x0);
            ObjectTransformGizmo::ObjectTransformGizmo_SetTransformSpace
                      (pOVar6,GizmoSpace__Enum_Global,(MethodInfo *)0x0);
            ObjectTransformGizmo::ObjectTransformGizmo_SetCanAffectScale(pOVar6,0,(MethodInfo *)0x0)
            ;
            pGVar19 = (GameObject__Class *)((int)&(pGVar19->_0).image + 1);
            ppMVar16 = (MonitorData **)(iVar8 + 4);
            pGVar17 = pGVar7;
            ppMVar18 = ppMVar16;
          }
          pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Find
                             (StringLiteral_Cube_BoxCollider,(MethodInfo *)0x0);
          if ((TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>,this_03,pGVar17,
                            ppMVar18);
          }
          pRVar5 = (RTGizmosEngine *)
                   MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                             (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
          if (pRVar5 != (RTGizmosEngine *)0x0) {
            pGVar9 = RTGizmosEngine::RTGizmosEngine_CreateGizmo(pRVar5,(MethodInfo *)0x0);
            if (pGVar9 != (Gizmo *)0x0) {
              pOVar20 = Gizmo::Gizmo_AddBehaviour_1
                                  (pGVar9,
                                   RTG__BoxColliderGizmo3D_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::BoxColliderGizmo3D>__
                                  );
              if (pGVar7 != (GameObject *)0x0) {
                pOVar21 = (Object__Class *)
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_GetComponent_1
                                    (pGVar7,
                                     UnityEngine__BoxCollider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::BoxCollider>__
                                    );
                if (pOVar20 != (Object *)0x0) {
                  pOVar20[2].klass = pOVar21;
                  func_?();
                  pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Find
                                     (StringLiteral_Sphere_SphereCollider,(MethodInfo *)0x0);
                  pRVar5 = (RTGizmosEngine *)
                           MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                                     (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__
                                     );
                  if (pRVar5 != (RTGizmosEngine *)0x0) {
                    pGVar9 = RTGizmosEngine::RTGizmosEngine_CreateGizmo(pRVar5,(MethodInfo *)0x0);
                    if (pGVar9 != (Gizmo *)0x0) {
                      pOVar20 = Gizmo::Gizmo_AddBehaviour_1
                                          (pGVar9,
                                           RTG__SphereColliderGizmo_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::SphereColliderGizmo>__
                                          );
                      if (pGVar7 != (GameObject *)0x0) {
                        pOVar21 = (Object__Class *)
                                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_GetComponent_1
                                            (pGVar7,
                                             UnityEngine__SphereCollider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::SphereCollider>__
                                            );
                        if (pOVar20 != (Object *)0x0) {
                          pOVar20[2].klass = pOVar21;
                          func_?(pOVar20 + 2,pOVar21);
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
                            pGVar9 = RTGizmosEngine::RTGizmosEngine_CreateGizmo
                                                (pRVar5,(MethodInfo *)0x0);
                            if (pGVar9 != (Gizmo *)0x0) {
                              pOVar20 = Gizmo::Gizmo_AddBehaviour_1
                                                  (pGVar9,
                                                  RTG__CapsuleColliderGizmo3D_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::CapsuleColliderGizmo3D>__
                                                  );
                              if (pGVar7 != (GameObject *)0x0) {
                                pOVar21 = (Object__Class *)
                                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                          GameObject_GetComponent_1
                                                    (pGVar7,
                                                  UnityEngine__CapsuleCollider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::CapsuleCollider>__
                                                  );
                                if (pOVar20 != (Object *)0x0) {
                                  pOVar20[2].klass = pOVar21;
                                  func_?(pOVar20 + 2,pOVar21);
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
                                    pGVar9 = RTGizmosEngine::RTGizmosEngine_CreateGizmo
                                                        (pRVar5,(MethodInfo *)0x0);
                                    if (pGVar9 != (Gizmo *)0x0) {
                                      pOVar20 = Gizmo::Gizmo_AddBehaviour_1
                                                          (pGVar9,
                                                  RTG__DirectionalLightGizmo3D_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::DirectionalLightGizmo3D>__
                                                  );
                                      if (pGVar7 != (GameObject *)0x0) {
                                        pOVar21 = (Object__Class *)
                                                  UnityEngine.CoreModule.dll::UnityEngine::
                                                  GameObject::GameObject_GetComponent_1
                                                            (pGVar7,
                                                  UnityEngine__Light_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Light>__
                                                  );
                                        if (pOVar20 != (Object *)0x0) {
                                          pOVar20[2].klass = pOVar21;
                                          func_?(pOVar20 + 2,pOVar21);
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
                                            pGVar9 = RTGizmosEngine::RTGizmosEngine_CreateGizmo
                                                                (pRVar5,(MethodInfo *)0x0);
                                            if (pGVar9 != (Gizmo *)0x0) {
                                              pOVar20 = Gizmo::Gizmo_AddBehaviour_1
                                                                  (pGVar9,
                                                  RTG__PointLightGizmo3D_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::PointLightGizmo3D>__
                                                  );
                                              if (pGVar7 != (GameObject *)0x0) {
                                                pOVar21 = (Object__Class *)
                                                          UnityEngine.CoreModule.dll::UnityEngine::
                                                          GameObject::GameObject_GetComponent_1
                                                                    (pGVar7,
                                                  UnityEngine__Light_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Light>__
                                                  );
                                                if (pOVar20 != (Object *)0x0) {
                                                  pOVar20[2].klass = pOVar21;
                                                  func_?(pOVar20 + 2,pOVar21);
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
                                                    pGVar9 = RTGizmosEngine::
                                                              RTGizmosEngine_CreateGizmo
                                                                        (pRVar5,(MethodInfo *)0x0);
                                                    if (pGVar9 != (Gizmo *)0x0) {
                                                      pOVar20 = Gizmo::Gizmo_AddBehaviour_1
                                                                          (pGVar9,
                                                  RTG__SpotLightGizmo3D_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::SpotLightGizmo3D>__
                                                  );
                                                  if (pGVar7 != (GameObject *)0x0) {
                                                    pOVar21 = (Object__Class *)
                                                              UnityEngine.CoreModule.dll::
                                                              UnityEngine::GameObject::
                                                              GameObject_GetComponent_1
                                                                        (pGVar7,
                                                  UnityEngine__Light_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Light>__
                                                  );
                                                  if (pOVar20 != (Object *)0x0) {
                                                    pOVar20[2].klass = pOVar21;
                                                    func_?(pOVar20 + 2,pOVar21);
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
                                                    pGVar9 = RTGizmosEngine::
                                                              RTGizmosEngine_CreateGizmo
                                                                        (pRVar5,(MethodInfo *)0x0);
                                                    if (pGVar9 != (Gizmo *)0x0) {
                                                      this_01 = (TerrainGizmo *)
                                                                Gizmo::Gizmo_AddBehaviour_1
                                                                          (pGVar9,
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
                                                  if (this_01 != (TerrainGizmo *)0x0) {
                                                    TerrainGizmo::TerrainGizmo_SetTargetTerrain
                                                              (this_01,terrain,(MethodInfo *)0x0);
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
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}

