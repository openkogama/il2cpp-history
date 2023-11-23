
/* Boolean Delete(MVWorldObjectClientManager, String ByRef) */

bool Assembly-CSharp.dll::MVSpawnPoint::MVSpawnPoint_Delete
               (MVSpawnPoint *this,MVWorldObjectClientManager *worldObjectClientManager,
               String **errorText,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_You_cannot_delete_the_last_spawn);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
    iVar2 = MVTeamManager::MVTeamManager_get_NumSpawnPoint(this_00,(MethodInfo *)0x0);
    if (iVar2 < 2) {
      *errorText = StringLiteral_You_cannot_delete_the_last_spawn;
      func_?();
      return 0;
    }
    if ((pGRam00000088 != (GameObject *)0x0) &&
       (UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGRam00000088,0,(MethodInfo *)0x0), iVar2 = iRam_?, in_stack_3 != 0)
       ) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      if (*(Dictionary_2_System_Int32_System_Single_ **)(in_stack_3 + 8) !=
          (Dictionary_2_System_Int32_System_Single_ *)0x0) {
        bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                          (*(Dictionary_2_System_Int32_System_Single_ **)(in_stack_3 + 8),
                           iVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                          );
        if (bVar4 == 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_trying_to_unregister_none_existi,(MethodInfo *)0x0);
          return 1;
        }
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0)
        ;
        if (pMVar5 != (MVNetworkGame_OperationRequests *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            func_?();
            func_?();
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          this_01 = (Dictionary_2_System_Byte_System_Object_ *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object___ctor
                    (this_01,
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                    );
          value = (Object *)func_?();
          if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object__Add
                      (this_01,0x16,value,
                       MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                      );
            pPVar6 = (pMVar5->fields).peer;
            if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor ==
                0) {
              func_?();
            }
            if (pPVar6 != (PhotonPeer *)0x0) {
              (*(code *)(pPVar6->klass->vtable).SendOperation.method)(pPVar6,1);
              return 1;
            }
          }
        }
      }
    }
  }
  uVar7 = func_?(&stack0xfffffffc);
  func_?(uVar7);
  pcVar8 = (code *)swi(3);
  bVar4 = (*pcVar8)();
  return bVar4;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVSpawnPoint::MVSpawnPoint_Destroy(MVSpawnPoint *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
  if ((this->fields).isInWorld != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_Quitting_k__BackingField == 0) {
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (this_00 = (pMVar1->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
        team = MVSpawnPoint_WOTypeToTeamIndex((this->fields)._._._.type,(MethodInfo *)0x0);
        MVTeamManager::MVTeamManager_OnRemoveSpawnPoint
                  (this_00,(this->fields)._._._.id,team,(MethodInfo *)this);
        return;
      }
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVSpawnPoint::MVSpawnPoint_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,MVSpawnPoint *this,float gridSize,
                    Vector3 position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  uVar1 = (TypeInfo__UnityEngine__Vector3->static_fields->oneVector).x;
  fVar2 = (TypeInfo__UnityEngine__Vector3->static_fields->oneVector).z;
  this_00 = (this->fields)._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                ((Quaternion *)&stack0xffffffe0,this_01,(MethodInfo *)0x0);
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      worldPosition.z = position.z;
      worldPosition.x = position.x;
      worldPosition.y = position.y;
      rotation.y = 2.0;
      rotation.x = (float)uVar1;
      rotation.z = fVar2;
      rotation.w = 0.0;
      scale.y = 2.0;
      scale.x = (float)uVar1;
      scale.z = fVar2;
      pVVar3 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                         (&position,worldPosition,rotation,gridSize,scale,(MethodInfo *)0x0);
      fVar4 = pVVar3->y;
      fVar2 = pVVar3->z;
      __return_storage_ptr__->x = pVVar3->x;
      __return_storage_ptr__->y = fVar4;
      __return_storage_ptr__->z = fVar2;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar5)();
  return pVVar3;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVSpawnPoint::MVSpawnPoint_Initialize
               (MVSpawnPoint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&MethodInfo__System__Nullable<bool>__Nullable_bool_);
    func_?(&StringLiteral_onlyFirstSpawn);
    cRam_? = '\x01';
  }
  pMVar1 = this;
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
           (pMVar1->fields)._._._.data;
  (pMVar1->fields).isInWorld = 1;
  if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (pDVar2,(Object *)StringLiteral_onlyFirstSpawn,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar3 != 0) {
      pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (pMVar1->fields)._._._.data;
      if (pDVar2 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
      goto code_?;
      this = (MVSpawnPoint *)
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
      ;
      TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDVar2,(Object *)StringLiteral_onlyFirstSpawn,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar4.m_Index != 0) {
        TVar5.m_Index = 0;
        if (*(Boolean__Class **)TVar4.m_Index == TypeInfo__System__Boolean) {
          TVar5 = TVar4;
        }
        if (TVar5.m_Index != 0) {
          if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
              (TypeInfo__System__Boolean->_0).element_class) goto code_?;
          method = (MethodInfo *)&UNK_?;
          piVar6 = (int8_t *)func_?();
          this = (MVSpawnPoint *)((uint)this & 0xffff0000);
          mscorlib.dll::System::Nullable`1[SByte]::Nullable_1_SByte___ctor
                    ((Nullable_1_SByte_ *)&this,*piVar6,
                     MethodInfo__System__Nullable<bool>__Nullable_bool_);
          (pMVar1->fields).spawnPointOnlyFirstDeath = this._0_2_;
        }
      }
    }
    pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar7 != (MVNetworkGame *)0x0) {
      this_00 = (MethodInfo *)(pMVar7->fields).teamManager;
      switch((pMVar1->fields)._._._.type) {
      case 0x27:
        team = MVTeam__Enum_Red;
        break;
      case 0x28:
        team = MVTeam__Enum_Green;
        break;
      case 0x29:
        team = MVTeam__Enum_Yellow;
        break;
      case 0x2a:
        team = MVTeam__Enum_Blue;
        break;
      default:
        team = MVTeam__Enum_None;
      }
      if (this_00 != (MethodInfo *)0x0) {
        this = (MVSpawnPoint *)&UNK_?;
        method = this_00;
        MVTeamManager::MVTeamManager_OnAddSpawnPoint
                  ((MVTeamManager *)this_00,(pMVar1->fields)._._._.id,team,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  TVar4.m_Index = (int32_t)extraout_EDX;
code_?:
  this = (MVSpawnPoint *)&UNK_?;
  method = (MethodInfo *)TVar4.m_Index;
  func_?();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* MVTeam WOTypeToTeamIndex(WorldObjectType) */

MVTeam__Enum
Assembly-CSharp.dll::MVSpawnPoint::MVSpawnPoint_WOTypeToTeamIndex
          (WorldObjectType__Enum type,MethodInfo *method)

{
  switch(type) {
  case WorldObjectType__Enum_SpawnPointRed:
    return MVTeam__Enum_Red;
  case WorldObjectType__Enum_SpawnPointGreen:
    return MVTeam__Enum_Green;
  case WorldObjectType__Enum_SpawnPointYellow:
    return MVTeam__Enum_Yellow;
  case WorldObjectType__Enum_SpawnPointBlue:
    return MVTeam__Enum_Blue;
  default:
    return MVTeam__Enum_None;
  }
}


/* MVSpawnPoint(Dictionary`2[System.Object,System.Object], ObjectPrefab,
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVSpawnPoint::MVSpawnPoint__ctor
               (MVSpawnPoint *this,Dictionary_2_System_Object_System_Object_ *data,
               ObjectPrefab *prefabObject,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  MVLogicObject::MVLogicObject__ctor
            ((MVLogicObject *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
  *(undefined4 *)&(this->fields)._._.interactionFlags = 0xa101;
  *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = 0;
  return;
}


/* Boolean get_SpawnPointOnlyFirstDeath() */

bool Assembly-CSharp.dll::MVSpawnPoint::MVSpawnPoint_get_SpawnPointOnlyFirstDeath
               (MVSpawnPoint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&MethodInfo__System__Nullable<bool>__Nullable_bool_);
    func_?(&MethodInfo__System__Nullable<bool>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<bool>__get_Value__);
    func_?(&StringLiteral_onlyFirstSpawn);
    cRam_? = '\x01';
  }
  pMVar1 = this;
  if ((this->fields).spawnPointOnlyFirstDeath.hasValue != 0) {
    bVar2 = mscorlib.dll::System::Nullable`1[SByte]::Nullable_1_SByte__get_Value
                      ((Nullable_1_SByte_ *)&(this->fields).spawnPointOnlyFirstDeath,
                       MethodInfo__System__Nullable<bool>__get_Value__);
    return bVar2;
  }
  pDVar3 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields)._._._.data
  ;
  pSVar4 = (String *)0x0;
  if (pDVar3 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
code_?:
    func_?();
    pcVar5 = (code *)swi(3);
    bVar2 = (*pcVar5)();
    return bVar2;
  }
  bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::TextureId]::
          Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                    (pDVar3,(Object *)StringLiteral_onlyFirstSpawn,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                    );
  if (bVar2 != 0) {
    pDVar3 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (pMVar1->fields)._._._.data;
    if (pDVar3 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    pSVar4 = StringLiteral_onlyFirstSpawn;
    this = (MVSpawnPoint *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
           UIElements::TextureId]::
           Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                     (pDVar3,(Object *)StringLiteral_onlyFirstSpawn,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
    if (this != (MVSpawnPoint *)0x0) {
      TVar6.m_Index = 0;
      if (*(Boolean__Class **)this == TypeInfo__System__Boolean) {
        TVar6 = (TextureId)this;
      }
      if (TVar6.m_Index != 0) {
        if (*(Il2CppClass **)(*(int *)this + 0x20) != (TypeInfo__System__Boolean->_0).element_class)
        {
          this = (MVSpawnPoint *)TypeInfo__System__Boolean;
          method = unaff_EDI;
          func_?();
          goto code_?;
        }
        func_?();
        pSVar4 = (String *)((uint)pSVar4 & 0xffffff00);
      }
    }
  }
  method = MethodInfo__System__Nullable<bool>__Nullable_bool_;
  this = (MVSpawnPoint *)((uint)pSVar4 & 0xffff0000);
  mscorlib.dll::System::Nullable`1[SByte]::Nullable_1_SByte___ctor
            ((Nullable_1_SByte_ *)&this,0,MethodInfo__System__Nullable<bool>__Nullable_bool_);
  (pMVar1->fields).spawnPointOnlyFirstDeath = this._0_2_;
  this = (MVSpawnPoint *)&(pMVar1->fields).spawnPointOnlyFirstDeath;
  method = MethodInfo__System__Nullable<bool>__get_Value__;
  bVar2 = mscorlib.dll::System::Nullable`1[SByte]::Nullable_1_SByte__get_Value
                    ((Nullable_1_SByte_ *)this,MethodInfo__System__Nullable<bool>__get_Value__);
  return bVar2;
}

