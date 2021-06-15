
/* KoGaMaPackageClient GetKoGaMaPackageFromItem(MVItem) */

KoGaMaPackageClient *
Assembly-CSharp.dll::ARepository::ARepository_GetKoGaMaPackageFromItem
          (MVItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (item != (MVItem *)0x0) {
    buffer = (item->fields).data;
    this = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
              (this,buffer,(MethodInfo *)0x0);
    pKVar1 = (KoGaMaPackageClient *)func_?(TypeInfo__KoGaMaPackageClient);
    KoGaMaPackageClient::KoGaMaPackageClient__ctor(pKVar1,this,0,(MethodInfo *)0x0);
    if (pKVar1 != (KoGaMaPackageClient *)0x0) {
      KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize(pKVar1,(MethodInfo *)0x0);
      return pKVar1;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pKVar1 = (KoGaMaPackageClient *)(*pcVar2)();
  return pKVar1;
}


/* Void GetWorldObjectTypeFromMVItemData(Byte[], ARepository+OnWorldObjectTypeExtracted) */

void Assembly-CSharp.dll::ARepository::ARepository_GetWorldObjectTypeFromMVItemData
               (Byte__Array *data,ARepository_OnWorldObjectTypeExtracted *onWorldObjectExtracted,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ARepository___GetWorldObjectTypeFromMVItemData_c__AnonStorey0;
  this = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  if (this != (ScaleAnimationBase *)0x0) {
    (this->fields)._._._._.m_CachedPtr = onWorldObjectExtracted;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__ARepository___GetWorldObjectTypeFromMVItemData_c__AnonStorey0____m__0_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
               ,
               MethodInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>__UnityAction_System__Object__void__
              );
    this_01 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
              (this_01,data,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
      func_?();
    }
    KoGaMaDataHandler::KoGaMaDataHandler_GetKoGaMaData
              (this_01,(UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
                        *)this_00,0,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void MoveItem(Int32, Int32) */

void Assembly-CSharp.dll::ARepository::ARepository_MoveItem
               (ARepository *this,int32_t itemId,int32_t slotIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  repository = this;
  this = (ARepository *)itemId;
  this_00 = (repository->fields).itemIDToInventorySlotIndex;
  key = (String *)func_?(TypeInfo__System__Int32,&this);
  itemId = slotIndex;
  value = (Theme *)func_?(TypeInfo__System__Int32,&itemId);
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
    Dictionary_2_System_String_Theme__set_Item
              ((Dictionary_2_System_String_Theme_ *)this_00,key,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    this_01 = (repository->fields).OnRepositoryChange;
    if (this_01 != (ARepository_OnRepositoryChangeDelegate *)0x0) {
      ARepository+OnRepositoryChangeDelegate::ARepository_OnRepositoryChangeDelegate_Invoke
                (this_01,repository,(MethodInfo *)0x0);
    }
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void NotifyRepositoryChange() */

void Assembly-CSharp.dll::ARepository::ARepository_NotifyRepositoryChange
               (ARepository *this,MethodInfo *method)

{
  this_00 = (this->fields).OnRepositoryChange;
  if (this_00 != (ARepository_OnRepositoryChangeDelegate *)0x0) {
    ARepository+OnRepositoryChangeDelegate::ARepository_OnRepositoryChangeDelegate_Invoke
              (this_00,this,(MethodInfo *)0x0);
  }
  return;
}


/* Void RemoveItem(Int32) */

void Assembly-CSharp.dll::ARepository::ARepository_RemoveItem
               (ARepository *this,int32_t itemId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  repository = this;
  this = (ARepository *)itemId;
  this_00 = (repository->fields).itemIDToInventorySlotIndex;
  key = (String *)func_?(TypeInfo__System__Int32,&this);
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Remove
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)this_00,key,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
              );
    this_01 = (repository->fields).OnRepositoryChange;
    if (this_01 != (ARepository_OnRepositoryChangeDelegate *)0x0) {
      ARepository+OnRepositoryChangeDelegate::ARepository_OnRepositoryChangeDelegate_Invoke
                (this_01,repository,(MethodInfo *)0x0);
    }
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SwapItems(Int32, Int32) */

void Assembly-CSharp.dll::ARepository::ARepository_SwapItems
               (ARepository *this,int32_t itemId1,int32_t itemId2,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = itemId1;
  repository = this;
  pDVar2 = (this->fields).itemIDToInventorySlotIndex;
  this = (ARepository *)itemId1;
  pTVar3 = (Type *)func_?(TypeInfo__System__Int32,&this);
  if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)pDVar2,pTVar3,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar5 = CONCAT44(TypeInfo__System__Int32,pPVar4);
    if (pPVar4 != (Pool *)0x0) {
      if ((pPVar4->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      puVar6 = (undefined4 *)func_?(pPVar4);
      puVar7 = (undefined *)*puVar6;
      pDVar2 = (repository->fields).itemIDToInventorySlotIndex;
      itemId1 = iVar1;
      pSVar8 = (String *)func_?(TypeInfo__System__Int32,&itemId1);
      this_00 = (repository->fields).itemIDToInventorySlotIndex;
      iStack_9 = itemId2;
      pTVar3 = (Type *)func_?(TypeInfo__System__Int32,&iStack_9);
      if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           ((Dictionary_2_System_Type_Pool_ *)this_00,pTVar3,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        uVar5 = CONCAT44(TypeInfo__System__Int32,pPVar4);
        if (pPVar4 != (Pool *)0x0) {
          if ((pPVar4->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          puVar6 = (undefined4 *)func_?(pPVar4);
          uStack_10 = *puVar6;
          pTVar11 = (Theme *)func_?(TypeInfo__System__Int32,&uStack_10);
          if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
            Dictionary_2_System_String_Theme__set_Item
                      ((Dictionary_2_System_String_Theme_ *)pDVar2,pSVar8,pTVar11,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
            pDVar2 = (repository->fields).itemIDToInventorySlotIndex;
            puStack_12 = puVar7;
            pSVar8 = (String *)func_?(TypeInfo__System__Int32,&stack0xffffffe8);
            pTVar11 = (Theme *)func_?(TypeInfo__System__Int32,&puStack_12);
            if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
              Dictionary_2_System_String_Theme__set_Item
                        ((Dictionary_2_System_String_Theme_ *)pDVar2,pSVar8,pTVar11,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                        );
              this_01 = (repository->fields).OnRepositoryChange;
              if (this_01 != (ARepository_OnRepositoryChangeDelegate *)0x0) {
                ARepository+OnRepositoryChangeDelegate::
                ARepository_OnRepositoryChangeDelegate_Invoke(this_01,repository,(MethodInfo *)0x0);
              }
              return;
            }
          }
        }
      }
    }
  }
  uVar5 = func_?(0);
code_?:
  func_?(uVar5);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* ARepository() */

void Assembly-CSharp.dll::ARepository::ARepository__ctor(ARepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  this_00 = (Dictionary_2_System_Int32_System_String_ *)
            func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_System::String>)
  ;
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Dictionary__
            );
  (this->fields).PlanetOwnershipTypes = this_00;
  this_01 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  (this->fields).itemIDToInventorySlotIndex = this_01;
  return;
}

