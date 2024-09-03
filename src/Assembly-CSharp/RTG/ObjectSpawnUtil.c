
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
  iVar6 = TypeInfo__RTG__GameObjectTypeHelper->static_fields->_allCombined;
  pVVar7 = Vector3Ex::Vector3Ex_FromValue(&VStack_8,1.0,(MethodInfo *)0x0);
  uVar9 = pVVar7->x;
  uVar10 = pVVar7->y;
  fVar11 = pVVar7->z;
  if (camera != (Camera *)0x0) {
    pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)camera,(MethodInfo *)0x0);
    if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__ObjectBounds);
    }
    queryConfig.NoVolumeSize.x = (float)uVar9;
    queryConfig.ObjectTypes = iVar6;
    queryConfig.NoVolumeSize.y = (float)uVar10;
    queryConfig.NoVolumeSize.z = fVar11;
    pAVar13 = ObjectBounds::ObjectBounds_CalcHierarchyWorldAABB
                        ((AABB *)&stack0xffffff4c,sourceObject,queryConfig,(MethodInfo *)0x0);
    if ((char)*(undefined4 *)&pAVar13->_isValid == '\0') {
      return (GameObject *)0x0;
    }
    uVar14 = (pAVar13->_center).z;
    uVar15 = (pAVar13->_size).x;
    uVar16 = (pAVar13->_size).y;
    uVar17 = (pAVar13->_size).z;
    aabb._size.z = (float)uVar17;
    aabb._size.y = (float)uVar16;
    aabb._size.x = (float)uVar15;
    uVar18 = (pAVar13->_center).x;
    uVar19 = (pAVar13->_center).y;
    aabb._center.y = (float)uVar19;
    aabb._center.x = (float)uVar18;
    aabb._center.z = (float)uVar14;
    aabb._isValid = pAVar13->_isValid;
    aabb._25_3_ = *(undefined3 *)&pAVar13->field_0x19;
    Sphere::Sphere__ctor_1((Sphere *)&stack0xffffffbc,aabb,(MethodInfo *)0x0);
    if ((sourceObject != (GameObject *)0x0) &&
       (this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (sourceObject,(MethodInfo *)0x0), this_00 != (Transform *)0x0)) {
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          (&VStack_8,this_00,(MethodInfo *)0x0);
      uVar20 = pVVar7->x;
      uVar21 = pVVar7->y;
      fVar1 = (float)uVar20 - fVar1;
      fVar2 = (float)uVar21 - fVar2;
      fVar3 = pVVar7->z - fVar3;
      fVar22 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_nearClipPlane
                         (camera,(MethodInfo *)0x0);
      fVar5 = fVar4 / fVar5;
      fVar11 = fVar4 + fVar22;
      if (fVar4 + fVar22 <= fVar5) {
        fVar11 = fVar5;
      }
      if (pTVar12 != (Transform *)0x0) {
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffd4,pTVar12,(MethodInfo *)0x0);
        VStack_8.x = pVVar7->x;
        VStack_8.y = pVVar7->y;
        VStack_8.z = pVVar7->z;
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                            ((Vector3 *)&stack0xffffffa0,pTVar12,(MethodInfo *)0x0);
        uVar23 = pVVar7->x;
        uVar24 = pVVar7->y;
        VStack_8.z = fVar3 + VStack_8.z + pVVar7->z * fVar11;
        VStack_8.y = fVar2 + VStack_8.y + (float)uVar24 * fVar11;
        VStack_8.x = fVar1 + VStack_8.x + (float)uVar23 * fVar11;
        pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (sourceObject,(MethodInfo *)0x0);
        if (pTVar12 != (Transform *)0x0) {
          pQVar25 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                              ((Quaternion *)&stack0xffffff9c,pTVar12,(MethodInfo *)0x0);
          fVar1 = pQVar25->x;
          fVar2 = pQVar25->y;
          fVar3 = pQVar25->z;
          fVar5 = pQVar25->w;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          fVar4 = VStack_8.x;
          fVar11 = VStack_8.y;
          position.z = VStack_8.z;
          position.x = VStack_8.x;
          position.y = VStack_8.y;
          rotation.y = fVar2;
          rotation.x = fVar1;
          rotation.z = fVar3;
          rotation.w = fVar5;
          fVar2 = VStack_8.z;
          pGVar26 = (GameObject *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_7
                              ((Object *)sourceObject,position,rotation,
                               UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                              );
          if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          queryConfig_00.NoVolumeSize.x = fVar11;
          queryConfig_00.ObjectTypes = (int32_t)fVar4;
          queryConfig_00.NoVolumeSize.y = fVar2;
          queryConfig_00.NoVolumeSize.z = fVar1;
          pOVar27 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                              ((OBB *)&stack0xffffff80,pGVar26,queryConfig_00,(MethodInfo *)0x0);
          fVar1 = (pOVar27->_size).x;
          fVar2 = (pOVar27->_size).y;
          fVar3 = (pOVar27->_size).z;
          fVar5 = (pOVar27->_center).x;
          fVar4 = (pOVar27->_center).y;
          fVar11 = (pOVar27->_center).z;
          fVar22 = (pOVar27->_rotation).x;
          fVar28 = (pOVar27->_rotation).y;
          pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)camera,(MethodInfo *)0x0);
          if (pTVar12 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                      ((Vector3 *)&stack0xffffffa0,pTVar12,(MethodInfo *)0x0);
            pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)camera,(MethodInfo *)0x0);
            if (pTVar12 != (Transform *)0x0) {
              pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  ((Vector3 *)&stack0xffffffa0,pTVar12,(MethodInfo *)0x0);
              VStack_8.x = pVVar7->x;
              VStack_8.y = pVVar7->y;
              VStack_8.z = fVar11 - pVVar7->z;
              value.y = fVar4 - VStack_8.y;
              value.x = fVar5 - VStack_8.x;
              value.z = VStack_8.z;
              pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                  ((Vector3 *)&stack0xffffffa0,value,(MethodInfo *)0x0);
              pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                  ((Vector3 *)&stack0xffffffa0,*pVVar7,(MethodInfo *)0x0);
              uVar29 = pVVar7->x;
              uVar30 = pVVar7->y;
              fVar31 = pVVar7->z;
              this_01 = (SceneRaycastFilter *)func_?();
              uVar9 = 0;
              SceneRaycastFilter::SceneRaycastFilter__ctor(this_01,(MethodInfo *)0x0);
              pMVar32 = 
              MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__Add_RTG__GameObjectType_
              ;
              if ((this_01 != (SceneRaycastFilter *)0x0) &&
                 (this = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         (this_01->fields)._allowedObjectTypes,
                 this != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0))
              {
                piVar33 = &(this->fields)._version;
                *piVar33 = *piVar33 + 1;
                pRVar34 = (this->fields)._items;
                if (pRVar34 != (RegexCharClass_SingleRange__Array *)0x0) {
                  uVar35 = (this->fields)._size;
                  if (uVar35 < pRVar34->max_length) {
                    (this->fields)._size = uVar35 + 1;
                    if (pRVar34->max_length <= uVar35) goto code_?;
                    pRVar34->vector[uVar35].First = 1;
                    pRVar34->vector[uVar35].Last = 0;
                  }
                  else {
                    mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                              (this,(RegexCharClass_SingleRange)0x1,
                               pMVar32->klass->rgctx_data[0xe].method);
                  }
                  if ((TypeInfo__RTG__MonoSingleton<RTG::RTScene>->_1).cctor_finished_or_no_cctor ==
                      0) {
                    func_?();
                  }
                  this_02 = (RTScene *)
                            MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                                      (MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
                  if ((this_02 != (RTScene *)0x0) &&
                     (ray.m_Origin.y = (float)this_01, ray.m_Origin.x = (float)&UNK_?,
                     ray.m_Origin.z = (float)uVar9, ray.m_Direction.x = (float)uVar29,
                     ray.m_Direction.y = (float)uVar30, ray.m_Direction.z = fVar31,
                     this_03 = (UQuery_SingleQueryMatcher *)
                               RTScene::RTScene_Raycast
                                         (this_02,ray,SceneRaycastPrecision__Enum_BestFit,this_01,
                                          (MethodInfo *)0x0),
                     this_03 != (UQuery_SingleQueryMatcher *)0x0)) {
                    bVar36 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                             UQuery+SingleQueryMatcher::UQuery_SingleQueryMatcher_IsInUse
                                       (this_03,(MethodInfo *)0x0);
                    if (bVar36 == 0) {
                      return pGVar26;
                    }
                    pLVar37 = (this_03->fields)._.m_Matchers;
                    if (pLVar37 != (List_1_UnityEngine_UIElements_RuleMatcher_ *)0x0) {
                      VStack_8.x = (float)(pLVar37->fields)._size;
                      VStack_8.y = (float)(pLVar37->fields)._version;
                      VStack_8.z = (float)(pLVar37->fields)._syncRoot;
                      fVar5 = VStack_8.x - fVar5;
                      fVar4 = VStack_8.y - fVar4;
                      fVar11 = VStack_8.z - fVar11;
                      obb._size.y = fVar2;
                      obb._size.x = fVar1;
                      obb._size.z = fVar3;
                      obb._center.x = VStack_8.x;
                      obb._center.y = VStack_8.y;
                      obb._center.z = VStack_8.z;
                      obb._rotation.x = fVar22;
                      obb._rotation.y = fVar28;
                      obb._rotation.z = (float)pLVar37[2].monitor;
                      obb._rotation.w = 0.0;
                      obb._40_4_ = &UNK_?;
                      pVVar7 = ObjectSurfaceSnap::ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                                          ((Vector3 *)&stack0xffffffa0,obb,
                                           *(Plane *)&pLVar37[1].fields._version,0.0,
                                           (MethodInfo *)0x0);
                      VStack_8.x = pVVar7->x;
                      VStack_8.y = pVVar7->y;
                      VStack_8.z = pVVar7->z;
                      fVar5 = VStack_8.x + fVar5;
                      fVar4 = VStack_8.y + fVar4;
                      fVar11 = VStack_8.z + fVar11;
                      if ((pGVar26 != (GameObject *)0x0) &&
                         (pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_get_transform(pGVar26,(MethodInfo *)0x0),
                         pTVar12 != (Transform *)0x0)) {
                        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_get_position
                                            ((Vector3 *)&stack0xffffffa0,pTVar12,(MethodInfo *)0x0);
                        VStack_8.x = pVVar7->x;
                        VStack_8.y = pVVar7->y;
                        VStack_8.z = pVVar7->z + fVar11;
                        value_00.y = VStack_8.y + fVar4;
                        value_00.x = VStack_8.x + fVar5;
                        value_00.z = VStack_8.z;
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                                  (pTVar12,value_00,(MethodInfo *)0x0);
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
  pcVar38 = (code *)swi(3);
  pGVar26 = (GameObject *)(*pcVar38)();
  return pGVar26;
}

