
/* Void Activate(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+ReviveWaitMode::MVAvatarLocal_ReviveWaitMode_Activate
               (MVAvatarLocal_ReviveWaitMode *this,AvatarRuntimeState__Enum fromMode,
               MethodInfo *method)

{
  aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,(char)fromMode);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IAvatarCameraController);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Idle);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if (pMVar1 != (MVAvatarLocal *)0x0) {
    this_00 = (pMVar1->fields)._.SpawnRoleModeTypes;
    aiStackX_10[0] = (this->fields)._.modeTypes;
    value = (Object *)FUN_?(uRam_?,aiStackX_10);
    if (this_00 != (MVRuntimeDataVariable *)0x0) {
      MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(this_00,value,(MethodInfo *)0x0);
      pMVar1 = (this->fields)._.mvAvatar;
      if (pMVar1 != (MVAvatarLocal *)0x0) {
        MVAvatarLocal::MVAvatarLocal_ResetAvatar(pMVar1,(MethodInfo *)0x0);
        pMVar1 = (this->fields)._.mvAvatar;
        if (pMVar1 != (MVAvatarLocal *)0x0) {
          pAVar2 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0);
          if ((pAVar2 != (AvatarLocal *)0x0) &&
             (pIVar3 = (pAVar2->fields).avatarCameraController,
             pIVar3 != (IAvatarCameraController *)0x0)) {
            FUN_?(2,TypeInfo__IAvatarCameraController,pIVar3,0x13);
            pMVar1 = (this->fields)._.mvAvatar;
            if (pMVar1 != (MVAvatarLocal *)0x0) {
              MVAvatarLocal::MVAvatarLocal_SetAnimation(pMVar1,StringLiteral_Idle,(MethodInfo *)0x0)
              ;
              pMVar1 = (this->fields)._.mvAvatar;
              if (pMVar1 != (MVAvatarLocal *)0x0) {
                if ((pMVar1->fields)._.isHidden == 0) {
                  pAVar4 = (pMVar1->fields)._.avatar;
                  if ((pAVar4 == (Avatar *)0x0) ||
                     (this_01 = (pAVar4->fields).avatarFader, this_01 == (AvatarFader *)0x0))
                  goto code_?;
                  AvatarFader::AvatarFader_SetTransparency(this_01,_UNK_?,(MethodInfo *)0x0)
                  ;
                }
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void DeActivate(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+ReviveWaitMode::MVAvatarLocal_ReviveWaitMode_DeActivate
               (MVAvatarLocal_ReviveWaitMode *this,AvatarRuntimeState__Enum toMode,
               MethodInfo *method)

{
  fVar1 = _UNK_?;
  pMVar2 = (this->fields)._.mvAvatar;
  if (pMVar2 != (MVAvatarLocal *)0x0) {
    if ((pMVar2->fields)._.isHidden != 0) {
      return;
    }
    pAVar3 = (pMVar2->fields)._.avatar;
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
      if ((fVar1 == _UNK_?) && ((this_00->fields).fading == 0)) {
        return;
      }
      bVar5 = fVar1 == _UNK_?;
      (this_00->fields).fading = fVar1 < _UNK_?;
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
                  CStack_16.a = fVar1;
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
                CStack_16.a = fVar1;
                UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                          (this_01,&CStack_16,(MethodInfo *)0x0);
              }
            }
            else {
              iVar13 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                                ((this_00->fields).transparencyProperty,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                        (this_01,iVar13,fVar4 - fVar1,(MethodInfo *)0x0);
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


/* MVAvatarLocal+ReviveWaitMode(MVAvatarLocal) */

void Assembly-CSharp.dll::MVAvatarLocal+ReviveWaitMode::MVAvatarLocal_ReviveWaitMode__ctor
               (MVAvatarLocal_ReviveWaitMode *this,MVAvatarLocal *mvAvatar,MethodInfo *method)

{
  bVar1 = iRam_? == 0;
  (this->fields)._.mvAvatar = mvAvatar;
  if (bVar1) {
    (this->fields)._.modeTypes = 4;
    return;
  }
  uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
  puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
  do {
    uVar4 = *puVar3;
    LOCK();
    uVar5 = *puVar3;
    if (uVar4 == uVar5) {
      *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
    }
    UNLOCK();
  } while (uVar4 != uVar5);
  (this->fields)._.modeTypes = 4;
  return;
}

