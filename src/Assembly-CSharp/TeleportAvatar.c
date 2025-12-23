
/* Single BlockStep(Single, Single) */

float Assembly-CSharp.dll::TeleportAvatar::TeleportAvatar_BlockStep
                (TeleportAvatar *this,float t,float steps,MethodInfo *method)

{
  fVar1 = (float)FUN_?(t * steps);
  return fVar1 / steps;
}


/* IEnumerator DoForSeconds(Single, TeleportAvatar+ActionDelegate) */

IEnumerator *
Assembly-CSharp.dll::TeleportAvatar::TeleportAvatar_DoForSeconds
          (TeleportAvatar *this,float duration,TeleportAvatar_ActionDelegate *body,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__TeleportAvatar___DoForSeconds_d__14);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__TeleportAvatar___DoForSeconds_d__14);
  bVar2 = iRam_? != 0;
  *(float *)&pIVar1[2].monitor = duration;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)body;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  return pIVar1;
}


/* Void EndTeleportation(MVRigidBody) */

void Assembly-CSharp.dll::TeleportAvatar::TeleportAvatar_EndTeleportation
               (TeleportAvatar *this,MVRigidBody *rigidBody,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TeleportAvatar__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_);
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
  if (rigidBody != (MVRigidBody *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((rigidBody->fields)._._._._._.m_CachedPtr != (void *)0x0) {
      (*(rigidBody->klass->vtable).__unknown_3.methodPtr)
                (rigidBody,0,(rigidBody->klass->vtable).__unknown_3.method);
    }
  }
  pMVar1 = (this->fields).avatar;
  if (((pMVar1 != (MVAvatarLocal *)0x0) &&
      (pAVar2 = (pMVar1->fields)._.avatarPickupOwner, pAVar2 != (AvatarPickupOwner *)0x0)) &&
     (pPVar3 = (pAVar2->fields)._.currentItem, pPVar3 != (PickupItem *)0x0)) {
    bVar4 = cRam_? == '\0';
    (pPVar3->fields)._AbleToFire_k__BackingField = 1;
    if (bVar4) {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar5 != (MVGameControllerBase *)0x0) &&
        (pMVar6 = (pMVar5->fields).game, pMVar6 != (MVNetworkGame *)0x0)) &&
       ((pMVar1 = (this->fields).avatar, pMVar1 != (MVAvatarLocal *)0x0 &&
        (this_00 = (pMVar6->fields).operationRequests,
        this_00 != (MVNetworkGame_OperationRequests *)0x0)))) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxExit
                (this_00,(this->fields)._TeleporterOrigin_k__BackingField,
                 (pMVar1->fields)._._._._.id,(MethodInfo *)0x0);
      pSVar7 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                         ((MethodInfo *)0x0);
      if (pSVar7 != (SpawnRoleDataMediator *)0x0) {
        this_01 = (pSVar7->fields).SpawnRoleModeTypeWrapper;
        this_02 = (UnityAction_1_System_Int32Enum_ *)
                  FUN_?(TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_02,(Object *)this,
                   MethodInfo__TeleportAvatar__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_,
                   (MethodInfo *)0x0);
        if (this_01 != (SpawnRoleModeTypeWrapper *)0x0) {
          SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_remove_OnChange
                    (this_01,(Action_1_MV_Common_SpawnRoleModeType_ *)this_02,(MethodInfo *)0x0);
          pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
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
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                          ,0,0);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((
              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?();
          }
          pvVar9 = (void *)0x0;
          if (pGVar8 != (GameObject *)0x0) {
            pvVar9 = (pGVar8->fields)._.m_CachedPtr;
          }
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pcVar10 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
            uVar11 = func_?(&UNK_?);
            FUN_?(uVar11,0);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pcRam_? = pcVar10;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar9,0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* IEnumerator Start() */

IEnumerator *
Assembly-CSharp.dll::TeleportAvatar::TeleportAvatar_Start(TeleportAvatar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__TeleportAvatar___Start_d__16);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__TeleportAvatar___Start_d__16);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return pIVar1;
}


/* Void <Start>b__16_0(Single) */

void Assembly-CSharp.dll::TeleportAvatar::TeleportAvatar__Start_b__16_0
               (TeleportAvatar *this,float t,MethodInfo *method)

{
  pMVar1 = (this->fields).avatar;
  fVar2 = (float)FUN_?(t * _UNK_?);
  if (pMVar1 != (MVAvatarLocal *)0x0) {
    if ((pMVar1->fields)._.isHidden != 0) {
      return;
    }
    pAVar3 = (pMVar1->fields)._.avatar;
    if ((pAVar3 != (Avatar *)0x0) &&
       (this_00 = (pAVar3->fields).avatarFader, this_00 != (AvatarFader *)0x0)) {
      fVar2 = _UNK_? - fVar2 / _UNK_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__RemoveAt_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__TextureAtlasData);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_SM3);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_CubeModel);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      fVar4 = _UNK_?;
      if ((fVar2 == _UNK_?) && ((this_00->fields).fading == 0)) {
        return;
      }
      bVar5 = fVar2 == _UNK_?;
      (this_00->fields).fading = fVar2 < _UNK_?;
      if (bVar5) {
        (this_00->fields).changedShaders = 0;
        (this_00->fields).prevFading = 0;
      }
      pLVar6 = (this_00->fields).avatarMaterials;
      index = 0;
      if (pLVar6 != (List_1_UnityEngine_Material_ *)0x0) {
        lVar7 = 0x20;
        do {
          if ((pLVar6->fields)._size <= (int)index) {
            if ((this_00->fields).changedShaders == 0) {
              return;
            }
            (this_00->fields).prevFading = 1;
            return;
          }
          pLVar6 = (this_00->fields).avatarMaterials;
          if (pLVar6 == (List_1_UnityEngine_Material_ *)0x0) break;
          if ((uint)(pLVar6->fields)._size <= index) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pMVar9 = (pLVar6->fields)._items;
          if (pMVar9 == (Material__Array *)0x0) break;
          if ((uint)pMVar9->max_length <= index) {
            FUN_?();
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          this_01 = *(Material **)((longlong)pMVar9->vector + lVar7 + -0x20);
          pMStackX_20 = this_01;
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
          if (this_01 == (Material *)0x0) {
code_?:
            pLVar6 = (this_00->fields).avatarMaterials;
            if (pLVar6 == (List_1_UnityEngine_Material_ *)0x0) break;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__RemoveAt
                      ((List_1_System_Object_ *)pLVar6,index,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__RemoveAt_int_
                      );
            index = index - 1;
            lVar7 = lVar7 + -8;
          }
          else {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if ((this_01->fields)._.m_CachedPtr == (void *)0x0) goto code_?;
            if ((this_00->fields).prevFading == 0) {
              pSVar10 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_shader
                                  (this_01,(MethodInfo *)0x0);
              pSVar10 = AvatarFader::AvatarFader_GetShader
                                  (this_00,pSVar10,(this_00->fields).fading,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_shader
                        (this_01,pSVar10,(MethodInfo *)0x0);
              if ((pSVar10 == (Shader *)0x0) ||
                 (pSVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                                      ((Object_1 *)pSVar10,(MethodInfo *)0x0),
                 pSVar11 == (String *)0x0)) break;
              bVar12 = mscorlib.dll::System::String::String_Contains
                                (pSVar11,StringLiteral_CubeModel,(MethodInfo *)0x0);
              if (bVar12 != 0) {
                pSVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                                    ((Object_1 *)pSVar10,(MethodInfo *)0x0);
                if (pSVar11 == (String *)0x0) break;
                bVar12 = mscorlib.dll::System::String::String_Contains
                                  (pSVar11,StringLiteral_SM3,(MethodInfo *)0x0);
                if (*(int *)&(TypeInfo__TextureAtlasData->_1).field_0x1c == 0) {
                  FUN_?();
                }
                TextureAtlasData::TextureAtlasData_StreamAtlasDataToMaterial
                          (&pMStackX_20,bVar12,(MethodInfo *)0x0);
                this_01 = pMStackX_20;
              }
            }
            if (this_01 == (Material *)0x0) break;
            iVar13 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                              ((this_00->fields).transparencyProperty,(MethodInfo *)0x0);
            bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty
                              (this_01,iVar13,(MethodInfo *)0x0);
            if (bVar12 == 0) {
              iVar13 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                                ((this_00->fields).colorProperty,(MethodInfo *)0x0);
              bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty
                                (this_01,iVar13,(MethodInfo *)0x0);
              if (bVar12 == 0) {
                iVar13 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                                  ((this_00->fields).tintProperty,(MethodInfo *)0x0);
                bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty
                                  (this_01,iVar13,(MethodInfo *)0x0);
                if (bVar12 != 0) {
                  pCVar14 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                                      (&CStack_15,this_01,(this_00->fields).tintProperty,
                                       (MethodInfo *)0x0);
                  CStack_16.r = pCVar14->r;
                  CStack_16.g = pCVar14->g;
                  CStack_16.b = pCVar14->b;
                  CStack_16.a = fVar2;
                  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                            (this_01,(this_00->fields).tintProperty,&CStack_16,(MethodInfo *)0x0);
                }
              }
              else {
                pCVar14 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                                    (&CStack_17,this_01,(MethodInfo *)0x0);
                CStack_16.r = pCVar14->r;
                CStack_16.g = pCVar14->g;
                CStack_16.b = pCVar14->b;
                CStack_16.a = fVar2;
                UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                          (this_01,&CStack_16,(MethodInfo *)0x0);
              }
            }
            else {
              iVar13 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                                ((this_00->fields).transparencyProperty,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                        (this_01,iVar13,fVar4 - fVar2,(MethodInfo *)0x0);
            }
          }
          pLVar6 = (this_00->fields).avatarMaterials;
          index = index + 1;
          lVar7 = lVar7 + 8;
        } while (pLVar6 != (List_1_UnityEngine_Material_ *)0x0);
      }
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void <Start>b__16_1(Single) */

void Assembly-CSharp.dll::TeleportAvatar::TeleportAvatar__Start_b__16_1
               (TeleportAvatar *this,float t,MethodInfo *method)

{
  pMVar1 = (this->fields).avatar;
  fVar2 = (float)FUN_?(t * _UNK_?);
  fVar2 = fVar2 / _UNK_?;
  if (pMVar1 != (MVAvatarLocal *)0x0) {
    if ((pMVar1->fields)._.isHidden != 0) {
      return;
    }
    pAVar3 = (pMVar1->fields)._.avatar;
    if ((pAVar3 != (Avatar *)0x0) &&
       (this_00 = (pAVar3->fields).avatarFader, this_00 != (AvatarFader *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__RemoveAt_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__TextureAtlasData);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_SM3);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_CubeModel);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      fVar4 = _UNK_?;
      if ((fVar2 == _UNK_?) && ((this_00->fields).fading == 0)) {
        return;
      }
      bVar5 = fVar2 == _UNK_?;
      (this_00->fields).fading = fVar2 < _UNK_?;
      if (bVar5) {
        (this_00->fields).changedShaders = 0;
        (this_00->fields).prevFading = 0;
      }
      pLVar6 = (this_00->fields).avatarMaterials;
      index = 0;
      if (pLVar6 != (List_1_UnityEngine_Material_ *)0x0) {
        lVar7 = 0x20;
        do {
          if ((pLVar6->fields)._size <= (int)index) {
            if ((this_00->fields).changedShaders == 0) {
              return;
            }
            (this_00->fields).prevFading = 1;
            return;
          }
          pLVar6 = (this_00->fields).avatarMaterials;
          if (pLVar6 == (List_1_UnityEngine_Material_ *)0x0) break;
          if ((uint)(pLVar6->fields)._size <= index) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pMVar9 = (pLVar6->fields)._items;
          if (pMVar9 == (Material__Array *)0x0) break;
          if ((uint)pMVar9->max_length <= index) {
            FUN_?();
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          this_01 = *(Material **)((longlong)pMVar9->vector + lVar7 + -0x20);
          pMStackX_20 = this_01;
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
          if (this_01 == (Material *)0x0) {
code_?:
            pLVar6 = (this_00->fields).avatarMaterials;
            if (pLVar6 == (List_1_UnityEngine_Material_ *)0x0) break;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__RemoveAt
                      ((List_1_System_Object_ *)pLVar6,index,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__RemoveAt_int_
                      );
            index = index - 1;
            lVar7 = lVar7 + -8;
          }
          else {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if ((this_01->fields)._.m_CachedPtr == (void *)0x0) goto code_?;
            if ((this_00->fields).prevFading == 0) {
              pSVar10 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_shader
                                  (this_01,(MethodInfo *)0x0);
              pSVar10 = AvatarFader::AvatarFader_GetShader
                                  (this_00,pSVar10,(this_00->fields).fading,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_shader
                        (this_01,pSVar10,(MethodInfo *)0x0);
              if ((pSVar10 == (Shader *)0x0) ||
                 (pSVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                                      ((Object_1 *)pSVar10,(MethodInfo *)0x0),
                 pSVar11 == (String *)0x0)) break;
              bVar12 = mscorlib.dll::System::String::String_Contains
                                (pSVar11,StringLiteral_CubeModel,(MethodInfo *)0x0);
              if (bVar12 != 0) {
                pSVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                                    ((Object_1 *)pSVar10,(MethodInfo *)0x0);
                if (pSVar11 == (String *)0x0) break;
                bVar12 = mscorlib.dll::System::String::String_Contains
                                  (pSVar11,StringLiteral_SM3,(MethodInfo *)0x0);
                if (*(int *)&(TypeInfo__TextureAtlasData->_1).field_0x1c == 0) {
                  FUN_?();
                }
                TextureAtlasData::TextureAtlasData_StreamAtlasDataToMaterial
                          (&pMStackX_20,bVar12,(MethodInfo *)0x0);
                this_01 = pMStackX_20;
              }
            }
            if (this_01 == (Material *)0x0) break;
            iVar13 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                              ((this_00->fields).transparencyProperty,(MethodInfo *)0x0);
            bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty
                              (this_01,iVar13,(MethodInfo *)0x0);
            if (bVar12 == 0) {
              iVar13 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                                ((this_00->fields).colorProperty,(MethodInfo *)0x0);
              bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty
                                (this_01,iVar13,(MethodInfo *)0x0);
              if (bVar12 == 0) {
                iVar13 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                                  ((this_00->fields).tintProperty,(MethodInfo *)0x0);
                bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty
                                  (this_01,iVar13,(MethodInfo *)0x0);
                if (bVar12 != 0) {
                  pCVar14 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                                      (&CStack_15,this_01,(this_00->fields).tintProperty,
                                       (MethodInfo *)0x0);
                  CStack_16.r = pCVar14->r;
                  CStack_16.g = pCVar14->g;
                  CStack_16.b = pCVar14->b;
                  CStack_16.a = fVar2;
                  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                            (this_01,(this_00->fields).tintProperty,&CStack_16,(MethodInfo *)0x0);
                }
              }
              else {
                pCVar14 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                                    (&CStack_17,this_01,(MethodInfo *)0x0);
                CStack_16.r = pCVar14->r;
                CStack_16.g = pCVar14->g;
                CStack_16.b = pCVar14->b;
                CStack_16.a = fVar2;
                UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                          (this_01,&CStack_16,(MethodInfo *)0x0);
              }
            }
            else {
              iVar13 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                                ((this_00->fields).transparencyProperty,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                        (this_01,iVar13,fVar4 - fVar2,(MethodInfo *)0x0);
            }
          }
          pLVar6 = (this_00->fields).avatarMaterials;
          index = index + 1;
          lVar7 = lVar7 + 8;
        } while (pLVar6 != (List_1_UnityEngine_Material_ *)0x0);
      }
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* TeleportAvatar() */

void Assembly-CSharp.dll::TeleportAvatar::TeleportAvatar__ctor
               (TeleportAvatar *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).teleportTime = 2.0;
  (this->fields)._TeleporterOrigin_k__BackingField = -1;
  (this->fields)._TeleporterDestination_k__BackingField = -1;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (ppMVar16 = ppMVar15 + 0x3052af36,
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}

