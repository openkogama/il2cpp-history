
/* Boolean ContainsRestrictionsForObject(GameObject) */

bool Assembly-CSharp.dll::RTG::ObjectTransformGizmo::
     ObjectTransformGizmo_ContainsRestrictionsForObject
               (ObjectTransformGizmo *this,GameObject *targetObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::ObjectTransformGizmo::ObjectRestrictions>__ContainsKey_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (targetObject != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((targetObject->fields)._.m_CachedPtr != (void *)0x0) {
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)(this->fields)._objectToRestrictions;
      if (this_00 !=
          (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *
          )0x0) {
        iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::StyleComplexSelector+PseudoStateData]::
                Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                          (this_00,(Object *)targetObject,
                           MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::ObjectTransformGizmo::ObjectRestrictions>__ContainsKey_UnityEngine__GameObject_
                           ->klass->rgctx_data[0x21].method);
        return (byte)((uint)iVar1 >> 0x1f) ^ 1;
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
  }
  return 0;
}


/* Int32 GetNumTransformableParentObjects() */

int32_t Assembly-CSharp.dll::RTG::ObjectTransformGizmo::
        ObjectTransformGizmo_GetNumTransformableParentObjects
                  (ObjectTransformGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = ObjectTransformGizmo_GetTransformableParentObjects(this,(MethodInfo *)0x0);
  if (pLVar1 != (List_1_UnityEngine_GameObject_ *)0x0) {
    return (pLVar1->fields)._size;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* ObjectBounds+QueryConfig GetObjectBoundsQConfig() */

ObjectBounds_QueryConfig *
Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_GetObjectBoundsQConfig
          (ObjectBounds_QueryConfig *__return_storage_ptr__,ObjectTransformGizmo *this,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GameObjectTypeHelper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  __return_storage_ptr__->ObjectTypes = 0;
  pGVar1 = TypeInfo__RTG__GameObjectTypeHelper;
  fVar2 = _UNK_?;
  (__return_storage_ptr__->NoVolumeSize).x = _UNK_?;
  (__return_storage_ptr__->NoVolumeSize).y = fVar2;
  (__return_storage_ptr__->NoVolumeSize).z = fVar2;
  if (*(int *)&(pGVar1->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GameObjectTypeHelper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__GameObjectTypeHelper->_1).field_0x1c == 0) {
    FUN_?();
  }
  __return_storage_ptr__->ObjectTypes =
       TypeInfo__RTG__GameObjectTypeHelper->static_fields->_allCombined;
  return __return_storage_ptr__;
}


/* Vector3 GetObjectCustomLocalPivot(GameObject) */

Vector3 * Assembly-CSharp.dll::RTG::ObjectTransformGizmo::
          ObjectTransformGizmo_GetObjectCustomLocalPivot
                    (Vector3 *__return_storage_ptr__,ObjectTransformGizmo *this,GameObject *gameObj,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_UnityEngine::Vector3>__ContainsKey_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_UnityEngine::Vector3>__get_Item_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (gameObj != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((gameObj->fields)._.m_CachedPtr != (void *)0x0) {
      pDVar1 = (this->fields)._objectToCustomLocalPivot;
      if (pDVar1 == (Dictionary_2_UnityEngine_GameObject_UnityEngine_Vector3_ *)0x0) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        pVVar3 = (Vector3 *)(*pcVar2)();
        return pVVar3;
      }
      iVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
              Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial__FindEntry
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                          *)pDVar1,(Object *)gameObj,
                         MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_UnityEngine::Vector3>__ContainsKey_UnityEngine__GameObject_
                         ->klass->rgctx_data[0x21].method);
      if (-1 < iVar4) {
        pDVar1 = (this->fields)._objectToCustomLocalPivot;
        if (pDVar1 != (Dictionary_2_UnityEngine_GameObject_UnityEngine_Vector3_ *)0x0) {
          uVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial__FindEntry
                            ((Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                              *)pDVar1,(Object *)gameObj,
                             MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_UnityEngine::Vector3>__get_Item_UnityEngine__GameObject_
                             ->klass->rgctx_data[0x21].method);
          if ((int)uVar5 < 0) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                      ((Object *)gameObj,(MethodInfo *)0x0);
            pcVar2 = (code *)swi(3);
            pVVar3 = (Vector3 *)(*pcVar2)();
            return pVVar3;
          }
          pDVar6 = (pDVar1->fields)._entries;
          if (pDVar6 != (Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_UnityEngine_Vector3___Array
                         *)0x0) {
            if ((uint)pDVar6->max_length <= uVar5) {
              FUN_?();
              pcVar2 = (code *)swi(3);
              pVVar3 = (Vector3 *)(*pcVar2)();
              return pVVar3;
            }
            pMStack_7 = ((UIRenderDevice_DisableForceGammaMaterial *)
                         &pDVar6->vector[(int)uVar5].value)->material;
            fStack_8 = (float)((UIRenderDevice_DisableForceGammaMaterial *)
                               &pDVar6->vector[(int)uVar5].value)->count;
            goto code_?;
          }
        }
        goto code_?;
      }
      obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (gameObj,(MethodInfo *)0x0);
      if (obj == (Transform *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar9 = (obj->fields)._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        pVVar3 = (Vector3 *)(*pcVar2)();
        return pVVar3;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar2 = (code *)swi(3);
        pVVar3 = (Vector3 *)(*pcVar2)();
        return pVVar3;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(pvVar9);
      uStack_11 = 0;
      uStack_12 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMStack_7 = (Material *)0x0;
      fStack_8 = 0.0;
      pvVar9 = (obj->fields)._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        pVVar3 = (Vector3 *)(*pcVar2)();
        return pVVar3;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar2 = (code *)swi(3);
        pVVar3 = (Vector3 *)(*pcVar2)();
        return pVVar3;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(pvVar9,&uStack_11,&pMStack_7);
      goto code_?;
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMStack_7 = *(Material **)&TypeInfo__UnityEngine__Vector3->static_fields->zeroVector;
  fStack_8 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
code_?:
  *(Material **)__return_storage_ptr__ = pMStack_7;
  __return_storage_ptr__->z = fStack_8;
  return __return_storage_ptr__;
}


/* ObjectTransformGizmo+ObjectRestrictions GetObjectRestrictions(GameObject) */

ObjectTransformGizmo_ObjectRestrictions *
Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_GetObjectRestrictions
          (ObjectTransformGizmo *this,GameObject *targetObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::ObjectTransformGizmo::ObjectRestrictions>__get_Item_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = ObjectTransformGizmo_ContainsRestrictionsForObject(this,targetObject,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return (ObjectTransformGizmo_ObjectRestrictions *)0x0;
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields)._objectToRestrictions;
  if (this_00 ==
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pOVar3 = (ObjectTransformGizmo_ObjectRestrictions *)(*pcVar2)();
    return pOVar3;
  }
  uVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                    (this_00,(Object *)targetObject,
                     MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::ObjectTransformGizmo::ObjectRestrictions>__get_Item_UnityEngine__GameObject_
                     ->klass->rgctx_data[0x21].method);
  if (-1 < (int)uVar4) {
    pDVar5 = (this_00->fields)._entries;
    if (pDVar5 == (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                   *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pOVar3 = (ObjectTransformGizmo_ObjectRestrictions *)(*pcVar2)();
      return pOVar3;
    }
    if (uVar4 < (uint)pDVar5->max_length) {
      return (ObjectTransformGizmo_ObjectRestrictions *)pDVar5->vector[(int)uVar4].value;
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    pOVar3 = (ObjectTransformGizmo_ObjectRestrictions *)(*pcVar2)();
    return pOVar3;
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
            ((Object *)targetObject,(MethodInfo *)0x0);
  pcVar2 = (code *)swi(3);
  pOVar3 = (ObjectTransformGizmo_ObjectRestrictions *)(*pcVar2)();
  return pOVar3;
}


/* AABB GetTargetObjectGroupWorldAABB() */

AABB * Assembly-CSharp.dll::RTG::ObjectTransformGizmo::
       ObjectTransformGizmo_GetTargetObjectGroupWorldAABB
                 (AABB *__return_storage_ptr__,ObjectTransformGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ObjectBounds);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._targetObjects == (IEnumerable_1_UnityEngine_GameObject_ *)0x0) {
    AStack_1._isValid = 0;
    AStack_1._25_3_ = 0;
    (__return_storage_ptr__->_size).x = 0.0;
    (__return_storage_ptr__->_size).y = 0.0;
    *(undefined8 *)&(__return_storage_ptr__->_size).z = 0;
    (__return_storage_ptr__->_center).y = 0.0;
    (__return_storage_ptr__->_center).z = 0.0;
code_?:
    __return_storage_ptr__->_isValid = AStack_1._isValid;
    *(int3 *)&__return_storage_ptr__->field_0x19 = AStack_1._25_3_;
    return __return_storage_ptr__;
  }
  pOVar2 = ObjectTransformGizmo_GetObjectBoundsQConfig
                      ((ObjectBounds_QueryConfig *)&AStack_3,this,(MethodInfo *)0x0);
  uVar4._0_4_ = (float)pOVar2->ObjectTypes;
  uVar4._4_4_ = (pOVar2->NoVolumeSize).x;
  uVar5._0_4_ = (pOVar2->NoVolumeSize).y;
  uVar5._4_4_ = (pOVar2->NoVolumeSize).z;
  AStack_3._center.y = 0.0;
  AStack_3._center.z = 0.0;
  AStack_1._size.x = 0.0;
  AStack_1._size.y = 0.0;
  AStack_1._size.z = 0.0;
  AStack_1._center.x = 0.0;
  AStack_1._center.y = 0.0;
  AStack_1._center.z = 0.0;
  AStack_1._isValid = 0;
  AStack_1._25_3_ = 0;
  if ((this->fields)._targetObjects == (IEnumerable_1_UnityEngine_GameObject_ *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    pAVar7 = (AABB *)(*pcVar6)();
    return pAVar7;
  }
  plVar8 = (longlong *)
            FUN_?(0,
                          TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::GameObject>
                         );
  uVar9 = AStack_1._size._0_8_;
  uVar10 = AStack_1._8_8_;
  uVar11 = AStack_1._center._4_8_;
  uVar12 = AStack_1._24_4_;
  do {
    AStack_1._24_4_ = uVar12;
    AStack_1._center._4_8_ = uVar11;
    AStack_1._8_8_ = uVar10;
    AStack_1._size._0_8_ = uVar9;
    if (plVar8 == (longlong *)0x0) {
code_?:
      FUN_?();
      FUN_?();
      pcVar6 = (code *)swi(3);
      pAVar7 = (AABB *)(*pcVar6)();
      return pAVar7;
    }
    cVar13 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
    if (cVar13 == '\0') {
      if (plVar8 != (longlong *)0x0) {
        FUN_?(0,TypeInfo__System__IDisposable,plVar8);
      }
      (__return_storage_ptr__->_size).x = AStack_1._size.x;
      (__return_storage_ptr__->_size).y = AStack_1._size.y;
      *(undefined8 *)&(__return_storage_ptr__->_size).z = AStack_1._8_8_;
      (__return_storage_ptr__->_center).y = AStack_1._center.y;
      (__return_storage_ptr__->_center).z = AStack_1._center.z;
      goto code_?;
    }
    if (plVar8 == (longlong *)0x0) {
      FUN_?();
      goto code_?;
    }
    lVar14 = *plVar8;
    uVar15 = 0;
    if (*(ushort *)(lVar14 + 0x12e) != 0) {
      do {
        if (*(IEnumerator_1_UnityEngine_GameObject___Class **)
             (*(longlong *)(lVar14 + 0xb0) + (ulonglong)uVar15 * 0x10) ==
            TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>) {
          puVar16 = (undefined8 *)
                    ((longlong)*(int *)(*(longlong *)(lVar14 + 0xb0) + 8 + (ulonglong)uVar15 * 0x10)
                     * 0x10 + 0x138 + lVar14);
          goto code_?;
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < *(ushort *)(lVar14 + 0x12e));
    }
    puVar16 = (undefined8 *)
              FUN_?(plVar8,
                            TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>
                            ,0);
code_?:
    gameObject = (GameObject *)(*(code *)*puVar16)(plVar8,puVar16[1]);
    if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
      FUN_?();
    }
    AStack_3._size._0_8_ = uVar4;
    AStack_3._8_8_ = uVar5;
    pAVar7 = ObjectBounds::ObjectBounds_CalcWorldAABB
                        (&AStack_17,gameObject,(ObjectBounds_QueryConfig *)&AStack_3,
                         (MethodInfo *)0x0);
    uVar9._0_4_ = (pAVar7->_size).x;
    uVar9._4_4_ = (pAVar7->_size).y;
    uVar10 = *(undefined8 *)&(pAVar7->_size).z;
    uVar11._0_4_ = (pAVar7->_center).y;
    uVar11._4_4_ = (pAVar7->_center).z;
    uVar12._0_1_ = pAVar7->_isValid;
    uVar12._1_3_ = *(undefined3 *)&pAVar7->field_0x19;
    if (AStack_1._isValid != 0) {
      AStack_3._size._0_8_ = uVar9;
      AStack_3._8_8_ = uVar10;
      AStack_3._center._4_8_ = uVar11;
      AStack_3._24_4_ = uVar12;
      AABB::AABB_Encapsulate_2(&AStack_1,&AStack_3,(MethodInfo *)0x0);
      uVar9 = AStack_1._size._0_8_;
      uVar10 = AStack_1._8_8_;
      uVar11 = AStack_1._center._4_8_;
      uVar12 = AStack_1._24_4_;
    }
  } while( true );
}


/* List`1[UnityEngine.GameObject] GetTransformableParentObjects() */

List_1_UnityEngine_GameObject_ *
Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_GetTransformableParentObjects
          (ObjectTransformGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GameObjectEx);
    LOCK();
    UNLOCK();
    FUN_?(&
                  RTG__IRTTransformGizmoListener_MethodInfo__UnityEngine__GameObject__GetComponent<RTG::IRTTransformGizmoListener>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IRTTransformGizmoListener);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  gameObjects = (this->fields)._targetObjects;
  if (*(int *)&(TypeInfo__RTG__GameObjectEx->_1).field_0x1c == 0) {
    FUN_?();
  }
  pLVar1 = GameObjectEx::GameObjectEx_FilterParentsOnly_1(gameObjects,(MethodInfo *)0x0);
  this_02 = (List_1_UnityEngine_GameObject_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_02,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
  if (pLVar1 == (List_1_UnityEngine_GameObject_ *)0x0) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    pLStack_7 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar1->fields)._version << 0x20);
    uStack_8 = 0;
    LStack_9._8_8_ = pLStack_7;
    LStack_9._current = (Object *)0x0;
    uStack_3 = 0;
    pLStack_7 = &LStack_9;
    LStack_9._list = (List_1_System_Object_ *)pLVar1;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_9,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                        );
      this_01 = LStack_9._current;
      if (bVar10 == 0) {
        return this_02;
      }
      if ((GameObject *)LStack_9._current == (GameObject *)0x0) break;
      pOVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                         ((GameObject *)LStack_9._current,
                          RTG__IRTTransformGizmoListener_MethodInfo__UnityEngine__GameObject__GetComponent<RTG::IRTTransformGizmoListener>__
                         );
      if ((pOVar11 == (Object *)0x0) || (cVar12 = FUN_?(), cVar12 != '\0')) {
        lVar13 = 0xa0;
        if ((this->fields)._sharedSettings != (ObjectTransformGizmoSettings *)0x0) {
          lVar13 = 0xa8;
        }
        lVar13 = *(longlong *)((longlong)&this->klass + lVar13);
        iVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                          ((GameObject *)this_01,(MethodInfo *)0x0);
        if (lVar13 == 0) goto code_?;
        if ((*(uint *)(lVar13 + 0x28) & 1 << ((byte)iVar14 & 0x1f)) != 0) {
          lVar13 = 0xa0;
          if ((this->fields)._sharedSettings != (ObjectTransformGizmoSettings *)0x0) {
            lVar13 = 0xa8;
          }
          this_00 = *(ObjectTransformGizmoSettings **)((longlong)&this->klass + lVar13);
          if (this_00 == (ObjectTransformGizmoSettings *)0x0) goto code_?;
          bVar10 = ObjectTransformGizmoSettings::ObjectTransformGizmoSettings_IsObjectTransformable
                            (this_00,(GameObject *)this_01,(MethodInfo *)0x0);
          if (bVar10 != 0) {
            if (this_02 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
            FUN_?(this_02,this_01);
          }
        }
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar15 = (code *)swi(3);
  pLVar1 = (List_1_UnityEngine_GameObject_ *)(*pcVar15)();
  return pLVar1;
}


/* Void MakeTransformPivotPermanent() */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::
     ObjectTransformGizmo_MakeTransformPivotPermanent(ObjectTransformGizmo *this,MethodInfo *method)

{
  (this->fields)._isTransformPivotPermanent = 1;
  return;
}


/* Void MakeTransformSpacePermanent() */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::
     ObjectTransformGizmo_MakeTransformSpacePermanent(ObjectTransformGizmo *this,MethodInfo *method)

{
  (this->fields)._isTransformSpacePermanent = 1;
  return;
}


/* Void MoveObject(GameObject, Vector3) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_MoveObject
               (ObjectTransformGizmo *this,GameObject *gameObject,Vector3 *moveVector,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  RTG__IRTTransformGizmoListener_MethodInfo__UnityEngine__GameObject__GetComponent<RTG::IRTTransformGizmoListener>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IRTTransformGizmoListener);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = ObjectTransformGizmo_GetObjectRestrictions(this,gameObject,(MethodInfo *)0x0);
  if (pOVar1 != (ObjectTransformGizmo_ObjectRestrictions *)0x0) {
    pGVar2 = (this->fields)._._gizmo;
    if (pGVar2 == (Gizmo *)0x0) goto code_?;
    item = (pGVar2->fields)._dragInfo._handleId;
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (HashSet_1_System_Int32Enum_ *)(pOVar1->fields)._handleMask;
    if (this_00 == (HashSet_1_System_Int32Enum_ *)0x0) goto code_?;
    bVar3 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
            HashSet_1_System_Int32Enum__Contains
                      (this_00,item,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    if (bVar3 != 0) {
      return;
    }
    uStack_4._0_4_ = moveVector->x;
    uStack_4._4_4_ = moveVector->y;
    pBVar5 = (pOVar1->fields)._moveAxesMask;
    fVar6 = moveVector->z;
    if (pBVar5 == (Boolean__Array *)0x0) goto code_?;
    if ((int)pBVar5->max_length == 0) {
code_?:
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar8 = uStack_4;
    if (pBVar5->vector[0] == 0) {
      uVar8 = 0;
    }
    if (pBVar5 == (Boolean__Array *)0x0) goto code_?;
    if ((uint)pBVar5->max_length < 2) goto code_?;
    uVar9 = uStack_4._4_4_;
    if (pBVar5->vector[1] == 0) {
      uVar9 = 0;
    }
    if (pBVar5 == (Boolean__Array *)0x0) goto code_?;
    if ((uint)pBVar5->max_length < 3) goto code_?;
    if (pBVar5->vector[2] == 0) {
      fVar6 = 0.0;
    }
    moveVector->x = (float)(int)uVar8;
    moveVector->y = (float)uVar9;
    moveVector->z = fVar6;
  }
  if ((gameObject != (GameObject *)0x0) &&
     (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (gameObject,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar10 = (obj->fields)._._.m_CachedPtr;
    if (pvVar10 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(pvVar10);
    uVar11 = moveVector->x;
    uVar12 = moveVector->y;
    fStack_13 = moveVector->z + 0.0;
    uStack_4 = CONCAT44((float)uVar12 + 0.0,(float)uVar11 + 0.0);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar10 = (obj->fields)._._.m_CachedPtr;
    if (pvVar10 != (void *)0x0) {
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcRam_? = pcVar7;
      (*pcRam_?)(pvVar10,&uStack_4);
      pOVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                         (gameObject,
                          RTG__IRTTransformGizmoListener_MethodInfo__UnityEngine__GameObject__GetComponent<RTG::IRTTransformGizmoListener>__
                         );
      if (pOVar14 != (Object *)0x0) {
        FUN_?();
      }
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void MoveObjects(Vector3) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_MoveObjects
               (ObjectTransformGizmo *this,Vector3 *moveVector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields)._transformableParents;
  if ((List_1_UnityEngine_GameObject_ *)LStack_1._list == (List_1_UnityEngine_GameObject_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)
                (uint)(((List_1_UnityEngine_GameObject_ *)LStack_1._list)->fields)._version << 0x20
               );
  uStack_9 = 0;
  LStack_1._8_8_ = pLStack_8;
  LStack_1._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_8 = &LStack_1;
  while (bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                 List_1_T_Enumerator_System_Object__MoveNext
                           (&LStack_1,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                           ), bVar10 != 0) {
    VStack_11.x = moveVector->x;
    VStack_11.y = moveVector->y;
    VStack_11.z = moveVector->z;
    ObjectTransformGizmo_MoveObject
              (this,(GameObject *)LStack_1._current,&VStack_11,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnAttached() */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_OnAttached
               (ObjectTransformGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__ObjectTransformGizmo__OnUndoRedoEnd_RTG__IUndoRedoAction_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__RedoEndHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__UndoEndHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
  pUVar2 = (UnityAction_1_System_Object_ *)FUN_?(TypeInfo__RTG__UndoEndHandler);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (pUVar2,(Object *)this,
             MethodInfo__RTG__ObjectTransformGizmo__OnUndoRedoEnd_RTG__IUndoRedoAction_,
             (MethodInfo *)0x0);
  if (pOVar1 != (Object *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__RTG__UndoEndHandler);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    ppMVar3 = &pOVar1[2].monitor;
    pDVar4 = (Delegate *)pOVar1[2].monitor;
    do {
      pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                         (pDVar4,(Delegate *)pUVar2,(MethodInfo *)0x0);
      pDVar6 = (Delegate *)0x0;
      if (pDVar5 != (Delegate *)0x0) {
        if ((UndoEndHandler__Class *)pDVar5->klass == TypeInfo__RTG__UndoEndHandler) {
          pDVar6 = pDVar5;
        }
        if (pDVar6 == (Delegate *)0x0) {
          FUN_?(pDVar5);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      LOCK();
      pDVar5 = (Delegate *)*ppMVar3;
      bVar8 = pDVar4 == pDVar5;
      if (bVar8) {
        *ppMVar3 = (MonitorData *)pDVar6;
        pDVar5 = pDVar4;
      }
      UNLOCK();
      pDVar6 = pDVar4;
      if (!bVar8) {
        pDVar6 = pDVar5;
      }
      if (iRam_? != 0) {
        uVar9 = (uint)((ulonglong)ppMVar3 >> 0xc);
        lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
        do {
          uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
          puVar12 = (ulonglong *)(lVar10 + 0xADDR);
          LOCK();
          bVar8 = uVar11 == *puVar12;
          if (bVar8) {
            *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      bVar8 = pDVar6 != pDVar4;
      pDVar4 = pDVar6;
    } while (bVar8);
    pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                       (MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
    pUVar2 = (UnityAction_1_System_Object_ *)FUN_?(TypeInfo__RTG__RedoEndHandler);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (pUVar2,(Object *)this,
               MethodInfo__RTG__ObjectTransformGizmo__OnUndoRedoEnd_RTG__IUndoRedoAction_,
               (MethodInfo *)0x0);
    if (pOVar1 != (Object *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__RTG__RedoEndHandler);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      ppMVar3 = &pOVar1[3].monitor;
      pDVar4 = (Delegate *)pOVar1[3].monitor;
      do {
        pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                           (pDVar4,(Delegate *)pUVar2,(MethodInfo *)0x0);
        pDVar6 = (Delegate *)0x0;
        if (pDVar5 != (Delegate *)0x0) {
          if ((RedoEndHandler__Class *)pDVar5->klass == TypeInfo__RTG__RedoEndHandler) {
            pDVar6 = pDVar5;
          }
          if (pDVar6 == (Delegate *)0x0) {
            FUN_?(pDVar5);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        LOCK();
        pDVar5 = (Delegate *)*ppMVar3;
        bVar8 = pDVar4 == pDVar5;
        if (bVar8) {
          *ppMVar3 = (MonitorData *)pDVar6;
          pDVar5 = pDVar4;
        }
        UNLOCK();
        pDVar6 = pDVar4;
        if (!bVar8) {
          pDVar6 = pDVar5;
        }
        if (iRam_? != 0) {
          uVar9 = (uint)((ulonglong)ppMVar3 >> 0xc);
          lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
          do {
            uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
            puVar12 = (ulonglong *)(lVar10 + 0xADDR);
            LOCK();
            bVar8 = uVar11 == *puVar12;
            if (bVar8) {
              *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (!bVar8);
        }
        bVar8 = pDVar6 != pDVar4;
        pDVar4 = pDVar6;
      } while (bVar8);
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnDetached() */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_OnDetached
               (ObjectTransformGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__ObjectTransformGizmo__OnUndoRedoEnd_RTG__IUndoRedoAction_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__RedoEndHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__UndoEndHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
  pUVar2 = (UnityAction_1_System_Object_ *)FUN_?(TypeInfo__RTG__UndoEndHandler);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (pUVar2,(Object *)this,
             MethodInfo__RTG__ObjectTransformGizmo__OnUndoRedoEnd_RTG__IUndoRedoAction_,
             (MethodInfo *)0x0);
  if (pOVar1 != (Object *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__RTG__UndoEndHandler);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    ppMVar3 = &pOVar1[2].monitor;
    pDVar4 = (Delegate *)pOVar1[2].monitor;
    do {
      pDVar5 = mscorlib.dll::System::Delegate::Delegate_Remove
                         (pDVar4,(Delegate *)pUVar2,(MethodInfo *)0x0);
      pDVar6 = (Delegate *)0x0;
      if (pDVar5 != (Delegate *)0x0) {
        if ((UndoEndHandler__Class *)pDVar5->klass == TypeInfo__RTG__UndoEndHandler) {
          pDVar6 = pDVar5;
        }
        if (pDVar6 == (Delegate *)0x0) {
          FUN_?(pDVar5);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      LOCK();
      pDVar5 = (Delegate *)*ppMVar3;
      bVar8 = pDVar4 == pDVar5;
      if (bVar8) {
        *ppMVar3 = (MonitorData *)pDVar6;
        pDVar5 = pDVar4;
      }
      UNLOCK();
      pDVar6 = pDVar4;
      if (!bVar8) {
        pDVar6 = pDVar5;
      }
      if (iRam_? != 0) {
        uVar9 = (uint)((ulonglong)ppMVar3 >> 0xc);
        lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
        do {
          uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
          puVar12 = (ulonglong *)(lVar10 + 0xADDR);
          LOCK();
          bVar8 = uVar11 == *puVar12;
          if (bVar8) {
            *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      bVar8 = pDVar6 != pDVar4;
      pDVar4 = pDVar6;
    } while (bVar8);
    pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                       (MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
    pUVar2 = (UnityAction_1_System_Object_ *)FUN_?(TypeInfo__RTG__RedoEndHandler);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (pUVar2,(Object *)this,
               MethodInfo__RTG__ObjectTransformGizmo__OnUndoRedoEnd_RTG__IUndoRedoAction_,
               (MethodInfo *)0x0);
    if (pOVar1 != (Object *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__RTG__RedoEndHandler);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      ppMVar3 = &pOVar1[3].monitor;
      pDVar4 = (Delegate *)pOVar1[3].monitor;
      do {
        pDVar5 = mscorlib.dll::System::Delegate::Delegate_Remove
                           (pDVar4,(Delegate *)pUVar2,(MethodInfo *)0x0);
        pDVar6 = (Delegate *)0x0;
        if (pDVar5 != (Delegate *)0x0) {
          if ((RedoEndHandler__Class *)pDVar5->klass == TypeInfo__RTG__RedoEndHandler) {
            pDVar6 = pDVar5;
          }
          if (pDVar6 == (Delegate *)0x0) {
            FUN_?(pDVar5);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        LOCK();
        pDVar5 = (Delegate *)*ppMVar3;
        bVar8 = pDVar4 == pDVar5;
        if (bVar8) {
          *ppMVar3 = (MonitorData *)pDVar6;
          pDVar5 = pDVar4;
        }
        UNLOCK();
        pDVar6 = pDVar4;
        if (!bVar8) {
          pDVar6 = pDVar5;
        }
        if (iRam_? != 0) {
          uVar9 = (uint)((ulonglong)ppMVar3 >> 0xc);
          lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
          do {
            uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
            puVar12 = (ulonglong *)(lVar10 + 0xADDR);
            LOCK();
            bVar8 = uVar11 == *puVar12;
            if (bVar8) {
              *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (!bVar8);
        }
        bVar8 = pDVar6 != pDVar4;
        pDVar4 = pDVar6;
      } while (bVar8);
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnGizmoDragBegin(Int32) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_OnGizmoDragBegin
               (ObjectTransformGizmo *this,int32_t handleId,MethodInfo *method)

{
  pLVar1 = LocalTransformSnapshot::LocalTransformSnapshot_GetSnapshotCollection
                      ((this->fields)._targetObjects,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._preTransformSnapshots = pLVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._preTransformSnapshots >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pLVar7 = ObjectTransformGizmo_GetTransformableParentObjects(this,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._transformableParents = pLVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._transformableParents >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pAVar8 = ObjectTransformGizmo_GetTargetObjectGroupWorldAABB(&AStack_9,this,(MethodInfo *)0x0);
  fVar10 = (pAVar8->_size).y;
  uVar11 = *(undefined8 *)&(pAVar8->_size).z;
  bVar12 = pAVar8->_isValid;
  uVar13 = *(undefined3 *)&pAVar8->field_0x19;
  fVar14 = (pAVar8->_center).y;
  fVar15 = (pAVar8->_center).z;
  (this->fields)._targetGroupAABBOnDragBegin._size.x = (pAVar8->_size).x;
  (this->fields)._targetGroupAABBOnDragBegin._size.y = fVar10;
  *(undefined8 *)&(this->fields)._targetGroupAABBOnDragBegin._size.z = uVar11;
  (this->fields)._targetGroupAABBOnDragBegin._center.y = fVar14;
  (this->fields)._targetGroupAABBOnDragBegin._center.z = fVar15;
  (this->fields)._targetGroupAABBOnDragBegin._isValid = bVar12;
  *(undefined3 *)&(this->fields)._targetGroupAABBOnDragBegin.field_0x19 = uVar13;
  return;
}


/* Void OnGizmoDragEnd(Int32) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_OnGizmoDragEnd
               (ObjectTransformGizmo *this,int32_t handleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__PostObjectTransformsChangedAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._transformableParents;
  if (pLVar1 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
  if ((pLVar1->fields)._size != 0) {
    preChangeTransformSnapshots = (this->fields)._preTransformSnapshots;
    postChangeTransformSnapshots =
         LocalTransformSnapshot::LocalTransformSnapshot_GetSnapshotCollection
                   ((this->fields)._targetObjects,(MethodInfo *)0x0);
    this_02 = (PostObjectTransformsChangedAction *)
              FUN_?(TypeInfo__RTG__PostObjectTransformsChangedAction);
    PostObjectTransformsChangedAction::PostObjectTransformsChangedAction__ctor
              (this_02,preChangeTransformSnapshots,postChangeTransformSnapshots,(MethodInfo *)0x0);
    if (this_02 == (PostObjectTransformsChangedAction *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_03 = (RTUndoRedo *)
              MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                        (MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
    if (this_03 == (RTUndoRedo *)0x0) goto code_?;
    RTUndoRedo::RTUndoRedo_RecordAction(this_03,(IUndoRedoAction *)this_02,(MethodInfo *)0x0);
  }
  ObjectTransformGizmo_RefreshPosition(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._targetObjects == (IEnumerable_1_UnityEngine_GameObject_ *)0x0) {
    return;
  }
  pGVar3 = (this->fields)._._gizmo;
  if (pGVar3 != (Gizmo *)0x0) {
    if ((pGVar3->fields)._dragInfo._isDragged != 0) {
      return;
    }
    this_00 = (pGVar3->fields)._transform;
    if ((this->fields)._transformSpace != 0) {
      pGVar4 = (this->fields)._targetPivotObject;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pGVar4 != (GameObject *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pGVar4->fields)._.m_CachedPtr != (void *)0x0) {
          pGVar4 = (this->fields)._targetPivotObject;
          if (((pGVar4 == (GameObject *)0x0) ||
              (this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(pGVar4,(MethodInfo *)0x0),
              this_01 == (Transform *)0x0)) ||
             (pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                 (&QStack_6,this_01,(MethodInfo *)0x0),
             this_00 == (GizmoTransform *)0x0)) goto DAT_?;
          QStack_6.x = pQVar5->x;
          QStack_6.y = pQVar5->y;
          QStack_6.z = pQVar5->z;
          QStack_6.w = pQVar5->w;
          goto code_?;
        }
      }
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Quaternion);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pQVar7 = TypeInfo__UnityEngine__Quaternion->static_fields;
    if (this_00 != (GizmoTransform *)0x0) {
      QStack_6.x = (pQVar7->identityQuaternion).x;
      QStack_6.y = (pQVar7->identityQuaternion).y;
      QStack_6.z = (pQVar7->identityQuaternion).z;
      QStack_6.w = (pQVar7->identityQuaternion).w;
code_?:
      GizmoTransform::GizmoTransform_set_Rotation3D(this_00,&QStack_6,(MethodInfo *)0x0);
      return;
    }
  }
DAT_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnGizmoDragUpdate(Int32) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_OnGizmoDragUpdate
               (ObjectTransformGizmo *this,int32_t handleId,MethodInfo *method)

{
  if (((this->fields)._transformChannelFlags & 1) != 0) {
    pGVar1 = (this->fields)._._gizmo;
    if (pGVar1 == (Gizmo *)0x0) goto code_?;
    if ((pGVar1->fields)._dragInfo._dragChannel == 1) {
      QStack_2.x = (pGVar1->fields)._dragInfo._relativeOffset.x;
      QStack_2.y = (pGVar1->fields)._dragInfo._relativeOffset.y;
      QStack_2.z = (pGVar1->fields)._dragInfo._relativeOffset.z;
      apuStack_3[0] = &UNK_?;
      ObjectTransformGizmo_MoveObjects(this,(Vector3 *)&QStack_2,(MethodInfo *)0x0);
    }
  }
  if (((this->fields)._transformChannelFlags & 2) != 0) {
    pGVar1 = (this->fields)._._gizmo;
    if (pGVar1 == (Gizmo *)0x0) goto code_?;
    if ((pGVar1->fields)._dragInfo._dragChannel == 2) {
      QStack_2.x = (pGVar1->fields)._dragInfo._relativeRotation.x;
      QStack_2.y = (pGVar1->fields)._dragInfo._relativeRotation.y;
      QStack_2.z = (pGVar1->fields)._dragInfo._relativeRotation.z;
      QStack_2.w = (pGVar1->fields)._dragInfo._relativeRotation.w;
      apuStack_3[0] = &UNK_?;
      ObjectTransformGizmo_RotateObjects(this,&QStack_2,(MethodInfo *)0x0);
    }
  }
  if (((this->fields)._transformChannelFlags & 4) != 0) {
    pGVar1 = (this->fields)._._gizmo;
    if (pGVar1 == (Gizmo *)0x0) {
code_?:
      apuStack_3[0] = &UNK_?;
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((pGVar1->fields)._dragInfo._dragChannel == 3) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                      ,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                     );
        LOCK();
        UNLOCK();
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      LStack_5._list = (List_1_System_Object_ *)0x0;
      LStack_5._index = 0;
      LStack_5._version = 0;
      LStack_5._current = (Object *)0x0;
      if ((this->fields)._transformPivot == 0) {
        auStack_6._0_8_ = (this->fields)._transformableParents;
        if ((List_1_UnityEngine_GameObject_ *)auStack_6._0_8_ ==
            (List_1_UnityEngine_GameObject_ *)0x0) {
code_?:
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (iRam_? != 0) {
          uVar7 = (uint)((ulonglong)auStack_6 >> 0xc);
          lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
          do {
            uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
            puVar10 = (ulonglong *)(lVar8 + 0xADDR);
            LOCK();
            bVar11 = uVar9 == *puVar10;
            if (bVar11) {
              *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar11);
        }
        auStack_6._8_8_ =
             (ulonglong)
             (uint)(((List_1_UnityEngine_GameObject_ *)auStack_6._0_8_)->fields)._version << 0x20;
        uStack_12 = 0;
        LStack_5._index = auStack_6._8_4_;
        LStack_5._version = auStack_6._12_4_;
        LStack_5._current = (Object *)0x0;
        auStack_13._0_4_ = 0.0;
        auStack_13._4_4_ = 0.0;
        auStack_13._8_8_ = &LStack_5;
        LStack_5._list = (List_1_System_Object_ *)auStack_6._0_8_;
        while (bVar14 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                        Object]::List_1_T_Enumerator_System_Object__MoveNext
                                  (&LStack_5,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                                  ), bVar14 != 0) {
          VStack_15.x = (this->fields)._targetGroupAABBOnDragBegin._center.x;
          VStack_15.y = (this->fields)._targetGroupAABBOnDragBegin._center.y;
          VStack_15.z = (this->fields)._targetGroupAABBOnDragBegin._center.z;
          ObjectTransformGizmo_ScaleObject
                    (this,(GameObject *)LStack_5._current,&VStack_15,(MethodInfo *)0x0);
        }
      }
      else if ((this->fields)._transformPivot == 1) {
        auStack_6._0_8_ = (this->fields)._transformableParents;
        if ((List_1_UnityEngine_GameObject_ *)auStack_6._0_8_ ==
            (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
        if (iRam_? != 0) {
          uVar7 = (uint)((ulonglong)auStack_6 >> 0xc);
          lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
          do {
            uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
            puVar10 = (ulonglong *)(lVar8 + 0xADDR);
            LOCK();
            bVar11 = uVar9 == *puVar10;
            if (bVar11) {
              *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar11);
        }
        auStack_6._8_8_ =
             (ulonglong)
             (uint)(((List_1_UnityEngine_GameObject_ *)auStack_6._0_8_)->fields)._version << 0x20;
        uStack_12 = 0;
        LStack_5._index = auStack_6._8_4_;
        LStack_5._version = auStack_6._12_4_;
        LStack_5._current = (Object *)0x0;
        auStack_13._0_4_ = 0.0;
        auStack_13._4_4_ = 0.0;
        auStack_13._8_8_ = &LStack_5;
        LStack_5._list = (List_1_System_Object_ *)auStack_6._0_8_;
        while (bVar14 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                        Object]::List_1_T_Enumerator_System_Object__MoveNext
                                  (&LStack_5,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                                  ), pOVar16 = LStack_5._current, bVar14 != 0) {
          if ((GameObject *)LStack_5._current == (GameObject *)0x0) goto code_?;
          pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              ((GameObject *)LStack_5._current,(MethodInfo *)0x0);
          if (pTVar17 == (Transform *)0x0) {
code_?:
            FUN_?();
code_?:
            FUN_?();
            FUN_?();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          VStack_15.x = 0.0;
          VStack_15.y = 0.0;
          VStack_15.z = 0.0;
          pvVar18 = (pTVar17->fields)._._.m_CachedPtr;
          if (pvVar18 == (void *)0x0) {
code_?:
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar17,(MethodInfo *)0x0);
            goto code_?;
          }
          pcVar4 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
            uVar19 = func_?(&UNK_?);
            FUN_?(uVar19);
            goto code_?;
          }
          pcRam_? = pcVar4;
          (*pcRam_?)(pvVar18,&VStack_15);
          VStack_20.x = VStack_15.x;
          VStack_20.y = VStack_15.y;
          VStack_20.z = VStack_15.z;
          ObjectTransformGizmo_ScaleObject(this,(GameObject *)pOVar16,&VStack_20,(MethodInfo *)0x0);
        }
      }
      else if ((this->fields)._transformPivot == 3) {
        auStack_6._0_8_ = (this->fields)._transformableParents;
        if ((List_1_UnityEngine_GameObject_ *)auStack_6._0_8_ ==
            (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
        if (iRam_? != 0) {
          uVar7 = (uint)((ulonglong)auStack_6 >> 0xc);
          lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
          do {
            uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
            puVar10 = (ulonglong *)(lVar8 + 0xADDR);
            LOCK();
            bVar11 = uVar9 == *puVar10;
            if (bVar11) {
              *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar11);
        }
        auStack_6._8_8_ =
             (ulonglong)
             (uint)(((List_1_UnityEngine_GameObject_ *)auStack_6._0_8_)->fields)._version << 0x20;
        uStack_12 = 0;
        LStack_5._index = auStack_6._8_4_;
        LStack_5._version = auStack_6._12_4_;
        LStack_5._current = (Object *)0x0;
        auStack_13._0_4_ = 0.0;
        auStack_13._4_4_ = 0.0;
        auStack_13._8_8_ = &LStack_5;
        LStack_5._list = (List_1_System_Object_ *)auStack_6._0_8_;
        while (bVar14 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                        Object]::List_1_T_Enumerator_System_Object__MoveNext
                                  (&LStack_5,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                                  ), bVar14 != 0) {
          VStack_20.x = (this->fields)._customWorldPivot.x;
          VStack_20.y = (this->fields)._customWorldPivot.y;
          VStack_20.z = (this->fields)._customWorldPivot.z;
          ObjectTransformGizmo_ScaleObject
                    (this,(GameObject *)LStack_5._current,&VStack_20,(MethodInfo *)0x0);
        }
      }
      else if ((this->fields)._transformPivot == 2) {
        pOVar21 = ObjectTransformGizmo_GetObjectBoundsQConfig
                            ((ObjectBounds_QueryConfig *)auStack_6,this,(MethodInfo *)0x0);
        pLVar22 = *(List_1_UnityEngine_GameObject_ **)pOVar21;
        lVar8._0_4_ = (pOVar21->NoVolumeSize).y;
        lVar8._4_4_ = (pOVar21->NoVolumeSize).z;
        auStack_6._0_8_ = (this->fields)._transformableParents;
        if ((List_1_UnityEngine_GameObject_ *)auStack_6._0_8_ ==
            (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
        if (iRam_? != 0) {
          uVar7 = (uint)((ulonglong)auStack_6 >> 0xc);
          lVar23 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
          do {
            uVar9 = *(ulonglong *)(lVar23 + 0xADDR);
            puVar10 = (ulonglong *)(lVar23 + 0xADDR);
            LOCK();
            bVar11 = uVar9 == *puVar10;
            if (bVar11) {
              *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar11);
        }
        auStack_6._8_8_ =
             (ulonglong)
             (uint)(((List_1_UnityEngine_GameObject_ *)auStack_6._0_8_)->fields)._version << 0x20;
        uStack_12 = 0;
        LStack_5._index = auStack_6._8_4_;
        LStack_5._version = auStack_6._12_4_;
        LStack_5._current = (Object *)0x0;
        auStack_13._0_4_ = 0.0;
        auStack_13._4_4_ = 0.0;
        auStack_13._8_8_ = &LStack_5;
        LStack_5._list = (List_1_System_Object_ *)auStack_6._0_8_;
        while (bVar14 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                        Object]::List_1_T_Enumerator_System_Object__MoveNext
                                  (&LStack_5,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                                  ), pOVar16 = LStack_5._current, bVar14 != 0) {
          if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
            FUN_?();
          }
          auStack_6._0_8_ = pLVar22;
          auStack_6._8_8_ = lVar8;
          pAVar24 = ObjectBounds::ObjectBounds_CalcWorldAABB
                              ((AABB *)apuStack_3,(GameObject *)pOVar16,
                               (ObjectBounds_QueryConfig *)auStack_6,(MethodInfo *)0x0);
          uStack_25._0_4_ = (pAVar24->_size).x;
          uStack_25._4_4_ = (pAVar24->_size).y;
          uVar19 = *(undefined8 *)&(pAVar24->_size).z;
          uStack_26 = (undefined4)uVar19;
          fStack_27 = (float)((ulonglong)uVar19 >> 0x20);
          uVar28 = (pAVar24->_center).y;
          uVar29 = (pAVar24->_center).z;
          fStack_30 = (float)uVar28;
          fStack_31 = (float)uVar29;
          if (pAVar24->_isValid != 0) {
            VStack_20.y = (float)uVar28;
            VStack_20.x = fStack_27;
            VStack_20.z = (float)uVar29;
            ObjectTransformGizmo_ScaleObject
                      (this,(GameObject *)pOVar16,&VStack_20,(MethodInfo *)0x0);
          }
        }
      }
      else if ((this->fields)._transformPivot == 4) {
        pLVar22 = (this->fields)._transformableParents;
        if (pLVar22 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
        if (iRam_? != 0) {
          uVar7 = (uint)((ulonglong)auStack_6 >> 0xc);
          lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
          do {
            uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
            puVar10 = (ulonglong *)(lVar8 + 0xADDR);
            LOCK();
            bVar11 = uVar9 == *puVar10;
            if (bVar11) {
              *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar11);
        }
        auStack_6._8_8_ = (ulonglong)(uint)(pLVar22->fields)._version << 0x20;
        uStack_12 = 0;
        LStack_5._index = auStack_6._8_4_;
        LStack_5._version = auStack_6._12_4_;
        LStack_5._current = (Object *)0x0;
        auStack_6._0_4_ = 0;
        auStack_6._4_4_ = 0.0;
        auStack_6._8_8_ = &LStack_5;
        LStack_5._list = (List_1_System_Object_ *)pLVar22;
        while (bVar14 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                        Object]::List_1_T_Enumerator_System_Object__MoveNext
                                  (&LStack_5,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                                  ), pOVar16 = LStack_5._current, bVar14 != 0) {
          if ((GameObject *)LStack_5._current == (GameObject *)0x0) goto code_?;
          pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              ((GameObject *)LStack_5._current,(MethodInfo *)0x0);
          pVVar32 = ObjectTransformGizmo_GetObjectCustomLocalPivot
                              ((Vector3 *)auStack_13,this,(GameObject *)pOVar16,(MethodInfo *)0x0);
          if (pTVar17 == (Transform *)0x0) {
code_?:
            FUN_?();
code_?:
            FUN_?();
            FUN_?();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          VStack_20.x = pVVar32->x;
          VStack_20.y = pVVar32->y;
          VStack_20.z = pVVar32->z;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          VStack_15.x = 0.0;
          VStack_15.y = 0.0;
          VStack_15.z = 0.0;
          pvVar18 = (pTVar17->fields)._._.m_CachedPtr;
          if (pvVar18 == (void *)0x0) {
code_?:
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar17,(MethodInfo *)0x0);
            goto code_?;
          }
          pcVar4 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
            uVar19 = func_?(&UNK_?);
            FUN_?(uVar19);
            goto code_?;
          }
          pcRam_? = pcVar4;
          (*pcRam_?)(pvVar18,&VStack_20,&VStack_15);
          VStack_33.x = VStack_15.x;
          VStack_33.y = VStack_15.y;
          VStack_33.z = VStack_15.z;
          ObjectTransformGizmo_ScaleObject(this,(GameObject *)pOVar16,&VStack_33,(MethodInfo *)0x0);
        }
      }
      return;
    }
  }
  return;
}


/* Void OnUndoRedoEnd(IUndoRedoAction) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_OnUndoRedoEnd
               (ObjectTransformGizmo *this,IUndoRedoAction *action,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__PostObjectTransformsChangedAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (action != (IUndoRedoAction *)0x0) {
    bVar1 = (TypeInfo__RTG__PostObjectTransformsChangedAction->_1).naturalAligment;
    if ((bVar1 <= (action->klass->_1).naturalAligment) &&
       ((action->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo__RTG__PostObjectTransformsChangedAction)) {
      ObjectTransformGizmo_RefreshPosition(this,(MethodInfo *)0x0);
      ObjectTransformGizmo_RefreshRotation(this,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void RefreshPosition() */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_RefreshPosition
               (ObjectTransformGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__ObjectBounds);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  if ((this->fields)._targetObjects == (IEnumerable_1_UnityEngine_GameObject_ *)0x0) {
    return;
  }
  pGVar2 = (this->fields)._._gizmo;
  if (pGVar2 == (Gizmo *)0x0) goto code_?;
  if ((pGVar2->fields)._dragInfo._isDragged != 0) {
    return;
  }
  this_00 = (pGVar2->fields)._transform;
  if ((this->fields)._transformPivot == 0) {
code_?:
    pAVar3 = ObjectTransformGizmo_GetTargetObjectGroupWorldAABB(aAStack_4,this,(MethodInfo *)0x0);
    uVar5 = (pAVar3->_center).y;
    uVar6 = (pAVar3->_center).z;
    pVVar7 = &pAVar3->_center;
    uVar8 = pVVar7->x;
    uVar9 = pVVar7->y;
    fVar10 = pVVar7->y;
    uStack_11 = *(undefined4 *)&pAVar3->_isValid;
    fStack_12 = (float)uVar5;
    fStack_13 = (float)uVar6;
    if (this_00 == (GizmoTransform *)0x0) goto code_?;
    if (((this_00->fields)._firingChanged3DEvent == 0) &&
       (VStack_14.x = (this_00->fields)._position3D.x, VStack_14.y = (this_00->fields)._position3D.y
       , fVar15 = (this_00->fields)._position3D.z - (float)uVar6, fVar16 = VStack_14.x - pVVar7->x,
       fVar1 <= (VStack_14.y - (float)uVar5) * (VStack_14.y - (float)uVar5) + fVar16 * fVar16 +
                fVar15 * fVar15)) {
      (this_00->fields)._position3D.x = pVVar7->x;
      (this_00->fields)._position3D.y = fVar10;
      (this_00->fields)._position3D.z = (float)uVar6;
      OStack_17.NoVolumeSize.z = (float)uVar8;
      fStack_12 = (float)uVar9;
      GizmoTransform::GizmoTransform_OnPosition3DChanged(this_00,(MethodInfo *)0x0);
    }
  }
  else {
    pGVar18 = (this->fields)._targetPivotObject;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pGVar18 == (GameObject *)0x0) goto code_?;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar18->fields)._.m_CachedPtr == (void *)0x0) goto code_?;
    if ((this->fields)._transformPivot == 1) {
      pGVar18 = (this->fields)._targetPivotObject;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pGVar18 == (GameObject *)0x0) {
code_?:
        pAVar3 = ObjectTransformGizmo_GetTargetObjectGroupWorldAABB
                            (aAStack_4,this,(MethodInfo *)0x0);
        OStack_17.ObjectTypes = (int32_t)(pAVar3->_size).x;
        OStack_17.NoVolumeSize.x = (pAVar3->_size).y;
        uVar19 = *(undefined8 *)&(pAVar3->_size).z;
        uVar20 = (pAVar3->_center).y;
        uVar21 = (pAVar3->_center).z;
        uStack_11 = *(undefined4 *)&pAVar3->_isValid;
        OStack_17.NoVolumeSize.y = (float)uVar19;
        OStack_17.NoVolumeSize.z = (float)((ulonglong)uVar19 >> 0x20);
        fStack_12 = (float)uVar20;
        fStack_13 = (float)uVar21;
        goto DAT_?;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pGVar18->fields)._.m_CachedPtr == (void *)0x0) goto code_?;
      pGVar18 = (this->fields)._targetPivotObject;
      if (((pGVar18 == (GameObject *)0x0) ||
          (pTVar22 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar18,(MethodInfo *)0x0), pTVar22 == (Transform *)0x0)) ||
         (pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              (&VStack_14,pTVar22,(MethodInfo *)0x0),
         this_00 == (GizmoTransform *)0x0)) goto code_?;
      fVar10 = pVVar7->x;
      fVar15 = pVVar7->y;
      fVar16 = pVVar7->z;
code_?:
      VStack_23.y = fVar15;
      VStack_23.x = fVar10;
      VStack_23.z = fVar16;
      GizmoTransform::GizmoTransform_set_Position3D(this_00,&VStack_23,(MethodInfo *)0x0);
    }
    else if ((this->fields)._transformPivot == 2) {
      pGVar18 = (this->fields)._targetPivotObject;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pGVar18 == (GameObject *)0x0) goto code_?;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pGVar18->fields)._.m_CachedPtr == (void *)0x0) goto code_?;
      pOVar24 = ObjectTransformGizmo_GetObjectBoundsQConfig(&OStack_17,this,(MethodInfo *)0x0);
      pGVar18 = (this->fields)._targetPivotObject;
      OStack_17.ObjectTypes = pOVar24->ObjectTypes;
      OStack_17.NoVolumeSize.x = (pOVar24->NoVolumeSize).x;
      uVar25 = (pOVar24->NoVolumeSize).y;
      uVar26 = (pOVar24->NoVolumeSize).z;
      if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
        FUN_?();
      }
      OStack_17.NoVolumeSize.y = (float)uVar25;
      OStack_17.NoVolumeSize.z = (float)uVar26;
      pAVar3 = ObjectBounds::ObjectBounds_CalcWorldAABB
                          (aAStack_4,pGVar18,&OStack_17,(MethodInfo *)0x0);
      OStack_17.ObjectTypes = (int32_t)(pAVar3->_size).x;
      OStack_17.NoVolumeSize.x = (pAVar3->_size).y;
      uVar19 = *(undefined8 *)&(pAVar3->_size).z;
      uVar27 = (pAVar3->_center).y;
      uVar28 = (pAVar3->_center).z;
      OStack_17.NoVolumeSize.y = (float)uVar19;
      OStack_17.NoVolumeSize.z = (float)((ulonglong)uVar19 >> 0x20);
      fStack_12 = (float)uVar27;
      fStack_13 = (float)uVar28;
      if (pAVar3->_isValid == 0) goto code_?;
DAT_?:
      fVar10 = OStack_17.NoVolumeSize.z;
      fVar15 = fStack_12;
      fVar16 = fStack_13;
      if (this_00 == (GizmoTransform *)0x0) goto code_?;
      goto code_?;
    }
  }
code_?:
  if ((this->fields)._transformPivot == 3) {
    if (this_00 != (GizmoTransform *)0x0) {
      if ((this_00->fields)._firingChanged3DEvent != 0) {
        return;
      }
      uVar29 = (this->fields)._customWorldPivot.x;
      uVar30 = (this->fields)._customWorldPivot.y;
      uVar31 = (this_00->fields)._position3D.x;
      fVar10 = (this_00->fields)._position3D.z - (this->fields)._customWorldPivot.z;
      fVar15 = (this_00->fields)._position3D.y - (float)uVar30;
      if (fVar15 * fVar15 + ((float)uVar31 - (float)uVar29) * ((float)uVar31 - (float)uVar29) +
          fVar10 * fVar10 < fVar1) {
        return;
      }
      fVar10 = (this->fields)._customWorldPivot.y;
      fVar1 = (this->fields)._customWorldPivot.z;
      (this_00->fields)._position3D.x = (this->fields)._customWorldPivot.x;
      (this_00->fields)._position3D.y = fVar10;
      (this_00->fields)._position3D.z = fVar1;
      GizmoTransform::GizmoTransform_OnPosition3DChanged(this_00,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  }
  if ((this->fields)._transformPivot != 4) {
    return;
  }
  pGVar18 = (this->fields)._targetPivotObject;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pGVar18 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar18->fields)._.m_CachedPtr != (void *)0x0) {
      pGVar18 = (this->fields)._targetPivotObject;
      if (pGVar18 == (GameObject *)0x0) goto code_?;
      pTVar22 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar18,(MethodInfo *)0x0);
      pVVar7 = ObjectTransformGizmo_GetObjectCustomLocalPivot
                          ((Vector3 *)&OStack_17,this,(this->fields)._targetPivotObject,
                           (MethodInfo *)0x0);
      if (pTVar22 == (Transform *)0x0) goto code_?;
      VStack_14.x = pVVar7->x;
      VStack_14.y = pVVar7->y;
      VStack_14.z = pVVar7->z;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_23.x = 0.0;
      VStack_23.y = 0.0;
      VStack_23.z = 0.0;
      pvVar32 = (pTVar22->fields)._._.m_CachedPtr;
      if (pvVar32 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar22,(MethodInfo *)0x0);
        pcVar33 = (code *)swi(3);
        (*pcVar33)();
        return;
      }
      pcVar33 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar33 = (code *)FUN_?(&UNK_?), pcVar33 == (code *)0x0)) {
        uVar19 = func_?(&UNK_?);
        FUN_?(uVar19,0);
        pcVar33 = (code *)swi(3);
        (*pcVar33)();
        return;
      }
      pcRam_? = pcVar33;
      (*pcRam_?)(pvVar32,&VStack_14);
      if (this_00 == (GizmoTransform *)0x0) goto code_?;
      fVar1 = VStack_23.y;
      fVar10 = VStack_23.x;
      fVar15 = VStack_23.z;
      goto code_?;
    }
  }
  pAVar3 = ObjectTransformGizmo_GetTargetObjectGroupWorldAABB(aAStack_4,this,(MethodInfo *)0x0);
  fVar1 = (pAVar3->_center).y;
  uVar34 = (pAVar3->_center).z;
  OStack_17.ObjectTypes = (int32_t)(pAVar3->_size).x;
  OStack_17.NoVolumeSize.x = (pAVar3->_size).y;
  uVar19 = *(undefined8 *)&(pAVar3->_size).z;
  OStack_17.NoVolumeSize.y = (float)uVar19;
  OStack_17.NoVolumeSize.z = (float)((ulonglong)uVar19 >> 0x20);
  fVar10 = OStack_17.NoVolumeSize.z;
  fVar15 = (float)uVar34;
  fStack_12 = fVar1;
  fStack_13 = (float)uVar34;
  if (this_00 == (GizmoTransform *)0x0) {
code_?:
    FUN_?();
    pcVar33 = (code *)swi(3);
    (*pcVar33)();
    return;
  }
code_?:
  VStack_14.y = fVar1;
  VStack_14.x = fVar10;
  VStack_14.z = fVar15;
  GizmoTransform::GizmoTransform_set_Position3D(this_00,&VStack_14,(MethodInfo *)0x0);
  return;
}


/* Void RefreshPositionAndRotation() */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_RefreshPositionAndRotation
               (ObjectTransformGizmo *this,MethodInfo *method)

{
  ObjectTransformGizmo_RefreshPosition(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._targetObjects == (IEnumerable_1_UnityEngine_GameObject_ *)0x0) {
    return;
  }
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 != (Gizmo *)0x0) {
    if ((pGVar1->fields)._dragInfo._isDragged != 0) {
      return;
    }
    this_00 = (pGVar1->fields)._transform;
    if ((this->fields)._transformSpace != 0) {
      pGVar2 = (this->fields)._targetPivotObject;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pGVar2 != (GameObject *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pGVar2->fields)._.m_CachedPtr != (void *)0x0) {
          pGVar2 = (this->fields)._targetPivotObject;
          if (((pGVar2 == (GameObject *)0x0) ||
              (this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(pGVar2,(MethodInfo *)0x0),
              this_01 == (Transform *)0x0)) ||
             (pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                 (&QStack_4,this_01,(MethodInfo *)0x0),
             this_00 == (GizmoTransform *)0x0)) goto DAT_?;
          QStack_4.x = pQVar3->x;
          QStack_4.y = pQVar3->y;
          QStack_4.z = pQVar3->z;
          QStack_4.w = pQVar3->w;
          goto code_?;
        }
      }
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Quaternion);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pQVar5 = TypeInfo__UnityEngine__Quaternion->static_fields;
    if (this_00 != (GizmoTransform *)0x0) {
      QStack_4.x = (pQVar5->identityQuaternion).x;
      QStack_4.y = (pQVar5->identityQuaternion).y;
      QStack_4.z = (pQVar5->identityQuaternion).z;
      QStack_4.w = (pQVar5->identityQuaternion).w;
code_?:
      GizmoTransform::GizmoTransform_set_Rotation3D(this_00,&QStack_4,(MethodInfo *)0x0);
      return;
    }
  }
DAT_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void RefreshRotation() */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_RefreshRotation
               (ObjectTransformGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._targetObjects == (IEnumerable_1_UnityEngine_GameObject_ *)0x0) {
    return;
  }
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 != (Gizmo *)0x0) {
    if ((pGVar1->fields)._dragInfo._isDragged != 0) {
      return;
    }
    this_00 = (pGVar1->fields)._transform;
    if ((this->fields)._transformSpace != 0) {
      pGVar2 = (this->fields)._targetPivotObject;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pGVar2 != (GameObject *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pGVar2->fields)._.m_CachedPtr != (void *)0x0) {
          pGVar2 = (this->fields)._targetPivotObject;
          if (((pGVar2 == (GameObject *)0x0) ||
              (this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(pGVar2,(MethodInfo *)0x0),
              this_01 == (Transform *)0x0)) ||
             (pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                 (&QStack_4,this_01,(MethodInfo *)0x0),
             this_00 == (GizmoTransform *)0x0)) goto DAT_?;
          QStack_4.x = pQVar3->x;
          QStack_4.y = pQVar3->y;
          QStack_4.z = pQVar3->z;
          QStack_4.w = pQVar3->w;
          goto code_?;
        }
      }
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Quaternion);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pQVar5 = TypeInfo__UnityEngine__Quaternion->static_fields;
    if (this_00 != (GizmoTransform *)0x0) {
      QStack_4.x = (pQVar5->identityQuaternion).x;
      QStack_4.y = (pQVar5->identityQuaternion).y;
      QStack_4.z = (pQVar5->identityQuaternion).z;
      QStack_4.w = (pQVar5->identityQuaternion).w;
code_?:
      GizmoTransform::GizmoTransform_set_Rotation3D(this_00,&QStack_4,(MethodInfo *)0x0);
      return;
    }
  }
DAT_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void RegisterObjectRestrictions(GameObject, ObjectTransformGizmo+ObjectRestrictions) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_RegisterObjectRestrictions
               (ObjectTransformGizmo *this,GameObject *targetObject,
               ObjectTransformGizmo_ObjectRestrictions *restrictions,MethodInfo *method)

{
  uVar1 = SUB84(method,0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::ObjectTransformGizmo::ObjectRestrictions>__Add_UnityEngine__GameObject__RTG__ObjectTransformGizmo__ObjectRestrictions_
                  ,targetObject,restrictions,uVar1);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar2 = ObjectTransformGizmo_ContainsRestrictionsForObject(this,targetObject,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    this_00 = (this->fields)._objectToRestrictions;
    if (this_00 ==
        (Dictionary_2_UnityEngine_GameObject_RTG_ObjectTransformGizmo_ObjectRestrictions_ *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)targetObject,
               (Object *)restrictions,CONCAT31((int3)((uint)uVar1 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::ObjectTransformGizmo::ObjectRestrictions>__Add_UnityEngine__GameObject__RTG__ObjectTransformGizmo__ObjectRestrictions_
               ->klass->rgctx_data[0x22].method);
  }
  return;
}


/* Void RegisterObjectRestrictions(List`1[UnityEngine.GameObject],
   ObjectTransformGizmo+ObjectRestrictions) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::
     ObjectTransformGizmo_RegisterObjectRestrictions_1
               (ObjectTransformGizmo *this,List_1_UnityEngine_GameObject_ *targetObjects,
               ObjectTransformGizmo_ObjectRestrictions *restrictions,MethodInfo *method)

{
  behavior = (InsertionBehavior__Enum)method;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                  ,targetObjects,restrictions,behavior);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (targetObjects == (List_1_UnityEngine_GameObject_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  pLStack_7 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)(uint)(targetObjects->fields)._version << 0x20);
  uStack_8 = 0;
  LStack_9._8_8_ = pLStack_7;
  LStack_9._current = (Object *)0x0;
  uStack_3 = 0;
  pLStack_7 = &LStack_9;
  LStack_9._list = (List_1_System_Object_ *)targetObjects;
  while( true ) {
    do {
      bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_9,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                        );
      targetObject = LStack_9._current;
      if (bVar10 == 0) {
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::ObjectTransformGizmo::ObjectRestrictions>__Add_UnityEngine__GameObject__RTG__ObjectTransformGizmo__ObjectRestrictions_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      bVar10 = ObjectTransformGizmo_ContainsRestrictionsForObject
                        (this,(GameObject *)targetObject,(MethodInfo *)0x0);
    } while (bVar10 != 0);
    this_00 = (this->fields)._objectToRestrictions;
    if (this_00 ==
        (Dictionary_2_UnityEngine_GameObject_RTG_ObjectTransformGizmo_ObjectRestrictions_ *)0x0)
    break;
    behavior = CONCAT31((int3)(behavior >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,targetObject,
               (Object *)restrictions,behavior,
               MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::ObjectTransformGizmo::ObjectRestrictions>__Add_UnityEngine__GameObject__RTG__ObjectTransformGizmo__ObjectRestrictions_
               ->klass->rgctx_data[0x22].method);
  }
  FUN_?();
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void RotateObject(GameObject, Quaternion, Vector3) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_RotateObject
               (ObjectTransformGizmo *this,GameObject *gameObject,Quaternion *rotation,
               Vector3 *rotationPivot,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  RTG__IRTTransformGizmoListener_MethodInfo__UnityEngine__GameObject__GetComponent<RTG::IRTTransformGizmoListener>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IRTTransformGizmoListener);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = ObjectTransformGizmo_GetObjectRestrictions(this,gameObject,(MethodInfo *)0x0);
  if (pOVar1 != (ObjectTransformGizmo_ObjectRestrictions *)0x0) {
    pGVar2 = (this->fields)._._gizmo;
    if (pGVar2 == (Gizmo *)0x0) goto code_?;
    item = (pGVar2->fields)._dragInfo._handleId;
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (HashSet_1_System_Int32Enum_ *)(pOVar1->fields)._handleMask;
    if (this_00 == (HashSet_1_System_Int32Enum_ *)0x0) goto code_?;
    bVar3 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
            HashSet_1_System_Int32Enum__Contains
                      (this_00,item,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    if (bVar3 != 0) {
      return;
    }
  }
  if (gameObject != (GameObject *)0x0) {
    transform = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (gameObject,(MethodInfo *)0x0);
    VStack_4.x = rotationPivot->x;
    VStack_4.y = rotationPivot->y;
    VStack_4.z = rotationPivot->z;
    QStack_5.x = rotation->x;
    QStack_5.y = rotation->y;
    QStack_5.z = rotation->z;
    QStack_5.w = rotation->w;
    TransformEx::TransformEx_RotateAroundPivot(transform,&QStack_5,&VStack_4,(MethodInfo *)0x0);
    pOVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                       (gameObject,
                        RTG__IRTTransformGizmoListener_MethodInfo__UnityEngine__GameObject__GetComponent<RTG::IRTTransformGizmoListener>__
                       );
    if (pOVar6 != (Object *)0x0) {
      FUN_?();
    }
    return;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void RotateObjects(Quaternion) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_RotateObjects
               (ObjectTransformGizmo *this,Quaternion *rotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ObjectBounds);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)0x0;
  LStack_1._index = 0;
  LStack_1._version = 0;
  LStack_1._current = (Object *)0x0;
  if ((this->fields)._transformPivot == 0) {
    QStack_2._0_8_ = (this->fields)._transformableParents;
    if ((List_1_UnityEngine_GameObject_ *)QStack_2._0_8_ == (List_1_UnityEngine_GameObject_ *)0x0)
    {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&QStack_2 >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    QStack_2.z = 0.0;
    QStack_2.w = (float)(((List_1_UnityEngine_GameObject_ *)QStack_2._0_8_)->fields)._version;
    fStack_9 = 0.0;
    fStack_10 = 0.0;
    LStack_1._8_8_ = (ulonglong)(uint)QStack_2.w << 0x20;
    LStack_1._current = (Object *)0x0;
    auStack_11._0_4_ = 0.0;
    auStack_11._4_4_ = 0.0;
    auStack_11._8_8_ = &LStack_1;
    LStack_1._list = (List_1_System_Object_ *)QStack_2._0_8_;
    while (bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              (&LStack_1,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                              ), bVar12 != 0) {
      VStack_13.x = (this->fields)._targetGroupAABBOnDragBegin._center.x;
      VStack_13.y = (this->fields)._targetGroupAABBOnDragBegin._center.y;
      VStack_13.z = (this->fields)._targetGroupAABBOnDragBegin._center.z;
      auStack_14._0_4_ = rotation->x;
      auStack_14._4_4_ = rotation->y;
      auStack_14._8_4_ = rotation->z;
      auStack_14._12_4_ = rotation->w;
      ObjectTransformGizmo_RotateObject
                (this,(GameObject *)LStack_1._current,(Quaternion *)auStack_14,&VStack_13,
                 (MethodInfo *)0x0);
    }
  }
  else if ((this->fields)._transformPivot == 1) {
    QStack_2._0_8_ = (this->fields)._transformableParents;
    if ((List_1_UnityEngine_GameObject_ *)QStack_2._0_8_ == (List_1_UnityEngine_GameObject_ *)0x0)
    goto code_?;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&QStack_2 >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    QStack_2.z = 0.0;
    QStack_2.w = (float)(((List_1_UnityEngine_GameObject_ *)QStack_2._0_8_)->fields)._version;
    fStack_9 = 0.0;
    fStack_10 = 0.0;
    LStack_1._8_8_ = (ulonglong)(uint)QStack_2.w << 0x20;
    LStack_1._current = (Object *)0x0;
    auStack_11._0_4_ = 0.0;
    auStack_11._4_4_ = 0.0;
    auStack_11._8_8_ = &LStack_1;
    LStack_1._list = (List_1_System_Object_ *)QStack_2._0_8_;
    while (bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              (&LStack_1,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                              ), pOVar15 = LStack_1._current, bVar12 != 0) {
      if ((GameObject *)LStack_1._current == (GameObject *)0x0) goto code_?;
      pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          ((GameObject *)LStack_1._current,(MethodInfo *)0x0);
      if (pTVar16 == (Transform *)0x0) {
code_?:
        FUN_?();
code_?:
        FUN_?();
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_13.x = 0.0;
      VStack_13.y = 0.0;
      VStack_13.z = 0.0;
      pvVar17 = (pTVar16->fields)._._.m_CachedPtr;
      if (pvVar17 == (void *)0x0) {
code_?:
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar16,(MethodInfo *)0x0);
        goto code_?;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar18 = func_?(&UNK_?);
        FUN_?(uVar18);
        goto code_?;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)(pvVar17,&VStack_13);
      VStack_19.x = VStack_13.x;
      VStack_19.y = VStack_13.y;
      VStack_19.z = VStack_13.z;
      auStack_14._0_4_ = rotation->x;
      auStack_14._4_4_ = rotation->y;
      auStack_14._8_4_ = rotation->z;
      auStack_14._12_4_ = rotation->w;
      ObjectTransformGizmo_RotateObject
                (this,(GameObject *)pOVar15,(Quaternion *)auStack_14,&VStack_19,(MethodInfo *)0x0);
    }
  }
  else if ((this->fields)._transformPivot == 3) {
    QStack_2._0_8_ = (this->fields)._transformableParents;
    if ((List_1_UnityEngine_GameObject_ *)QStack_2._0_8_ == (List_1_UnityEngine_GameObject_ *)0x0)
    goto code_?;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&QStack_2 >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    QStack_2.z = 0.0;
    QStack_2.w = (float)(((List_1_UnityEngine_GameObject_ *)QStack_2._0_8_)->fields)._version;
    fStack_9 = 0.0;
    fStack_10 = 0.0;
    LStack_1._8_8_ = (ulonglong)(uint)QStack_2.w << 0x20;
    LStack_1._current = (Object *)0x0;
    auStack_11._0_4_ = 0.0;
    auStack_11._4_4_ = 0.0;
    auStack_11._8_8_ = &LStack_1;
    LStack_1._list = (List_1_System_Object_ *)QStack_2._0_8_;
    while (bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              (&LStack_1,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                              ), bVar12 != 0) {
      VStack_19.x = (this->fields)._customWorldPivot.x;
      VStack_19.y = (this->fields)._customWorldPivot.y;
      VStack_19.z = (this->fields)._customWorldPivot.z;
      auStack_14._0_4_ = rotation->x;
      auStack_14._4_4_ = rotation->y;
      auStack_14._8_4_ = rotation->z;
      auStack_14._12_4_ = rotation->w;
      ObjectTransformGizmo_RotateObject
                (this,(GameObject *)LStack_1._current,(Quaternion *)auStack_14,&VStack_19,
                 (MethodInfo *)0x0);
    }
  }
  else if ((this->fields)._transformPivot == 2) {
    pOVar20 = ObjectTransformGizmo_GetObjectBoundsQConfig
                        ((ObjectBounds_QueryConfig *)&QStack_2,this,(MethodInfo *)0x0);
    uVar18._0_4_ = (float)pOVar20->ObjectTypes;
    uVar18._4_4_ = (pOVar20->NoVolumeSize).x;
    uVar21._0_4_ = (pOVar20->NoVolumeSize).y;
    uVar21._4_4_ = (pOVar20->NoVolumeSize).z;
    QStack_2._0_8_ = (this->fields)._transformableParents;
    if ((List_1_UnityEngine_GameObject_ *)QStack_2._0_8_ == (List_1_UnityEngine_GameObject_ *)0x0)
    goto code_?;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&QStack_2 >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    QStack_2.z = 0.0;
    QStack_2.w = (float)(((List_1_UnityEngine_GameObject_ *)QStack_2._0_8_)->fields)._version;
    fStack_9 = 0.0;
    fStack_10 = 0.0;
    LStack_1._8_8_ = (ulonglong)(uint)QStack_2.w << 0x20;
    LStack_1._current = (Object *)0x0;
    auStack_11._0_4_ = 0.0;
    auStack_11._4_4_ = 0.0;
    auStack_11._8_8_ = &LStack_1;
    LStack_1._list = (List_1_System_Object_ *)QStack_2._0_8_;
    while (bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              (&LStack_1,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                              ), pOVar15 = LStack_1._current, bVar12 != 0) {
      if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
        FUN_?();
      }
      auStack_14._0_8_ = uVar18;
      auStack_14._8_8_ = uVar21;
      pAVar22 = ObjectBounds::ObjectBounds_CalcWorldAABB
                          (aAStack_23,(GameObject *)pOVar15,(ObjectBounds_QueryConfig *)auStack_14,
                           (MethodInfo *)0x0);
      QStack_2._0_8_ = *(undefined8 *)&pAVar22->_size;
      uVar24 = *(undefined8 *)&(pAVar22->_size).z;
      QStack_2.z = (float)uVar24;
      QStack_2.w = (float)((ulonglong)uVar24 >> 0x20);
      uVar25 = (pAVar22->_center).y;
      uVar26 = (pAVar22->_center).z;
      fStack_9 = (float)uVar25;
      fStack_10 = (float)uVar26;
      if (pAVar22->_isValid != 0) {
        VStack_19.y = (float)uVar25;
        VStack_19.x = QStack_2.w;
        VStack_19.z = (float)uVar26;
        auStack_14._0_4_ = rotation->x;
        auStack_14._4_4_ = rotation->y;
        auStack_14._8_4_ = rotation->z;
        auStack_14._12_4_ = rotation->w;
        ObjectTransformGizmo_RotateObject
                  (this,(GameObject *)pOVar15,(Quaternion *)auStack_14,&VStack_19,(MethodInfo *)0x0)
        ;
      }
    }
  }
  else if ((this->fields)._transformPivot == 4) {
    QStack_2._0_8_ = (this->fields)._transformableParents;
    if ((List_1_UnityEngine_GameObject_ *)QStack_2._0_8_ == (List_1_UnityEngine_GameObject_ *)0x0)
    goto code_?;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&QStack_2 >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    QStack_2.z = 0.0;
    QStack_2.w = (float)(((List_1_UnityEngine_GameObject_ *)QStack_2._0_8_)->fields)._version;
    fStack_9 = 0.0;
    fStack_10 = 0.0;
    LStack_1._8_8_ = (ulonglong)(uint)QStack_2.w << 0x20;
    LStack_1._current = (Object *)0x0;
    auStack_14._0_4_ = 0.0;
    auStack_14._4_4_ = 0.0;
    auStack_14._8_8_ = &LStack_1;
    LStack_1._list = (List_1_System_Object_ *)QStack_2._0_8_;
    while (bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              (&LStack_1,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                              ), pOVar15 = LStack_1._current, bVar12 != 0) {
      if ((GameObject *)LStack_1._current == (GameObject *)0x0) goto code_?;
      pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          ((GameObject *)LStack_1._current,(MethodInfo *)0x0);
      pVVar27 = ObjectTransformGizmo_GetObjectCustomLocalPivot
                          ((Vector3 *)auStack_11,this,(GameObject *)pOVar15,(MethodInfo *)0x0);
      if (pTVar16 == (Transform *)0x0) {
code_?:
        FUN_?();
code_?:
        FUN_?();
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      VStack_19.x = pVVar27->x;
      VStack_19.y = pVVar27->y;
      VStack_19.z = pVVar27->z;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_13.x = 0.0;
      VStack_13.y = 0.0;
      VStack_13.z = 0.0;
      pvVar17 = (pTVar16->fields)._._.m_CachedPtr;
      if (pvVar17 == (void *)0x0) {
code_?:
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar16,(MethodInfo *)0x0);
        goto code_?;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar18 = func_?(&UNK_?);
        FUN_?(uVar18);
        goto code_?;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)(pvVar17,&VStack_19,&VStack_13);
      aVStack_28[0].x = VStack_13.x;
      aVStack_28[0].y = VStack_13.y;
      aVStack_28[0].z = VStack_13.z;
      QStack_2._0_8_ = *(undefined8 *)rotation;
      uVar29 = rotation->z;
      uVar30 = rotation->w;
      QStack_2.z = (float)uVar29;
      QStack_2.w = (float)uVar30;
      ObjectTransformGizmo_RotateObject
                (this,(GameObject *)pOVar15,&QStack_2,aVStack_28,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void ScaleObject(GameObject, Vector3) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_ScaleObject
               (ObjectTransformGizmo *this,GameObject *gameObject,Vector3 *scalePivot,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  RTG__IRTTransformGizmoListener_MethodInfo__UnityEngine__GameObject__GetComponent<RTG::IRTTransformGizmoListener>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__IRTTransformGizmoListener);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (gameObject != (GameObject *)0x0) {
    transform = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (gameObject,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._gizmo;
    if (pGVar1 != (Gizmo *)0x0) {
      uVar2._0_4_ = (pGVar1->fields)._dragInfo._relativeScale.x;
      uVar2._4_4_ = (pGVar1->fields)._dragInfo._relativeScale.y;
      fVar3 = (pGVar1->fields)._dragInfo._relativeScale.z;
      aVStack_4[0]._0_8_ = uVar2;
      pOVar5 = ObjectTransformGizmo_GetObjectRestrictions(this,gameObject,(MethodInfo *)0x0);
      fVar6 = _UNK_?;
      fVar7 = uVar2._4_4_;
      if (pOVar5 != (ObjectTransformGizmo_ObjectRestrictions *)0x0) {
        pGVar1 = (this->fields)._._gizmo;
        if (pGVar1 == (Gizmo *)0x0) goto code_?;
        item = (pGVar1->fields)._dragInfo._handleId;
        if (cRam_? == '\0') {
          FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_00 = (HashSet_1_System_Int32Enum_ *)(pOVar5->fields)._handleMask;
        if (this_00 == (HashSet_1_System_Int32Enum_ *)0x0) goto code_?;
        bVar8 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                 HashSet_1_System_Int32Enum__Contains
                           (this_00,item,
                            MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        if (bVar8 != 0) {
          return;
        }
        pBVar9 = (pOVar5->fields)._scaleAxesMask;
        if (pBVar9 == (Boolean__Array *)0x0) goto code_?;
        if ((int)pBVar9->max_length == 0) {
code_?:
          FUN_?();
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (pBVar9->vector[0] == 0) {
          uVar2._0_4_ = fVar6;
        }
        if ((uint)pBVar9->max_length < 2) goto code_?;
        fVar7 = fVar6;
        if ((pBVar9->vector[1] != 0) && (fVar7 = uVar2._4_4_, pBVar9 == (Boolean__Array *)0x0))
        goto code_?;
        if ((uint)pBVar9->max_length < 3) goto code_?;
        if (pBVar9->vector[2] == 0) {
          fVar3 = fVar6;
        }
      }
      if ((this->fields)._scaleConstraintEnabled == 0) {
        VStack_11.x = scalePivot->x;
        VStack_11.y = scalePivot->y;
        VStack_11.z = scalePivot->z;
        aVStack_4[0].y = fVar7;
        aVStack_4[0].x = (float)uVar2;
        aVStack_4[0].z = fVar3;
        TransformEx::TransformEx_ScaleFromPivot(transform,aVStack_4,&VStack_11,(MethodInfo *)0x0);
code_?:
        pOVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                            (gameObject,
                             RTG__IRTTransformGizmoListener_MethodInfo__UnityEngine__GameObject__GetComponent<RTG::IRTTransformGizmoListener>__
                            );
        if (pOVar12 != (Object *)0x0) {
          FUN_?();
        }
        return;
      }
      pGVar1 = (this->fields)._._gizmo;
      if (pGVar1 != (Gizmo *)0x0) {
        uVar13 = (pGVar1->fields)._dragInfo._totalScale.x;
        uVar14 = (pGVar1->fields)._dragInfo._totalScale.y;
        if ((float)uVar13 < 0.0) {
          uVar2._0_4_ = fVar6;
        }
        if ((float)uVar14 < 0.0) {
          fVar7 = fVar6;
        }
        pfVar15 = &(pGVar1->fields)._dragInfo._totalScale.z;
        VStack_11.z = fVar3;
        if (*pfVar15 <= 0.0 && *pfVar15 != 0.0) {
          VStack_11.z = fVar6;
        }
        aVStack_4[0].x = scalePivot->x;
        aVStack_4[0].y = scalePivot->y;
        aVStack_4[0].z = scalePivot->z;
        VStack_11.y = fVar7;
        VStack_11.x = (float)uVar2;
        TransformEx::TransformEx_ScaleFromPivot(transform,&VStack_11,aVStack_4,(MethodInfo *)0x0);
        if (transform != (Transform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          VStack_11.x = 0.0;
          VStack_11.y = 0.0;
          VStack_11.z = 0.0;
          pvVar16 = (transform->fields)._._.m_CachedPtr;
          if (pvVar16 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pcVar10 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
            uVar2 = func_?(&UNK_?);
            FUN_?(uVar2,0);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pcRam_? = pcVar10;
          (*pcRam_?)(pvVar16);
          uVar17 = (this->fields)._minPositiveScale.x;
          uVar18 = (this->fields)._minPositiveScale.y;
          fVar3 = VStack_11.x;
          if (VStack_11.x <= (float)uVar17) {
            fVar3 = (float)uVar17;
          }
          uVar2._0_4_ = (this->fields)._minPositiveScale.z;
          aVStack_4[0].z = VStack_11.z;
          if (VStack_11.z <= (float)uVar2) {
            aVStack_4[0].z = (float)uVar2;
          }
          uVar2._0_4_ = VStack_11.y;
          if (VStack_11.y <= (float)uVar18) {
            uVar2._0_4_ = (float)uVar18;
          }
          aVStack_4[0].y = (float)uVar2;
          aVStack_4[0].x = fVar3;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar16 = (transform->fields)._._.m_CachedPtr;
          if (pvVar16 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pcVar10 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
            uVar2 = func_?(&UNK_?);
            FUN_?(uVar2,0);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pcRam_? = pcVar10;
          (*pcRam_?)(pvVar16,aVStack_4);
          goto code_?;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void ScaleObjects() */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_ScaleObjects
               (ObjectTransformGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)0x0;
  LStack_1._index = 0;
  LStack_1._version = 0;
  LStack_1._current = (Object *)0x0;
  if ((this->fields)._transformPivot == 0) {
    auStack_2._0_8_ = (this->fields)._transformableParents;
    if ((List_1_UnityEngine_GameObject_ *)auStack_2._0_8_ == (List_1_UnityEngine_GameObject_ *)0x0
       ) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)auStack_2 >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    auStack_2._8_8_ =
         (ulonglong)(uint)(((List_1_UnityEngine_GameObject_ *)auStack_2._0_8_)->fields)._version
         << 0x20;
    uStack_9 = 0;
    LStack_1._index = auStack_2._8_4_;
    LStack_1._version = auStack_2._12_4_;
    LStack_1._current = (Object *)0x0;
    auStack_10._0_4_ = 0.0;
    auStack_10._4_4_ = 0.0;
    auStack_10._8_8_ = &LStack_1;
    LStack_1._list = (List_1_System_Object_ *)auStack_2._0_8_;
    while (bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              (&LStack_1,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                              ), bVar11 != 0) {
      VStack_12.x = (this->fields)._targetGroupAABBOnDragBegin._center.x;
      VStack_12.y = (this->fields)._targetGroupAABBOnDragBegin._center.y;
      VStack_12.z = (this->fields)._targetGroupAABBOnDragBegin._center.z;
      ObjectTransformGizmo_ScaleObject
                (this,(GameObject *)LStack_1._current,&VStack_12,(MethodInfo *)0x0);
    }
  }
  else if ((this->fields)._transformPivot == 1) {
    auStack_2._0_8_ = (this->fields)._transformableParents;
    if ((List_1_UnityEngine_GameObject_ *)auStack_2._0_8_ == (List_1_UnityEngine_GameObject_ *)0x0
       ) goto code_?;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)auStack_2 >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    auStack_2._8_8_ =
         (ulonglong)(uint)(((List_1_UnityEngine_GameObject_ *)auStack_2._0_8_)->fields)._version
         << 0x20;
    uStack_9 = 0;
    LStack_1._index = auStack_2._8_4_;
    LStack_1._version = auStack_2._12_4_;
    LStack_1._current = (Object *)0x0;
    auStack_10._0_4_ = 0.0;
    auStack_10._4_4_ = 0.0;
    auStack_10._8_8_ = &LStack_1;
    LStack_1._list = (List_1_System_Object_ *)auStack_2._0_8_;
    while (bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              (&LStack_1,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                              ), pOVar13 = LStack_1._current, bVar11 != 0) {
      if ((GameObject *)LStack_1._current == (GameObject *)0x0) goto code_?;
      pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          ((GameObject *)LStack_1._current,(MethodInfo *)0x0);
      if (pTVar14 == (Transform *)0x0) {
code_?:
        FUN_?();
code_?:
        FUN_?();
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_12.x = 0.0;
      VStack_12.y = 0.0;
      VStack_12.z = 0.0;
      pvVar15 = (pTVar14->fields)._._.m_CachedPtr;
      if (pvVar15 == (void *)0x0) {
code_?:
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar14,(MethodInfo *)0x0);
        goto code_?;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar16 = func_?(&UNK_?);
        FUN_?(uVar16);
        goto code_?;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)(pvVar15,&VStack_12);
      VStack_17.x = VStack_12.x;
      VStack_17.y = VStack_12.y;
      VStack_17.z = VStack_12.z;
      ObjectTransformGizmo_ScaleObject(this,(GameObject *)pOVar13,&VStack_17,(MethodInfo *)0x0);
    }
  }
  else if ((this->fields)._transformPivot == 3) {
    auStack_2._0_8_ = (this->fields)._transformableParents;
    if ((List_1_UnityEngine_GameObject_ *)auStack_2._0_8_ == (List_1_UnityEngine_GameObject_ *)0x0
       ) goto code_?;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)auStack_2 >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    auStack_2._8_8_ =
         (ulonglong)(uint)(((List_1_UnityEngine_GameObject_ *)auStack_2._0_8_)->fields)._version
         << 0x20;
    uStack_9 = 0;
    LStack_1._index = auStack_2._8_4_;
    LStack_1._version = auStack_2._12_4_;
    LStack_1._current = (Object *)0x0;
    auStack_10._0_4_ = 0.0;
    auStack_10._4_4_ = 0.0;
    auStack_10._8_8_ = &LStack_1;
    LStack_1._list = (List_1_System_Object_ *)auStack_2._0_8_;
    while (bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              (&LStack_1,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                              ), bVar11 != 0) {
      VStack_17.x = (this->fields)._customWorldPivot.x;
      VStack_17.y = (this->fields)._customWorldPivot.y;
      VStack_17.z = (this->fields)._customWorldPivot.z;
      ObjectTransformGizmo_ScaleObject
                (this,(GameObject *)LStack_1._current,&VStack_17,(MethodInfo *)0x0);
    }
  }
  else if ((this->fields)._transformPivot == 2) {
    pOVar18 = ObjectTransformGizmo_GetObjectBoundsQConfig
                        ((ObjectBounds_QueryConfig *)auStack_2,this,(MethodInfo *)0x0);
    pLVar19 = *(List_1_UnityEngine_GameObject_ **)pOVar18;
    lVar5._0_4_ = (pOVar18->NoVolumeSize).y;
    lVar5._4_4_ = (pOVar18->NoVolumeSize).z;
    auStack_2._0_8_ = (this->fields)._transformableParents;
    if ((List_1_UnityEngine_GameObject_ *)auStack_2._0_8_ == (List_1_UnityEngine_GameObject_ *)0x0
       ) goto code_?;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)auStack_2 >> 0xc);
      lVar20 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar20 + 0xADDR);
        puVar7 = (ulonglong *)(lVar20 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    auStack_2._8_8_ =
         (ulonglong)(uint)(((List_1_UnityEngine_GameObject_ *)auStack_2._0_8_)->fields)._version
         << 0x20;
    uStack_9 = 0;
    LStack_1._index = auStack_2._8_4_;
    LStack_1._version = auStack_2._12_4_;
    LStack_1._current = (Object *)0x0;
    auStack_10._0_4_ = 0.0;
    auStack_10._4_4_ = 0.0;
    auStack_10._8_8_ = &LStack_1;
    LStack_1._list = (List_1_System_Object_ *)auStack_2._0_8_;
    while (bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              (&LStack_1,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                              ), pOVar13 = LStack_1._current, bVar11 != 0) {
      if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
        FUN_?();
      }
      auStack_2._0_8_ = pLVar19;
      auStack_2._8_8_ = lVar5;
      pAVar21 = ObjectBounds::ObjectBounds_CalcWorldAABB
                          (aAStack_22,(GameObject *)pOVar13,(ObjectBounds_QueryConfig *)auStack_2,
                           (MethodInfo *)0x0);
      uStack_23._0_4_ = (pAVar21->_size).x;
      uStack_23._4_4_ = (pAVar21->_size).y;
      uVar16 = *(undefined8 *)&(pAVar21->_size).z;
      uStack_24 = (undefined4)uVar16;
      fStack_25 = (float)((ulonglong)uVar16 >> 0x20);
      uVar26 = (pAVar21->_center).y;
      uVar27 = (pAVar21->_center).z;
      fStack_28 = (float)uVar26;
      fStack_29 = (float)uVar27;
      if (pAVar21->_isValid != 0) {
        VStack_17.y = (float)uVar26;
        VStack_17.x = fStack_25;
        VStack_17.z = (float)uVar27;
        ObjectTransformGizmo_ScaleObject(this,(GameObject *)pOVar13,&VStack_17,(MethodInfo *)0x0);
      }
    }
  }
  else if ((this->fields)._transformPivot == 4) {
    pLVar19 = (this->fields)._transformableParents;
    if (pLVar19 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)auStack_2 >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    auStack_2._8_8_ = (ulonglong)(uint)(pLVar19->fields)._version << 0x20;
    uStack_9 = 0;
    LStack_1._index = auStack_2._8_4_;
    LStack_1._version = auStack_2._12_4_;
    LStack_1._current = (Object *)0x0;
    auStack_2._0_4_ = 0;
    auStack_2._4_4_ = 0.0;
    auStack_2._8_8_ = &LStack_1;
    LStack_1._list = (List_1_System_Object_ *)pLVar19;
    while (bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              (&LStack_1,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                              ), pOVar13 = LStack_1._current, bVar11 != 0) {
      if ((GameObject *)LStack_1._current == (GameObject *)0x0) goto code_?;
      pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          ((GameObject *)LStack_1._current,(MethodInfo *)0x0);
      pVVar30 = ObjectTransformGizmo_GetObjectCustomLocalPivot
                          ((Vector3 *)auStack_10,this,(GameObject *)pOVar13,(MethodInfo *)0x0);
      if (pTVar14 == (Transform *)0x0) {
code_?:
        FUN_?();
code_?:
        FUN_?();
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      VStack_17.x = pVVar30->x;
      VStack_17.y = pVVar30->y;
      VStack_17.z = pVVar30->z;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_12.x = 0.0;
      VStack_12.y = 0.0;
      VStack_12.z = 0.0;
      pvVar15 = (pTVar14->fields)._._.m_CachedPtr;
      if (pvVar15 == (void *)0x0) {
code_?:
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar14,(MethodInfo *)0x0);
        goto code_?;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar16 = func_?(&UNK_?);
        FUN_?(uVar16);
        goto code_?;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)(pvVar15,&VStack_17,&VStack_12);
      VStack_31.x = VStack_12.x;
      VStack_31.y = VStack_12.y;
      VStack_31.z = VStack_12.z;
      ObjectTransformGizmo_ScaleObject(this,(GameObject *)pOVar13,&VStack_31,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void SetCanAffectPosition(Boolean) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_SetCanAffectPosition
               (ObjectTransformGizmo *this,bool affectPosition,MethodInfo *method)

{
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 == (Gizmo *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pGVar1->fields)._dragInfo._isDragged == 0) {
    uVar3 = (this->fields)._transformChannelFlags;
    if (affectPosition != 0) {
      (this->fields)._transformChannelFlags = uVar3 | 1;
      return;
    }
    (this->fields)._transformChannelFlags = uVar3 & 0xfffffffe;
  }
  return;
}


/* Void SetCanAffectRotation(Boolean) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_SetCanAffectRotation
               (ObjectTransformGizmo *this,bool affectRotation,MethodInfo *method)

{
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 == (Gizmo *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pGVar1->fields)._dragInfo._isDragged == 0) {
    uVar3 = (this->fields)._transformChannelFlags;
    if (affectRotation != 0) {
      (this->fields)._transformChannelFlags = uVar3 | 2;
      return;
    }
    (this->fields)._transformChannelFlags = uVar3 & 0xfffffffd;
  }
  return;
}


/* Void SetCanAffectScale(Boolean) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_SetCanAffectScale
               (ObjectTransformGizmo *this,bool affectScale,MethodInfo *method)

{
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 == (Gizmo *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pGVar1->fields)._dragInfo._isDragged == 0) {
    uVar3 = (this->fields)._transformChannelFlags;
    if (affectScale != 0) {
      (this->fields)._transformChannelFlags = uVar3 | 4;
      return;
    }
    (this->fields)._transformChannelFlags = uVar3 & 0xfffffffb;
  }
  return;
}


/* Void SetCustomWorldPivot(Vector3) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_SetCustomWorldPivot
               (ObjectTransformGizmo *this,Vector3 *pivot,MethodInfo *method)

{
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 == (Gizmo *)0x0) {
    auStack_2._24_8_ = &UNK_?;
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((pGVar1->fields)._dragInfo._isDragged != 0) {
    return;
  }
  fVar4 = pivot->y;
  fVar5 = pivot->z;
  (this->fields)._customWorldPivot.x = pivot->x;
  (this->fields)._customWorldPivot.y = fVar4;
  (this->fields)._customWorldPivot.z = fVar5;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__ObjectBounds);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar5 = _UNK_?;
  if ((this->fields)._targetObjects == (IEnumerable_1_UnityEngine_GameObject_ *)0x0) {
    return;
  }
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 == (Gizmo *)0x0) goto code_?;
  if ((pGVar1->fields)._dragInfo._isDragged != 0) {
    return;
  }
  this_00 = (pGVar1->fields)._transform;
  if ((this->fields)._transformPivot == 0) {
code_?:
    pAVar6 = ObjectTransformGizmo_GetTargetObjectGroupWorldAABB
                        ((AABB *)auStack_2,this,(MethodInfo *)0x0);
    uVar7 = (pAVar6->_center).y;
    uVar8 = (pAVar6->_center).z;
    pVVar9 = &pAVar6->_center;
    uVar10 = pVVar9->x;
    uVar11 = pVVar9->y;
    fVar4 = pVVar9->y;
    uStack_12 = *(undefined4 *)&pAVar6->_isValid;
    fStack_13 = (float)uVar7;
    fStack_14 = (float)uVar8;
    if (this_00 == (GizmoTransform *)0x0) goto code_?;
    if (((this_00->fields)._firingChanged3DEvent == 0) &&
       (VStack_15.x = (this_00->fields)._position3D.x, VStack_15.y = (this_00->fields)._position3D.y
       , fVar16 = (this_00->fields)._position3D.z - (float)uVar8, fVar17 = VStack_15.x - pVVar9->x,
       fVar5 <= (VStack_15.y - (float)uVar7) * (VStack_15.y - (float)uVar7) + fVar17 * fVar17 +
                fVar16 * fVar16)) {
      (this_00->fields)._position3D.x = pVVar9->x;
      (this_00->fields)._position3D.y = fVar4;
      (this_00->fields)._position3D.z = (float)uVar8;
      OStack_18.NoVolumeSize.z = (float)uVar10;
      fStack_13 = (float)uVar11;
      GizmoTransform::GizmoTransform_OnPosition3DChanged(this_00,(MethodInfo *)0x0);
    }
  }
  else {
    pGVar19 = (this->fields)._targetPivotObject;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pGVar19 == (GameObject *)0x0) goto code_?;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar19->fields)._.m_CachedPtr == (void *)0x0) goto code_?;
    if ((this->fields)._transformPivot == 1) {
      pGVar19 = (this->fields)._targetPivotObject;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pGVar19 == (GameObject *)0x0) {
code_?:
        pAVar6 = ObjectTransformGizmo_GetTargetObjectGroupWorldAABB
                            ((AABB *)auStack_2,this,(MethodInfo *)0x0);
        OStack_18.ObjectTypes = (int32_t)(pAVar6->_size).x;
        OStack_18.NoVolumeSize.x = (pAVar6->_size).y;
        uVar20 = *(undefined8 *)&(pAVar6->_size).z;
        uVar21 = (pAVar6->_center).y;
        uVar22 = (pAVar6->_center).z;
        uStack_12 = *(undefined4 *)&pAVar6->_isValid;
        OStack_18.NoVolumeSize.y = (float)uVar20;
        OStack_18.NoVolumeSize.z = (float)((ulonglong)uVar20 >> 0x20);
        fStack_13 = (float)uVar21;
        fStack_14 = (float)uVar22;
        goto DAT_?;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pGVar19->fields)._.m_CachedPtr == (void *)0x0) goto code_?;
      pGVar19 = (this->fields)._targetPivotObject;
      if (((pGVar19 == (GameObject *)0x0) ||
          (pTVar23 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar19,(MethodInfo *)0x0), pTVar23 == (Transform *)0x0)) ||
         (pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              (&VStack_15,pTVar23,(MethodInfo *)0x0),
         this_00 == (GizmoTransform *)0x0)) goto code_?;
      fVar4 = pVVar9->x;
      fVar16 = pVVar9->y;
      fVar17 = pVVar9->z;
code_?:
      VStack_24.y = fVar16;
      VStack_24.x = fVar4;
      VStack_24.z = fVar17;
      GizmoTransform::GizmoTransform_set_Position3D(this_00,&VStack_24,(MethodInfo *)0x0);
    }
    else if ((this->fields)._transformPivot == 2) {
      pGVar19 = (this->fields)._targetPivotObject;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pGVar19 == (GameObject *)0x0) goto code_?;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pGVar19->fields)._.m_CachedPtr == (void *)0x0) goto code_?;
      pOVar25 = ObjectTransformGizmo_GetObjectBoundsQConfig(&OStack_18,this,(MethodInfo *)0x0);
      pGVar19 = (this->fields)._targetPivotObject;
      OStack_18.ObjectTypes = pOVar25->ObjectTypes;
      OStack_18.NoVolumeSize.x = (pOVar25->NoVolumeSize).x;
      uVar26 = (pOVar25->NoVolumeSize).y;
      uVar27 = (pOVar25->NoVolumeSize).z;
      if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
        FUN_?();
      }
      OStack_18.NoVolumeSize.y = (float)uVar26;
      OStack_18.NoVolumeSize.z = (float)uVar27;
      pAVar6 = ObjectBounds::ObjectBounds_CalcWorldAABB
                          ((AABB *)auStack_2,pGVar19,&OStack_18,(MethodInfo *)0x0);
      OStack_18.ObjectTypes = (int32_t)(pAVar6->_size).x;
      OStack_18.NoVolumeSize.x = (pAVar6->_size).y;
      uVar20 = *(undefined8 *)&(pAVar6->_size).z;
      uVar28 = (pAVar6->_center).y;
      uVar29 = (pAVar6->_center).z;
      OStack_18.NoVolumeSize.y = (float)uVar20;
      OStack_18.NoVolumeSize.z = (float)((ulonglong)uVar20 >> 0x20);
      fStack_13 = (float)uVar28;
      fStack_14 = (float)uVar29;
      if (pAVar6->_isValid == 0) goto code_?;
DAT_?:
      fVar4 = OStack_18.NoVolumeSize.z;
      fVar16 = fStack_13;
      fVar17 = fStack_14;
      if (this_00 == (GizmoTransform *)0x0) goto code_?;
      goto code_?;
    }
  }
code_?:
  if ((this->fields)._transformPivot == 3) {
    if (this_00 != (GizmoTransform *)0x0) {
      if ((this_00->fields)._firingChanged3DEvent != 0) {
        return;
      }
      uVar30 = (this->fields)._customWorldPivot.x;
      uVar31 = (this->fields)._customWorldPivot.y;
      uVar32 = (this_00->fields)._position3D.x;
      fVar4 = (this_00->fields)._position3D.z - (this->fields)._customWorldPivot.z;
      fVar16 = (this_00->fields)._position3D.y - (float)uVar31;
      if (fVar16 * fVar16 + ((float)uVar32 - (float)uVar30) * ((float)uVar32 - (float)uVar30) +
          fVar4 * fVar4 < fVar5) {
        return;
      }
      fVar4 = (this->fields)._customWorldPivot.y;
      fVar5 = (this->fields)._customWorldPivot.z;
      (this_00->fields)._position3D.x = (this->fields)._customWorldPivot.x;
      (this_00->fields)._position3D.y = fVar4;
      (this_00->fields)._position3D.z = fVar5;
      GizmoTransform::GizmoTransform_OnPosition3DChanged(this_00,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  }
  if ((this->fields)._transformPivot != 4) {
    return;
  }
  pGVar19 = (this->fields)._targetPivotObject;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pGVar19 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar19->fields)._.m_CachedPtr != (void *)0x0) {
      pGVar19 = (this->fields)._targetPivotObject;
      if (pGVar19 == (GameObject *)0x0) goto code_?;
      pTVar23 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar19,(MethodInfo *)0x0);
      pVVar9 = ObjectTransformGizmo_GetObjectCustomLocalPivot
                          ((Vector3 *)&OStack_18,this,(this->fields)._targetPivotObject,
                           (MethodInfo *)0x0);
      if (pTVar23 == (Transform *)0x0) goto code_?;
      VStack_15.x = pVVar9->x;
      VStack_15.y = pVVar9->y;
      VStack_15.z = pVVar9->z;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_24.x = 0.0;
      VStack_24.y = 0.0;
      VStack_24.z = 0.0;
      pvVar33 = (pTVar23->fields)._._.m_CachedPtr;
      if (pvVar33 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar23,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar20 = func_?(&UNK_?);
        FUN_?(uVar20,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)(pvVar33,&VStack_15);
      if (this_00 == (GizmoTransform *)0x0) goto code_?;
      fVar5 = VStack_24.y;
      fVar4 = VStack_24.x;
      fVar16 = VStack_24.z;
      goto code_?;
    }
  }
  pAVar6 = ObjectTransformGizmo_GetTargetObjectGroupWorldAABB
                      ((AABB *)auStack_2,this,(MethodInfo *)0x0);
  fVar5 = (pAVar6->_center).y;
  uVar34 = (pAVar6->_center).z;
  OStack_18.ObjectTypes = (int32_t)(pAVar6->_size).x;
  OStack_18.NoVolumeSize.x = (pAVar6->_size).y;
  uVar20 = *(undefined8 *)&(pAVar6->_size).z;
  OStack_18.NoVolumeSize.y = (float)uVar20;
  OStack_18.NoVolumeSize.z = (float)((ulonglong)uVar20 >> 0x20);
  fVar4 = OStack_18.NoVolumeSize.z;
  fVar16 = (float)uVar34;
  fStack_13 = fVar5;
  fStack_14 = (float)uVar34;
  if (this_00 == (GizmoTransform *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
code_?:
  VStack_15.y = fVar5;
  VStack_15.x = fVar4;
  VStack_15.z = fVar16;
  GizmoTransform::GizmoTransform_set_Position3D(this_00,&VStack_15,(MethodInfo *)0x0);
  return;
}


/* Void SetObjectCustomLocalPivot(GameObject, Vector3) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_SetObjectCustomLocalPivot
               (ObjectTransformGizmo *this,GameObject *gameObj,Vector3 *pivot,MethodInfo *method)

{
  uVar1 = SUB84(method,0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_UnityEngine::Vector3>__Add_UnityEngine__GameObject__UnityEngine__Vector3_
                  ,gameObj,pivot,uVar1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_UnityEngine::Vector3>__ContainsKey_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_UnityEngine::Vector3>__set_Item_UnityEngine__GameObject__UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (gameObj != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((gameObj->fields)._.m_CachedPtr != (void *)0x0) {
      pGVar2 = (this->fields)._._gizmo;
      if (pGVar2 != (Gizmo *)0x0) {
        if ((pGVar2->fields)._dragInfo._isDragged != 0) {
          return;
        }
        pDVar3 = (this->fields)._objectToCustomLocalPivot;
        if (pDVar3 != (Dictionary_2_UnityEngine_GameObject_UnityEngine_Vector3_ *)0x0) {
          iVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial__FindEntry
                            ((Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                              *)pDVar3,(Object *)gameObj,
                             MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_UnityEngine::Vector3>__ContainsKey_UnityEngine__GameObject_
                             ->klass->rgctx_data[0x21].method);
          pDVar3 = (this->fields)._objectToCustomLocalPivot;
          if (pDVar3 != (Dictionary_2_UnityEngine_GameObject_UnityEngine_Vector3_ *)0x0) {
            VStack_5.x = pivot->x;
            VStack_5.y = pivot->y;
            VStack_5.z = pivot->z;
            uVar6 = (undefined3)((uint)uVar1 >> 8);
            if (iVar4 < 0) {
              behavior = CONCAT31(uVar6,2);
              method_00 = MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_UnityEngine::Vector3>__Add_UnityEngine__GameObject__UnityEngine__Vector3_
                          ->klass->rgctx_data[0x22].method;
            }
            else {
              behavior = CONCAT31(uVar6,1);
              method_00 = MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_UnityEngine::Vector3>__set_Item_UnityEngine__GameObject__UnityEngine__Vector3_
                          ->klass->rgctx_data[0x22].method;
            }
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            Vector3]::Dictionary_2_System_Object_UnityEngine_Vector3__TryInsert
                      ((Dictionary_2_System_Object_UnityEngine_Vector3_ *)pDVar3,(Object *)gameObj,
                       &VStack_5,behavior,method_00);
            ObjectTransformGizmo_RefreshPosition(this,(MethodInfo *)0x0);
            return;
          }
        }
      }
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  return;
}


/* Void SetTargetObject(GameObject) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_SetTargetObject
               (ObjectTransformGizmo *this,GameObject *targetObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 == (Gizmo *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pGVar1->fields)._dragInfo._isDragged == 0) {
    (this->fields)._targetObjectMode = 1;
    this_00 = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
              FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
    if (this_00 == (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)
    goto code_?;
    FUN_?(this_00);
    iVar3 = iRam_?;
    (this->fields)._targetObjects = (IEnumerable_1_UnityEngine_GameObject_ *)this_00;
    if (iVar3 != 0) {
      uVar4 = (uint)((ulonglong)&(this->fields)._targetObjects >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
        iVar3 = iRam_?;
      } while (!bVar8);
    }
    (this->fields)._targetPivotObject = targetObject;
    if (iVar3 != 0) {
      uVar4 = (uint)((ulonglong)&(this->fields)._targetPivotObject >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    ObjectTransformGizmo_RefreshPosition(this,(MethodInfo *)0x0);
    ObjectTransformGizmo_RefreshRotation(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void SetTargetObjects(IEnumerable`1[UnityEngine.GameObject]) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_SetTargetObjects
               (ObjectTransformGizmo *this,IEnumerable_1_UnityEngine_GameObject_ *targetObjects,
               MethodInfo *method)

{
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 == (Gizmo *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pGVar1->fields)._dragInfo._isDragged != 0) {
    return;
  }
  bVar3 = iRam_? != 0;
  (this->fields)._targetObjectMode = 0;
  (this->fields)._targetObjects = targetObjects;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields)._targetObjects >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  ObjectTransformGizmo_RefreshPosition(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._targetObjects == (IEnumerable_1_UnityEngine_GameObject_ *)0x0) {
    return;
  }
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 != (Gizmo *)0x0) {
    if ((pGVar1->fields)._dragInfo._isDragged != 0) {
      return;
    }
    this_00 = (pGVar1->fields)._transform;
    if ((this->fields)._transformSpace != 0) {
      pGVar8 = (this->fields)._targetPivotObject;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pGVar8 != (GameObject *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pGVar8->fields)._.m_CachedPtr != (void *)0x0) {
          pGVar8 = (this->fields)._targetPivotObject;
          if (((pGVar8 == (GameObject *)0x0) ||
              (this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(pGVar8,(MethodInfo *)0x0),
              this_01 == (Transform *)0x0)) ||
             (pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                 (&QStack_10,this_01,(MethodInfo *)0x0),
             this_00 == (GizmoTransform *)0x0)) goto DAT_?;
          QStack_10.x = pQVar9->x;
          QStack_10.y = pQVar9->y;
          QStack_10.z = pQVar9->z;
          QStack_10.w = pQVar9->w;
          goto code_?;
        }
      }
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Quaternion);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pQVar11 = TypeInfo__UnityEngine__Quaternion->static_fields;
    if (this_00 != (GizmoTransform *)0x0) {
      QStack_10.x = (pQVar11->identityQuaternion).x;
      QStack_10.y = (pQVar11->identityQuaternion).y;
      QStack_10.z = (pQVar11->identityQuaternion).z;
      QStack_10.w = (pQVar11->identityQuaternion).w;
code_?:
      GizmoTransform::GizmoTransform_set_Rotation3D(this_00,&QStack_10,(MethodInfo *)0x0);
      return;
    }
  }
DAT_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetTargetPivotObject(GameObject) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_SetTargetPivotObject
               (ObjectTransformGizmo *this,GameObject *targetPivotObject,MethodInfo *method)

{
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 == (Gizmo *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((pGVar1->fields)._dragInfo._isDragged != 0) || ((this->fields)._targetObjectMode == 1)) {
    return;
  }
  bVar3 = iRam_? != 0;
  (this->fields)._targetPivotObject = targetPivotObject;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields)._targetPivotObject >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  ObjectTransformGizmo_RefreshPosition(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._targetObjects == (IEnumerable_1_UnityEngine_GameObject_ *)0x0) {
    return;
  }
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 != (Gizmo *)0x0) {
    if ((pGVar1->fields)._dragInfo._isDragged != 0) {
      return;
    }
    this_00 = (pGVar1->fields)._transform;
    if ((this->fields)._transformSpace != 0) {
      pGVar8 = (this->fields)._targetPivotObject;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pGVar8 != (GameObject *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pGVar8->fields)._.m_CachedPtr != (void *)0x0) {
          pGVar8 = (this->fields)._targetPivotObject;
          if (((pGVar8 == (GameObject *)0x0) ||
              (this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(pGVar8,(MethodInfo *)0x0),
              this_01 == (Transform *)0x0)) ||
             (pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                 (&QStack_10,this_01,(MethodInfo *)0x0),
             this_00 == (GizmoTransform *)0x0)) goto DAT_?;
          QStack_10.x = pQVar9->x;
          QStack_10.y = pQVar9->y;
          QStack_10.z = pQVar9->z;
          QStack_10.w = pQVar9->w;
          goto code_?;
        }
      }
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Quaternion);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pQVar11 = TypeInfo__UnityEngine__Quaternion->static_fields;
    if (this_00 != (GizmoTransform *)0x0) {
      QStack_10.x = (pQVar11->identityQuaternion).x;
      QStack_10.y = (pQVar11->identityQuaternion).y;
      QStack_10.z = (pQVar11->identityQuaternion).z;
      QStack_10.w = (pQVar11->identityQuaternion).w;
code_?:
      GizmoTransform::GizmoTransform_set_Rotation3D(this_00,&QStack_10,(MethodInfo *)0x0);
      return;
    }
  }
DAT_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetTransformChannelFlags(ObjectTransformGizmo+Channels) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_SetTransformChannelFlags
               (ObjectTransformGizmo *this,ObjectTransformGizmo_Channels__Enum flags,
               MethodInfo *method)

{
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 != (Gizmo *)0x0) {
    if ((pGVar1->fields)._dragInfo._isDragged == 0) {
      (this->fields)._transformChannelFlags = flags;
    }
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetTransformPivot(GizmoObjectTransformPivot) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_SetTransformPivot
               (ObjectTransformGizmo *this,GizmoObjectTransformPivot__Enum transformPivot,
               MethodInfo *method)

{
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 == (Gizmo *)0x0) {
    auStack_2._24_8_ = &UNK_?;
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((pGVar1->fields)._dragInfo._isDragged != 0) ||
     ((this->fields)._isTransformPivotPermanent != 0)) {
    return;
  }
  (this->fields)._transformPivot = transformPivot;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__ObjectBounds);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar4 = _UNK_?;
  if ((this->fields)._targetObjects == (IEnumerable_1_UnityEngine_GameObject_ *)0x0) {
    return;
  }
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 == (Gizmo *)0x0) goto code_?;
  if ((pGVar1->fields)._dragInfo._isDragged != 0) {
    return;
  }
  this_00 = (pGVar1->fields)._transform;
  if ((this->fields)._transformPivot == 0) {
code_?:
    pAVar5 = ObjectTransformGizmo_GetTargetObjectGroupWorldAABB
                        ((AABB *)auStack_2,this,(MethodInfo *)0x0);
    uVar6 = (pAVar5->_center).y;
    uVar7 = (pAVar5->_center).z;
    pVVar8 = &pAVar5->_center;
    uVar9 = pVVar8->x;
    uVar10 = pVVar8->y;
    fVar11 = pVVar8->y;
    uStack_12 = *(undefined4 *)&pAVar5->_isValid;
    fStack_13 = (float)uVar6;
    fStack_14 = (float)uVar7;
    if (this_00 == (GizmoTransform *)0x0) goto code_?;
    if (((this_00->fields)._firingChanged3DEvent == 0) &&
       (VStack_15.x = (this_00->fields)._position3D.x, VStack_15.y = (this_00->fields)._position3D.y
       , fVar16 = (this_00->fields)._position3D.z - (float)uVar7, fVar17 = VStack_15.x - pVVar8->x,
       fVar4 <= (VStack_15.y - (float)uVar6) * (VStack_15.y - (float)uVar6) + fVar17 * fVar17 +
                fVar16 * fVar16)) {
      (this_00->fields)._position3D.x = pVVar8->x;
      (this_00->fields)._position3D.y = fVar11;
      (this_00->fields)._position3D.z = (float)uVar7;
      OStack_18.NoVolumeSize.z = (float)uVar9;
      fStack_13 = (float)uVar10;
      GizmoTransform::GizmoTransform_OnPosition3DChanged(this_00,(MethodInfo *)0x0);
    }
  }
  else {
    pGVar19 = (this->fields)._targetPivotObject;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pGVar19 == (GameObject *)0x0) goto code_?;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar19->fields)._.m_CachedPtr == (void *)0x0) goto code_?;
    if ((this->fields)._transformPivot == 1) {
      pGVar19 = (this->fields)._targetPivotObject;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pGVar19 == (GameObject *)0x0) {
code_?:
        pAVar5 = ObjectTransformGizmo_GetTargetObjectGroupWorldAABB
                            ((AABB *)auStack_2,this,(MethodInfo *)0x0);
        OStack_18.ObjectTypes = (int32_t)(pAVar5->_size).x;
        OStack_18.NoVolumeSize.x = (pAVar5->_size).y;
        uVar20 = *(undefined8 *)&(pAVar5->_size).z;
        uVar21 = (pAVar5->_center).y;
        uVar22 = (pAVar5->_center).z;
        uStack_12 = *(undefined4 *)&pAVar5->_isValid;
        OStack_18.NoVolumeSize.y = (float)uVar20;
        OStack_18.NoVolumeSize.z = (float)((ulonglong)uVar20 >> 0x20);
        fStack_13 = (float)uVar21;
        fStack_14 = (float)uVar22;
        goto DAT_?;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pGVar19->fields)._.m_CachedPtr == (void *)0x0) goto code_?;
      pGVar19 = (this->fields)._targetPivotObject;
      if (((pGVar19 == (GameObject *)0x0) ||
          (pTVar23 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar19,(MethodInfo *)0x0), pTVar23 == (Transform *)0x0)) ||
         (pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              (&VStack_15,pTVar23,(MethodInfo *)0x0),
         this_00 == (GizmoTransform *)0x0)) goto code_?;
      fVar11 = pVVar8->x;
      fVar16 = pVVar8->y;
      fVar17 = pVVar8->z;
code_?:
      VStack_24.y = fVar16;
      VStack_24.x = fVar11;
      VStack_24.z = fVar17;
      GizmoTransform::GizmoTransform_set_Position3D(this_00,&VStack_24,(MethodInfo *)0x0);
    }
    else if ((this->fields)._transformPivot == 2) {
      pGVar19 = (this->fields)._targetPivotObject;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pGVar19 == (GameObject *)0x0) goto code_?;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pGVar19->fields)._.m_CachedPtr == (void *)0x0) goto code_?;
      pOVar25 = ObjectTransformGizmo_GetObjectBoundsQConfig(&OStack_18,this,(MethodInfo *)0x0);
      pGVar19 = (this->fields)._targetPivotObject;
      OStack_18.ObjectTypes = pOVar25->ObjectTypes;
      OStack_18.NoVolumeSize.x = (pOVar25->NoVolumeSize).x;
      uVar26 = (pOVar25->NoVolumeSize).y;
      uVar27 = (pOVar25->NoVolumeSize).z;
      if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
        FUN_?();
      }
      OStack_18.NoVolumeSize.y = (float)uVar26;
      OStack_18.NoVolumeSize.z = (float)uVar27;
      pAVar5 = ObjectBounds::ObjectBounds_CalcWorldAABB
                          ((AABB *)auStack_2,pGVar19,&OStack_18,(MethodInfo *)0x0);
      OStack_18.ObjectTypes = (int32_t)(pAVar5->_size).x;
      OStack_18.NoVolumeSize.x = (pAVar5->_size).y;
      uVar20 = *(undefined8 *)&(pAVar5->_size).z;
      uVar28 = (pAVar5->_center).y;
      uVar29 = (pAVar5->_center).z;
      OStack_18.NoVolumeSize.y = (float)uVar20;
      OStack_18.NoVolumeSize.z = (float)((ulonglong)uVar20 >> 0x20);
      fStack_13 = (float)uVar28;
      fStack_14 = (float)uVar29;
      if (pAVar5->_isValid == 0) goto code_?;
DAT_?:
      fVar11 = OStack_18.NoVolumeSize.z;
      fVar16 = fStack_13;
      fVar17 = fStack_14;
      if (this_00 == (GizmoTransform *)0x0) goto code_?;
      goto code_?;
    }
  }
code_?:
  if ((this->fields)._transformPivot == 3) {
    if (this_00 != (GizmoTransform *)0x0) {
      if ((this_00->fields)._firingChanged3DEvent != 0) {
        return;
      }
      uVar30 = (this->fields)._customWorldPivot.x;
      uVar31 = (this->fields)._customWorldPivot.y;
      uVar32 = (this_00->fields)._position3D.x;
      fVar11 = (this_00->fields)._position3D.z - (this->fields)._customWorldPivot.z;
      fVar16 = (this_00->fields)._position3D.y - (float)uVar31;
      if (fVar16 * fVar16 + ((float)uVar32 - (float)uVar30) * ((float)uVar32 - (float)uVar30) +
          fVar11 * fVar11 < fVar4) {
        return;
      }
      fVar11 = (this->fields)._customWorldPivot.y;
      fVar4 = (this->fields)._customWorldPivot.z;
      (this_00->fields)._position3D.x = (this->fields)._customWorldPivot.x;
      (this_00->fields)._position3D.y = fVar11;
      (this_00->fields)._position3D.z = fVar4;
      GizmoTransform::GizmoTransform_OnPosition3DChanged(this_00,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  }
  if ((this->fields)._transformPivot != 4) {
    return;
  }
  pGVar19 = (this->fields)._targetPivotObject;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pGVar19 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar19->fields)._.m_CachedPtr != (void *)0x0) {
      pGVar19 = (this->fields)._targetPivotObject;
      if (pGVar19 == (GameObject *)0x0) goto code_?;
      pTVar23 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar19,(MethodInfo *)0x0);
      pVVar8 = ObjectTransformGizmo_GetObjectCustomLocalPivot
                          ((Vector3 *)&OStack_18,this,(this->fields)._targetPivotObject,
                           (MethodInfo *)0x0);
      if (pTVar23 == (Transform *)0x0) goto code_?;
      VStack_15.x = pVVar8->x;
      VStack_15.y = pVVar8->y;
      VStack_15.z = pVVar8->z;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_24.x = 0.0;
      VStack_24.y = 0.0;
      VStack_24.z = 0.0;
      pvVar33 = (pTVar23->fields)._._.m_CachedPtr;
      if (pvVar33 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar23,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar20 = func_?(&UNK_?);
        FUN_?(uVar20,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)(pvVar33,&VStack_15);
      if (this_00 == (GizmoTransform *)0x0) goto code_?;
      fVar4 = VStack_24.y;
      fVar11 = VStack_24.x;
      fVar16 = VStack_24.z;
      goto code_?;
    }
  }
  pAVar5 = ObjectTransformGizmo_GetTargetObjectGroupWorldAABB
                      ((AABB *)auStack_2,this,(MethodInfo *)0x0);
  fVar4 = (pAVar5->_center).y;
  uVar34 = (pAVar5->_center).z;
  OStack_18.ObjectTypes = (int32_t)(pAVar5->_size).x;
  OStack_18.NoVolumeSize.x = (pAVar5->_size).y;
  uVar20 = *(undefined8 *)&(pAVar5->_size).z;
  OStack_18.NoVolumeSize.y = (float)uVar20;
  OStack_18.NoVolumeSize.z = (float)((ulonglong)uVar20 >> 0x20);
  fVar11 = OStack_18.NoVolumeSize.z;
  fVar16 = (float)uVar34;
  fStack_13 = fVar4;
  fStack_14 = (float)uVar34;
  if (this_00 == (GizmoTransform *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
code_?:
  VStack_15.y = fVar4;
  VStack_15.x = fVar11;
  VStack_15.z = fVar16;
  GizmoTransform::GizmoTransform_set_Position3D(this_00,&VStack_15,(MethodInfo *)0x0);
  return;
}


/* Void SetTransformSpace(GizmoSpace) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_SetTransformSpace
               (ObjectTransformGizmo *this,GizmoSpace__Enum transformSpace,MethodInfo *method)

{
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 == (Gizmo *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((pGVar1->fields)._dragInfo._isDragged != 0) ||
     ((this->fields)._isTransformSpacePermanent != 0)) {
    return;
  }
  (this->fields)._transformSpace = transformSpace;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._targetObjects == (IEnumerable_1_UnityEngine_GameObject_ *)0x0) {
    return;
  }
  pGVar1 = (this->fields)._._gizmo;
  if (pGVar1 != (Gizmo *)0x0) {
    if ((pGVar1->fields)._dragInfo._isDragged != 0) {
      return;
    }
    this_00 = (pGVar1->fields)._transform;
    if ((this->fields)._transformSpace != 0) {
      pGVar3 = (this->fields)._targetPivotObject;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pGVar3 != (GameObject *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pGVar3->fields)._.m_CachedPtr != (void *)0x0) {
          pGVar3 = (this->fields)._targetPivotObject;
          if (((pGVar3 == (GameObject *)0x0) ||
              (this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(pGVar3,(MethodInfo *)0x0),
              this_01 == (Transform *)0x0)) ||
             (pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                 (&QStack_5,this_01,(MethodInfo *)0x0),
             this_00 == (GizmoTransform *)0x0)) goto DAT_?;
          QStack_5.x = pQVar4->x;
          QStack_5.y = pQVar4->y;
          QStack_5.z = pQVar4->z;
          QStack_5.w = pQVar4->w;
          goto code_?;
        }
      }
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Quaternion);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pQVar6 = TypeInfo__UnityEngine__Quaternion->static_fields;
    if (this_00 != (GizmoTransform *)0x0) {
      QStack_5.x = (pQVar6->identityQuaternion).x;
      QStack_5.y = (pQVar6->identityQuaternion).y;
      QStack_5.z = (pQVar6->identityQuaternion).z;
      QStack_5.w = (pQVar6->identityQuaternion).w;
code_?:
      GizmoTransform::GizmoTransform_set_Rotation3D(this_00,&QStack_5,(MethodInfo *)0x0);
      return;
    }
  }
DAT_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UnregisterObjectRestrictions(GameObject) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::
     ObjectTransformGizmo_UnregisterObjectRestrictions
               (ObjectTransformGizmo *this,GameObject *targetObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::ObjectTransformGizmo::ObjectRestrictions>__Remove_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = ObjectTransformGizmo_ContainsRestrictionsForObject(this,targetObject,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    this_00 = (this->fields)._objectToRestrictions;
    if (this_00 ==
        (Dictionary_2_UnityEngine_GameObject_RTG_ObjectTransformGizmo_ObjectRestrictions_ *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Remove
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)targetObject,
               MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::ObjectTransformGizmo::ObjectRestrictions>__Remove_UnityEngine__GameObject_
              );
  }
  return;
}


/* ObjectTransformGizmo() */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo__ctor
               (ObjectTransformGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_UnityEngine::Vector3>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::ObjectTransformGizmo::ObjectRestrictions>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::ObjectTransformGizmo::ObjectRestrictions>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_UnityEngine::Vector3>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ObjectTransformGizmoSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  (this->fields)._minPositiveScale.x = _UNK_?;
  (this->fields)._minPositiveScale.y = fVar1;
  (this->fields)._minPositiveScale.z = fVar1;
  pDVar2 = (Dictionary_2_UnityEngine_GameObject_UnityEngine_Vector3_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_UnityEngine::Vector3>
                        );
  pEVar3 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Object]::
           EqualityComparer_1_System_Object__get_Default
                     (MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_UnityEngine::Vector3>__Dictionary__
                      ->klass->rgctx_data->method->klass->rgctx_data[3].method);
  if ((pEVar3 != (EqualityComparer_1_System_Object_ *)0x0) &&
     (bVar4 = iRam_? != 0,
     (pDVar2->fields)._comparer = (IEqualityComparer_1_UnityEngine_GameObject_ *)0x0, bVar4)) {
    uVar5 = (uint)((ulonglong)&(pDVar2->fields)._comparer >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  bVar4 = iRam_? != 0;
  (this->fields)._objectToCustomLocalPivot = pDVar2;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields)._objectToCustomLocalPivot >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::ObjectTransformGizmo::ObjectRestrictions>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::ObjectTransformGizmo::ObjectRestrictions>__Dictionary__
            );
  bVar4 = iRam_? != 0;
  (this->fields)._objectToRestrictions =
       (Dictionary_2_UnityEngine_GameObject_RTG_ObjectTransformGizmo_ObjectRestrictions_ *)this_00;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields)._objectToRestrictions >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  this_01 = (ObjectTransformGizmoSettings *)
            FUN_?(TypeInfo__RTG__ObjectTransformGizmoSettings);
  ObjectTransformGizmoSettings::ObjectTransformGizmoSettings__ctor(this_01,(MethodInfo *)0x0);
  bVar4 = iRam_? != 0;
  (this->fields)._settings = this_01;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields)._settings >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  (this->fields)._._isEnabled = 1;
  return;
}


/* Boolean get_CanAffectPosition() */

bool Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_get_CanAffectPosition
               (ObjectTransformGizmo *this,MethodInfo *method)

{
  return (byte)(this->fields)._transformChannelFlags & 1;
}


/* Boolean get_CanAffectRotation() */

bool Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_get_CanAffectRotation
               (ObjectTransformGizmo *this,MethodInfo *method)

{
  return ((this->fields)._transformChannelFlags & 2) != 0;
}


/* Boolean get_CanAffectScale() */

bool Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_get_CanAffectScale
               (ObjectTransformGizmo *this,MethodInfo *method)

{
  return ((this->fields)._transformChannelFlags & 4) != 0;
}


/* Vector3 get_CustomWorldPivot() */

Vector3 * Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_get_CustomWorldPivot
                    (Vector3 *__return_storage_ptr__,ObjectTransformGizmo *this,MethodInfo *method)

{
  fVar1 = (this->fields)._customWorldPivot.z;
  fVar2 = (this->fields)._customWorldPivot.y;
  __return_storage_ptr__->x = (this->fields)._customWorldPivot.x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* ObjectTransformGizmoSettings get_Settings() */

ObjectTransformGizmoSettings *
Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_get_Settings
          (ObjectTransformGizmo *this,MethodInfo *method)

{
  if ((this->fields)._sharedSettings != (ObjectTransformGizmoSettings *)0x0) {
    return (this->fields)._sharedSettings;
  }
  return (this->fields)._settings;
}


/* Void set_MinPositiveScale(Vector3) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_set_MinPositiveScale
               (ObjectTransformGizmo *this,Vector3 *value,MethodInfo *method)

{
  fVar1 = value->x;
  if (fVar1 <= _UNK_?) {
    fVar1 = _UNK_?;
  }
  fVar2 = value->y;
  if (value->y <= _UNK_?) {
    fVar2 = _UNK_?;
  }
  fVar3 = value->z;
  if (value->z <= _UNK_?) {
    fVar3 = _UNK_?;
  }
  (this->fields)._minPositiveScale.x = fVar1;
  (this->fields)._minPositiveScale.y = fVar2;
  (this->fields)._minPositiveScale.z = fVar3;
  return;
}

