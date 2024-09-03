
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
  iVar5 = TypeInfo__RTG__GameObjectTypeHelper->static_fields->_allCombined;
  pVVar6 = Vector3Ex::Vector3Ex_FromValue(&VStack_7,1.0,(MethodInfo *)0x0);
  uVar8 = pVVar6->x;
  uVar9 = pVVar6->y;
  fVar10 = pVVar6->z;
  if (camera != (Camera *)0x0) {
    pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)camera,(MethodInfo *)0x0);
    if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__ObjectBounds);
    }
    queryConfig.NoVolumeSize.x = (float)uVar8;
    queryConfig.ObjectTypes = iVar5;
    queryConfig.NoVolumeSize.y = (float)uVar9;
    queryConfig.NoVolumeSize.z = fVar10;
    pAVar12 = ObjectBounds::ObjectBounds_CalcHierarchyWorldAABB((AABB *)&stack0xffffff4c,sourceObject,queryConfig,(MethodInfo *)0x0);
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
    Sphere::Sphere__ctor_1((Sphere *)&stack0xffffffbc,aabb,(MethodInfo *)0x0);
    if ((sourceObject != (GameObject *)0x0) && (this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(sourceObject,(MethodInfo *)0x0), this_00 != (Transform *)0x0)) {
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_7,this_00,(MethodInfo *)0x0);
      uVar19 = pVVar6->x;
      uVar20 = pVVar6->y;
      fVar1 = (float)uVar19 - fVar1;
      fVar2 = (float)uVar20 - fVar2;
      fVar3 = pVVar6->z - fVar3;
      fVar21 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_nearClipPlane(camera,(MethodInfo *)0x0);
      fVar22 = fVar4 / (objectSize * 0.5);
      fVar10 = fVar4 + fVar21;
      if (fVar4 + fVar21 <= fVar22) {
        fVar10 = fVar22;
      }
      if (pTVar11 != (Transform *)0x0) {
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffd4,pTVar11,(MethodInfo *)0x0);
        VStack_7.x = pVVar6->x;
        VStack_7.y = pVVar6->y;
        VStack_7.z = pVVar6->z;
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward((Vector3 *)&stack0xffffffa0,pTVar11,(MethodInfo *)0x0);
        uVar23 = pVVar6->x;
        uVar24 = pVVar6->y;
        VStack_7.z = fVar3 + VStack_7.z + pVVar6->z * fVar10;
        VStack_7.y = fVar2 + VStack_7.y + (float)uVar24 * fVar10;
        VStack_7.x = fVar1 + VStack_7.x + (float)uVar23 * fVar10;
        pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(sourceObject,(MethodInfo *)0x0);
        if (pTVar11 != (Transform *)0x0) {
          pQVar25 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation((Quaternion *)&stack0xffffff9c,pTVar11,(MethodInfo *)0x0);
          fVar1 = pQVar25->x;
          fVar2 = pQVar25->y;
          fVar3 = pQVar25->z;
          fVar4 = pQVar25->w;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          fVar10 = VStack_7.x;
          fVar22 = VStack_7.y;
          position.z = VStack_7.z;
          position.x = VStack_7.x;
          position.y = VStack_7.y;
          rotation.y = fVar2;
          rotation.x = fVar1;
          rotation.z = fVar3;
          rotation.w = fVar4;
          fVar2 = VStack_7.z;
          pGVar26 = (GameObject *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_7((Object *)sourceObject,position,rotation,UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_);
          if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          queryConfig_00.NoVolumeSize.x = fVar22;
          queryConfig_00.ObjectTypes = (int32_t)fVar10;
          queryConfig_00.NoVolumeSize.y = fVar2;
          queryConfig_00.NoVolumeSize.z = fVar1;
          pOVar27 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB((OBB *)&stack0xffffff80,pGVar26,queryConfig_00,(MethodInfo *)0x0);
          fVar1 = (pOVar27->_size).x;
          fVar2 = (pOVar27->_size).y;
          fVar3 = (pOVar27->_size).z;
          fVar4 = (pOVar27->_center).x;
          fVar10 = (pOVar27->_center).y;
          fVar22 = (pOVar27->_center).z;
          fVar21 = (pOVar27->_rotation).x;
          fVar28 = (pOVar27->_rotation).y;
          pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)camera,(MethodInfo *)0x0);
          if (pTVar11 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffa0,pTVar11,(MethodInfo *)0x0);
            pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)camera,(MethodInfo *)0x0);
            if (pTVar11 != (Transform *)0x0) {
              pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffa0,pTVar11,(MethodInfo *)0x0);
              VStack_7.x = pVVar6->x;
              VStack_7.y = pVVar6->y;
              VStack_7.z = fVar22 - pVVar6->z;
              value.y = fVar10 - VStack_7.y;
              value.x = fVar4 - VStack_7.x;
              value.z = VStack_7.z;
              pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize((Vector3 *)&stack0xffffffa0,value,(MethodInfo *)0x0);
              pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize((Vector3 *)&stack0xffffffa0,*pVVar6,(MethodInfo *)0x0);
              uVar29 = pVVar6->x;
              uVar30 = pVVar6->y;
              fVar31 = pVVar6->z;
              this_01 = (SceneRaycastFilter *)func_?();
              uVar8 = 0;
              SceneRaycastFilter::SceneRaycastFilter__ctor(this_01,(MethodInfo *)0x0);
              pMVar32 = MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__Add_RTG__GameObjectType_;
              if ((this_01 != (SceneRaycastFilter *)0x0) && (this = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)(this_01->fields)._allowedObjectTypes, this != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) {
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
                    mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::RegexCharClass+SingleRange]::List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize(this,(RegexCharClass_SingleRange)0x1,pMVar32->klass->rgctx_data[0xe].method);
                  }
                  if ((TypeInfo__RTG__MonoSingleton<RTG::RTScene>->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  this_02 = (RTScene *)MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get(MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
                  if ((this_02 != (RTScene *)0x0) && (ray.m_Origin.y = (float)this_01, ray.m_Origin.x = (float)&UNK_?, ray.m_Origin.z = (float)uVar8, ray.m_Direction.x = (float)uVar29, ray.m_Direction.y = (float)uVar30, ray.m_Direction.z = fVar31, this_03 = (UQuery_SingleQueryMatcher *)RTScene::RTScene_Raycast(this_02,ray,SceneRaycastPrecision__Enum_BestFit,this_01,(MethodInfo *)0x0), this_03 != (UQuery_SingleQueryMatcher *)0x0)) {
                    bVar36 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::UQuery+SingleQueryMatcher::UQuery_SingleQueryMatcher_IsInUse(this_03,(MethodInfo *)0x0);
                    if (bVar36 == 0) {
                      return pGVar26;
                    }
                    pLVar37 = (this_03->fields)._.m_Matchers;
                    if (pLVar37 != (List_1_UnityEngine_UIElements_RuleMatcher_ *)0x0) {
                      VStack_7.x = (float)(pLVar37->fields)._size;
                      VStack_7.y = (float)(pLVar37->fields)._version;
                      VStack_7.z = (float)(pLVar37->fields)._syncRoot;
                      fVar4 = VStack_7.x - fVar4;
                      fVar10 = VStack_7.y - fVar10;
                      fVar22 = VStack_7.z - fVar22;
                      obb._size.y = fVar2;
                      obb._size.x = fVar1;
                      obb._size.z = fVar3;
                      obb._center.x = VStack_7.x;
                      obb._center.y = VStack_7.y;
                      obb._center.z = VStack_7.z;
                      obb._rotation.x = fVar21;
                      obb._rotation.y = fVar28;
                      obb._rotation.z = (float)pLVar37[2].monitor;
                      obb._rotation.w = 0.0;
                      obb._40_4_ = &UNK_?;
                      pVVar6 = ObjectSurfaceSnap::ObjectSurfaceSnap_CalculateSitOnSurfaceOffset((Vector3 *)&stack0xffffffa0,obb,*(Plane *)&pLVar37[1].fields._version,0.0,(MethodInfo *)0x0);
                      VStack_7.x = pVVar6->x;
                      VStack_7.y = pVVar6->y;
                      VStack_7.z = pVVar6->z;
                      fVar4 = VStack_7.x + fVar4;
                      fVar10 = VStack_7.y + fVar10;
                      fVar22 = VStack_7.z + fVar22;
                      if ((pGVar26 != (GameObject *)0x0) && (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar26,(MethodInfo *)0x0), pTVar11 != (Transform *)0x0)) {
                        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffa0,pTVar11,(MethodInfo *)0x0);
                        VStack_7.x = pVVar6->x;
                        VStack_7.y = pVVar6->y;
                        VStack_7.z = pVVar6->z + fVar22;
                        value_00.y = VStack_7.y + fVar10;
                        value_00.x = VStack_7.x + fVar4;
                        value_00.z = VStack_7.z;
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar11,value_00,(MethodInfo *)0x0);
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

