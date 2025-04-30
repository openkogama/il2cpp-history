
/* GameObject SpawnInFrontOfCamera(GameObject, Camera, Single) */

GameObject * Assembly-CSharp.dll::RTG::ObjectSpawnUtil::ObjectSpawnUtil_SpawnInFrontOfCamera(GameObject *sourceObject,Camera *camera,float objectSize,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GameObjectTypeHelper);
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__Add_RTG__GameObjectType_);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTScene>);
    func_?(&TypeInfo__RTG__ObjectBounds);
    func_?(&UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__RTG__SceneRaycastFilter);
    cRam_? = '\x01';
  }
  fVar1 = 0.0;
  fVar2 = 0.0;
  fVar3 = 0.0;
  fVar4 = 0.0;
  if ((TypeInfo__RTG__GameObjectTypeHelper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__GameObjectTypeHelper);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GameObjectTypeHelper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__GameObjectTypeHelper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__GameObjectTypeHelper);
  }
  fVar5 = (float)TypeInfo__RTG__GameObjectTypeHelper->static_fields->_allCombined;
  pVVar6 = Vector3Ex::Vector3Ex_FromValue((Vector3 *)&stack0xfffffff0,1.0,(MethodInfo *)0x0);
  fVar7 = pVVar6->x;
  fVar8 = pVVar6->y;
  fVar9 = pVVar6->z;
  if (camera != (Camera *)0x0) {
    pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)camera,(MethodInfo *)0x0);
    if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__ObjectBounds);
    }
    queryConfig.NoVolumeSize.x = fVar7;
    queryConfig.ObjectTypes = (int32_t)fVar5;
    queryConfig.NoVolumeSize.y = fVar8;
    queryConfig.NoVolumeSize.z = fVar9;
    pAVar11 = ObjectBounds::ObjectBounds_CalcHierarchyWorldAABB((AABB *)&stack0xffffff58,sourceObject,queryConfig,(MethodInfo *)0x0);
    if ((char)*(undefined4 *)&pAVar11->_isValid == '\0') {
      return (GameObject *)0x0;
    }
    uVar12 = (pAVar11->_center).z;
    uVar13 = (pAVar11->_size).x;
    uVar14 = (pAVar11->_size).y;
    uVar15 = (pAVar11->_size).z;
    aabb._size.z = (float)uVar15;
    aabb._size.y = (float)uVar14;
    aabb._size.x = (float)uVar13;
    uVar16 = (pAVar11->_center).x;
    uVar17 = (pAVar11->_center).y;
    aabb._center.y = (float)uVar17;
    aabb._center.x = (float)uVar16;
    aabb._center.z = (float)uVar12;
    aabb._isValid = pAVar11->_isValid;
    aabb._25_3_ = *(undefined3 *)&pAVar11->field_0x19;
    Sphere::Sphere__ctor_1((Sphere *)&stack0xffffffa0,aabb,(MethodInfo *)0x0);
    if ((sourceObject != (GameObject *)0x0) && (this = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(sourceObject,(MethodInfo *)0x0), this != (Transform *)0x0)) {
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xfffffff0,this,(MethodInfo *)0x0);
      uVar18 = pVVar6->x;
      uVar19 = pVVar6->y;
      fVar1 = (float)uVar18 - fVar1;
      fVar2 = (float)uVar19 - fVar2;
      fVar3 = pVVar6->z - fVar3;
      fVar20 = 0.0;
      pCVar21 = camera;
      fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_nearClipPlane(camera,(MethodInfo *)0x0);
      fVar5 = fVar4 / (objectSize * 0.5);
      fVar7 = fVar4 + fVar9;
      if (fVar4 + fVar9 <= fVar5) {
        fVar7 = fVar5;
      }
      if (pTVar10 != (Transform *)0x0) {
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffd4,pTVar10,(MethodInfo *)0x0);
        fVar4 = pVVar6->x;
        fVar5 = pVVar6->y;
        fVar9 = pVVar6->z;
        puVar22 = &UNK_?;
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward((Vector3 *)&stack0xffffffc0,pTVar10,(MethodInfo *)0x0);
        uVar23 = pVVar6->x;
        uVar24 = pVVar6->y;
        fVar1 = fVar4 + (float)uVar23 * fVar7 + fVar1;
        fVar2 = fVar5 + (float)uVar24 * fVar7 + fVar2;
        fVar3 = fVar9 + pVVar6->z * fVar7 + fVar3;
        pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(sourceObject,(MethodInfo *)0x0);
        if (pTVar10 != (Transform *)0x0) {
          pQVar25 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation((Quaternion *)&stack0xffffffbc,pTVar10,(MethodInfo *)0x0);
          fVar4 = pQVar25->x;
          fVar7 = pQVar25->y;
          fVar5 = pQVar25->z;
          fVar9 = pQVar25->w;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          position.y = fVar2;
          position.x = fVar1;
          position.z = fVar3;
          rotation.y = fVar7;
          rotation.x = fVar4;
          rotation.z = fVar5;
          rotation.w = fVar9;
          pGVar26 = (GameObject *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_7((Object *)sourceObject,position,rotation,UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_);
          if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          queryConfig_00.NoVolumeSize.x = fVar20;
          queryConfig_00.ObjectTypes = (int32_t)pCVar21;
          queryConfig_00.NoVolumeSize.y = fVar8;
          queryConfig_00.NoVolumeSize.z = (float)puVar22;
          pOVar27 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB((OBB *)&puStack_28,pGVar26,queryConfig_00,(MethodInfo *)0x0);
          fVar1 = (pOVar27->_size).x;
          fVar3 = (pOVar27->_size).y;
          fVar2 = (pOVar27->_size).z;
          fVar4 = (pOVar27->_center).x;
          fVar7 = (pOVar27->_center).y;
          fVar8 = (pOVar27->_center).z;
          fVar5 = (pOVar27->_rotation).x;
          fVar9 = (pOVar27->_rotation).y;
          pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)camera,(MethodInfo *)0x0);
          if (pTVar10 != (Transform *)0x0) {
            pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffc0,pTVar10,(MethodInfo *)0x0);
            fVar20 = pVVar6->x;
            fVar29 = pVVar6->y;
            puVar22 = (undefined *)pVVar6->z;
            pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)camera,(MethodInfo *)0x0);
            if (pTVar10 != (Transform *)0x0) {
              pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffc0,pTVar10,(MethodInfo *)0x0);
              uVar30 = pVVar6->x;
              uVar31 = pVVar6->y;
              value.y = fVar7 - (float)uVar31;
              value.x = fVar4 - (float)uVar30;
              value.z = fVar8 - pVVar6->z;
              pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize((Vector3 *)&stack0xffffffc0,value,(MethodInfo *)0x0);
              uVar32._4_4_ = fVar29;
              uVar32._0_4_ = fVar20;
              pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize((Vector3 *)&stack0xffffffc0,*pVVar6,(MethodInfo *)0x0);
              pLVar33 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)pVVar6->x;
              this_00 = (SceneRaycastFilter *)func_?();
              SceneRaycastFilter::SceneRaycastFilter__ctor(this_00,(MethodInfo *)0x0);
              pMVar34 = MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__Add_RTG__GameObjectType_;
              if ((this_00 != (SceneRaycastFilter *)0x0) && (this_03 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)(this_00->fields)._allowedObjectTypes, this_03 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) {
                piVar35 = &(this_03->fields)._version;
                *piVar35 = *piVar35 + 1;
                pRVar36 = (this_03->fields)._items;
                if (pRVar36 != (RegexCharClass_SingleRange__Array *)0x0) {
                  uVar37 = (this_03->fields)._size;
                  if (uVar37 < pRVar36->max_length) {
                    (this_03->fields)._size = uVar37 + 1;
                    if (pRVar36->max_length <= uVar37) goto code_?;
                    pRVar36->vector[uVar37].First = 1;
                    pRVar36->vector[uVar37].Last = 0;
                  }
                  else {
                    puVar22 = &UNK_?;
                    mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::RegexCharClass+SingleRange]::List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize(this_03,(RegexCharClass_SingleRange)0x1,pMVar34->klass->rgctx_data[0xe].method);
                    pLVar33 = this_03;
                  }
                  if ((TypeInfo__RTG__MonoSingleton<RTG::RTScene>->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  this_01 = (RTScene *)MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get(MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
                  if ((this_01 != (RTScene *)0x0) && (ray.m_Origin.z = (float)puVar22, ray.m_Origin.x = (float)uVar32, ray.m_Origin.y = SUB84(uVar32,4), ray.m_Direction.x = (float)pLVar33, ray.m_Direction.y = (float)puVar22, ray.m_Direction.z = (float)pLVar33, this_02 = (UQuery_SingleQueryMatcher *)RTScene::RTScene_Raycast(this_01,ray,SceneRaycastPrecision__Enum_BestFit,this_00,(MethodInfo *)0x0), this_02 != (UQuery_SingleQueryMatcher *)0x0)) {
                    bVar38 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::UQuery+SingleQueryMatcher::UQuery_SingleQueryMatcher_IsInUse(this_02,(MethodInfo *)0x0);
                    if (bVar38 == 0) {
                      return pGVar26;
                    }
                    pLVar39 = (this_02->fields)._.m_Matchers;
                    if (pLVar39 != (List_1_UnityEngine_UIElements_RuleMatcher_ *)0x0) {
                      uVar40 = (pLVar39->fields)._size;
                      uVar41 = (pLVar39->fields)._version;
                      fVar7 = (float)uVar41 - fVar7;
                      piVar35 = &pLVar39[1].fields._version;
                      fVar8 = 0.0;
                      obb._size.y = fVar3;
                      obb._size.x = fVar1;
                      obb._size.z = fVar2;
                      obb._center.x = (float)uVar40;
                      obb._center.y = (float)uVar41;
                      obb._center.z = (float)(pLVar39->fields)._syncRoot;
                      obb._rotation.x = fVar5;
                      obb._rotation.y = fVar9;
                      obb._rotation.z = (float)*piVar35;
                      obb._rotation.w = (float)pLVar39[1].fields._syncRoot;
                      obb._isValid = pOVar27->_isValid;
                      obb._41_3_ = *(undefined3 *)&pOVar27->field_0x29;
                      pVVar6 = ObjectSurfaceSnap::ObjectSurfaceSnap_CalculateSitOnSurfaceOffset((Vector3 *)&stack0xffffffc0,obb,*(Plane *)piVar35,0.0,(MethodInfo *)0x0);
                      uVar42 = pVVar6->x;
                      uVar43 = pVVar6->y;
                      fVar8 = pVVar6->z + fVar8;
                      if ((pGVar26 != (GameObject *)0x0) && (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar26,(MethodInfo *)0x0), pTVar10 != (Transform *)0x0)) {
                        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffc0,pTVar10,(MethodInfo *)0x0);
                        uVar44 = pVVar6->x;
                        uVar45 = pVVar6->y;
                        value_00.y = (float)uVar45 + (float)uVar43 + fVar7;
                        value_00.x = (float)uVar44 + (float)uVar42 + ((float)uVar40 - fVar4);
                        value_00.z = pVVar6->z + fVar8;
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar10,value_00,(MethodInfo *)0x0);
                        return pGVar26;
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
code_?:
  func_?();
  pcVar46 = (code *)swi(3);
  pGVar26 = (GameObject *)(*pcVar46)();
  return pGVar26;
}

