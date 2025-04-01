
/* GameObject SpawnInFrontOfCamera(GameObject, Camera, Single) */

GameObject *
Assembly-CSharp.dll::RTG::ObjectSpawnUtil::ObjectSpawnUtil_SpawnInFrontOfCamera
          (GameObject *sourceObject,Camera *camera,float objectSize,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GameObjectTypeHelper);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__Add_RTG__GameObjectType_
                   );
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTScene>);
    func_?(&TypeInfo__RTG__ObjectBounds);
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__RTG__SceneRaycastFilter);
    cRam_? = '\x01';
  }
  fVar1 = 0.0;
  fVar2 = 0.0;
  fVar3 = 0.0;
  fVar4 = 0.0;
  fVar5 = objectSize * _UNK_?;
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
  fVar6 = (float)TypeInfo__RTG__GameObjectTypeHelper->static_fields->_allCombined;
  pVVar7 = Vector3Ex::Vector3Ex_FromValue((Vector3 *)&stack0xfffffff0,1.0,(MethodInfo *)0x0);
  fVar8 = pVVar7->x;
  fVar9 = pVVar7->y;
  fVar10 = pVVar7->z;
  if (camera != (Camera *)0x0) {
    pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)camera,(MethodInfo *)0x0);
    if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__ObjectBounds);
    }
    queryConfig.NoVolumeSize.x = fVar8;
    queryConfig.ObjectTypes = (int32_t)fVar6;
    queryConfig.NoVolumeSize.y = fVar9;
    queryConfig.NoVolumeSize.z = fVar10;
    pAVar12 = ObjectBounds::ObjectBounds_CalcHierarchyWorldAABB
                        ((AABB *)&stack0xffffff58,sourceObject,queryConfig,(MethodInfo *)0x0);
    if ((char)*(undefined4 *)&pAVar12->_isValid == '\0') {
      return (GameObject *)0x0;
    }
    uVar13 = (pAVar12->_center).z;
    uVar14 = (pAVar12->_size).x;
    uVar15 = (pAVar12->_size).y;
    uVar16 = (pAVar12->_size).z;
    aabb._size.z = (float)uVar16;
    aabb._size.y = (float)uVar15;
    aabb._size.x = (float)uVar14;
    uVar17 = (pAVar12->_center).x;
    uVar18 = (pAVar12->_center).y;
    aabb._center.y = (float)uVar18;
    aabb._center.x = (float)uVar17;
    aabb._center.z = (float)uVar13;
    aabb._isValid = pAVar12->_isValid;
    aabb._25_3_ = *(undefined3 *)&pAVar12->field_0x19;
    Sphere::Sphere__ctor_1((Sphere *)&stack0xffffffa0,aabb,(MethodInfo *)0x0);
    if ((sourceObject != (GameObject *)0x0) &&
       (this = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (sourceObject,(MethodInfo *)0x0), this != (Transform *)0x0)) {
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xfffffff0,this,(MethodInfo *)0x0);
      uVar19 = pVVar7->x;
      uVar20 = pVVar7->y;
      fVar1 = (float)uVar19 - fVar1;
      fVar2 = (float)uVar20 - fVar2;
      fVar3 = pVVar7->z - fVar3;
      fVar10 = 0.0;
      pCVar21 = camera;
      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_nearClipPlane
                         (camera,(MethodInfo *)0x0);
      fVar5 = fVar4 / fVar5;
      fVar8 = fVar4 + fVar6;
      if (fVar4 + fVar6 <= fVar5) {
        fVar8 = fVar5;
      }
      if (pTVar11 != (Transform *)0x0) {
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffd4,pTVar11,(MethodInfo *)0x0);
        fVar5 = pVVar7->x;
        fVar4 = pVVar7->y;
        fVar6 = pVVar7->z;
        puVar22 = &UNK_?;
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                            ((Vector3 *)&stack0xffffffc0,pTVar11,(MethodInfo *)0x0);
        uVar23 = pVVar7->x;
        uVar24 = pVVar7->y;
        fVar1 = fVar5 + (float)uVar23 * fVar8 + fVar1;
        fVar2 = fVar4 + (float)uVar24 * fVar8 + fVar2;
        fVar3 = fVar6 + pVVar7->z * fVar8 + fVar3;
        pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (sourceObject,(MethodInfo *)0x0);
        if (pTVar11 != (Transform *)0x0) {
          pQVar25 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                              ((Quaternion *)&stack0xffffffbc,pTVar11,(MethodInfo *)0x0);
          fVar5 = pQVar25->x;
          fVar4 = pQVar25->y;
          fVar8 = pQVar25->z;
          fVar6 = pQVar25->w;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          position.y = fVar2;
          position.x = fVar1;
          position.z = fVar3;
          rotation.y = fVar4;
          rotation.x = fVar5;
          rotation.z = fVar8;
          rotation.w = fVar6;
          pGVar26 = (GameObject *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_7
                              ((Object *)sourceObject,position,rotation,
                               UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                              );
          if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          queryConfig_00.NoVolumeSize.x = fVar10;
          queryConfig_00.ObjectTypes = (int32_t)pCVar21;
          queryConfig_00.NoVolumeSize.y = fVar9;
          queryConfig_00.NoVolumeSize.z = (float)puVar22;
          pOVar27 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                              ((OBB *)&puStack_28,pGVar26,queryConfig_00,(MethodInfo *)0x0);
          fVar1 = (pOVar27->_size).x;
          fVar3 = (pOVar27->_size).y;
          fVar5 = (pOVar27->_size).z;
          fVar2 = (pOVar27->_center).x;
          fVar4 = (pOVar27->_center).y;
          fVar8 = (pOVar27->_center).z;
          fVar9 = (pOVar27->_rotation).x;
          fVar6 = (pOVar27->_rotation).y;
          pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)camera,(MethodInfo *)0x0);
          if (pTVar11 != (Transform *)0x0) {
            pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0xffffffc0,pTVar11,(MethodInfo *)0x0);
            fVar10 = pVVar7->x;
            fVar29 = pVVar7->y;
            puVar22 = (undefined *)pVVar7->z;
            pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)camera,(MethodInfo *)0x0);
            if (pTVar11 != (Transform *)0x0) {
              pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  ((Vector3 *)&stack0xffffffc0,pTVar11,(MethodInfo *)0x0);
              uVar30 = pVVar7->x;
              uVar31 = pVVar7->y;
              value.y = fVar4 - (float)uVar31;
              value.x = fVar2 - (float)uVar30;
              value.z = fVar8 - pVVar7->z;
              pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                  ((Vector3 *)&stack0xffffffc0,value,(MethodInfo *)0x0);
              uVar32._4_4_ = fVar29;
              uVar32._0_4_ = fVar10;
              pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                  ((Vector3 *)&stack0xffffffc0,*pVVar7,(MethodInfo *)0x0);
              pLVar33 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       pVVar7->x;
              this_00 = (SceneRaycastFilter *)func_?();
              SceneRaycastFilter::SceneRaycastFilter__ctor(this_00,(MethodInfo *)0x0);
              pMVar34 = 
              MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__Add_RTG__GameObjectType_
              ;
              if ((this_00 != (SceneRaycastFilter *)0x0) &&
                 (this_03 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                            (this_00->fields)._allowedObjectTypes,
                 this_03 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0
                 )) {
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
                    mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                              (this_03,(RegexCharClass_SingleRange)0x1,
                               pMVar34->klass->rgctx_data[0xe].method);
                    pLVar33 = this_03;
                  }
                  if ((TypeInfo__RTG__MonoSingleton<RTG::RTScene>->_1).cctor_finished_or_no_cctor ==
                      0) {
                    func_?();
                  }
                  this_01 = (RTScene *)
                            MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                                      (MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
                  if ((this_01 != (RTScene *)0x0) &&
                     (ray.m_Origin.z = (float)puVar22, ray.m_Origin.x = (float)uVar32,
                     ray.m_Origin.y = SUB84(uVar32,4), ray.m_Direction.x = (float)pLVar33,
                     ray.m_Direction.y = (float)puVar22, ray.m_Direction.z = (float)pLVar33,
                     this_02 = (UQuery_SingleQueryMatcher *)
                               RTScene::RTScene_Raycast
                                         (this_01,ray,SceneRaycastPrecision__Enum_BestFit,this_00,
                                          (MethodInfo *)0x0),
                     this_02 != (UQuery_SingleQueryMatcher *)0x0)) {
                    bVar38 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                             UQuery+SingleQueryMatcher::UQuery_SingleQueryMatcher_IsInUse
                                       (this_02,(MethodInfo *)0x0);
                    if (bVar38 == 0) {
                      return pGVar26;
                    }
                    pLVar39 = (this_02->fields)._.m_Matchers;
                    if (pLVar39 != (List_1_UnityEngine_UIElements_RuleMatcher_ *)0x0) {
                      uVar40 = (pLVar39->fields)._size;
                      uVar41 = (pLVar39->fields)._version;
                      fVar4 = (float)uVar41 - fVar4;
                      piVar35 = &pLVar39[1].fields._version;
                      fVar8 = 0.0;
                      obb._size.y = fVar3;
                      obb._size.x = fVar1;
                      obb._size.z = fVar5;
                      obb._center.x = (float)uVar40;
                      obb._center.y = (float)uVar41;
                      obb._center.z = (float)(pLVar39->fields)._syncRoot;
                      obb._rotation.x = fVar9;
                      obb._rotation.y = fVar6;
                      obb._rotation.z = (float)*piVar35;
                      obb._rotation.w = (float)pLVar39[1].fields._syncRoot;
                      obb._isValid = pOVar27->_isValid;
                      obb._41_3_ = *(undefined3 *)&pOVar27->field_0x29;
                      pVVar7 = ObjectSurfaceSnap::ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                                          ((Vector3 *)&stack0xffffffc0,obb,*(Plane *)piVar35,0.0,
                                           (MethodInfo *)0x0);
                      uVar42 = pVVar7->x;
                      uVar43 = pVVar7->y;
                      fVar8 = pVVar7->z + fVar8;
                      if ((pGVar26 != (GameObject *)0x0) &&
                         (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_get_transform(pGVar26,(MethodInfo *)0x0),
                         pTVar11 != (Transform *)0x0)) {
                        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_get_position
                                            ((Vector3 *)&stack0xffffffc0,pTVar11,(MethodInfo *)0x0);
                        uVar44 = pVVar7->x;
                        uVar45 = pVVar7->y;
                        value_00.y = (float)uVar45 + (float)uVar43 + fVar4;
                        value_00.x = (float)uVar44 + (float)uVar42 + ((float)uVar40 - fVar2);
                        value_00.z = pVVar7->z + fVar8;
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                                  (pTVar11,value_00,(MethodInfo *)0x0);
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

