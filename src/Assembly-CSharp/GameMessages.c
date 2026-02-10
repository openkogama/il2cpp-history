
/* Dictionary`2[System.Object,System.Object] MakePlayerKilledMessage(Int32, Int32,
   PlayerKilledByType) */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::GameMessages::GameMessages_MakePlayerKilledMessage
          (int32_t avatarId,int32_t killerId,PlayerKilledByType__Enum weaponType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
          *)FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  uVar1 = uStackX_8;
  lVar2 = lRam_?;
  uStackX_8 = uStackX_8 & 0xffffff00;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      pOVar3 = (Object *)FUN_?(lRam_?);
      FUN_?(pOVar3 + 1,&uStackX_8,(longlong)*(int *)(lVar2 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        method = (MethodInfo *)0xADDR;
        uVar1 = (uint)((ulonglong)(pOVar3 + 1) >> 0xc);
        uVar4 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar1 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
    }
    else {
      pOVar3 = (Object *)0x0;
    }
  }
  else {
    pOVar3 = (Object *)(CONCAT44(uStackX_c,uVar1) & 0xffffffffffffff00);
  }
  uStackX_8 = avatarId;
  pOVar8 = (Object *)FUN_?(uRam_?,&uStackX_8);
  if (this == (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)0x0) {
    FUN_?();
    pcVar9 = (code *)swi(3);
    pDVar10 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar9)();
    return pDVar10;
  }
  uVar11 = CONCAT71((int7)((ulonglong)method >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,pOVar3,pOVar8,
             (InsertionBehavior__Enum)uVar11,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uStackX_8 = CONCAT31(uStackX_8._1_3_,1);
  pOVar3 = (Object *)FUN_?(lRam_?,&uStackX_8);
  uStackX_8 = killerId;
  pOVar8 = (Object *)FUN_?(uRam_?,&uStackX_8);
  uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,pOVar3,pOVar8,
             (InsertionBehavior__Enum)uVar11,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uStackX_8._0_1_ = 2;
  pOVar3 = (Object *)FUN_?(lRam_?,&uStackX_8);
  uStackX_8 = CONCAT31(uStackX_8._1_3_,(char)weaponType);
  pOVar8 = (Object *)FUN_?(lRam_?,&uStackX_8);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,pOVar3,pOVar8,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar11 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  return (Dictionary_2_System_Object_System_Object_ *)this;
}


/* GameMessages+AchievementGetMessage
   ParseAchievementGetMessage(Dictionary`2[System.Object,System.Object]) */

GameMessages_AchievementGetMessage
Assembly-CSharp.dll::GameMessages::GameMessages_ParseAchievementGetMessage
          (Dictionary_2_System_Object_System_Object_ *package,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__AchievementType);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = lRam_?;
  uStackX_8 = 0;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      pOVar2 = (Object *)FUN_?(lRam_?);
      FUN_?(pOVar2 + 1,&uStackX_8,(longlong)*(int *)(lVar1 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
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
    }
    else {
      pOVar2 = (Object *)0x0;
    }
  }
  else {
    pOVar2 = (Object *)((ulonglong)uStackX_9 << 8);
  }
  if ((package != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (package,pOVar2,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pOVar2 != (Object *)0x0)) {
    if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar2,lRam_?);
      pcVar7 = (code *)swi(3);
      GVar8 = (GameMessages_AchievementGetMessage)(*pcVar7)();
      return GVar8;
    }
    iVar9 = *(int32_t *)&pOVar2[1].klass;
    uStackX_8 = 4;
    pOVar2 = (Object *)FUN_?(lRam_?,&uStackX_8);
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (package,pOVar2,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar2 != (Object *)0x0) {
      if ((pOVar2->klass->_0).element_class !=
          (TypeInfo__MV__Common__AchievementType->_0).element_class) {
        FUN_?(pOVar2,TypeInfo__MV__Common__AchievementType);
        pcVar7 = (code *)swi(3);
        GVar8 = (GameMessages_AchievementGetMessage)(*pcVar7)();
        return GVar8;
      }
      GVar8.achievementType = *(int32_t *)&pOVar2[1].klass;
      GVar8.playerId = iVar9;
      return GVar8;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  GVar8 = (GameMessages_AchievementGetMessage)(*pcVar7)();
  return GVar8;
}


/* GameMessages+CheckpointMessage ParseCheckpointMessage(Dictionary`2[System.Object,System.Object])
    */

GameMessages_CheckpointMessage
Assembly-CSharp.dll::GameMessages::GameMessages_ParseCheckpointMessage
          (Dictionary_2_System_Object_System_Object_ *package,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = lRam_?;
  uStackX_8 = 0;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      pOVar2 = (Object *)FUN_?(lRam_?);
      FUN_?(pOVar2 + 1,&uStackX_8,(longlong)*(int *)(lVar1 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
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
    }
    else {
      pOVar2 = (Object *)0x0;
    }
  }
  else {
    pOVar2 = (Object *)((ulonglong)uStackX_9 << 8);
  }
  if ((package != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (package,pOVar2,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pOVar2 != (Object *)0x0)) {
    if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar2,lRam_?);
      pcVar7 = (code *)swi(3);
      iVar8 = (*pcVar7)();
      return (GameMessages_CheckpointMessage)iVar8;
    }
    return (GameMessages_CheckpointMessage)*(int32_t *)&pOVar2[1].klass;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  iVar8 = (*pcVar7)();
  return (GameMessages_CheckpointMessage)iVar8;
}


/* GameMessages+CollectibleMessage
   ParseCollectibleMessage(Dictionary`2[System.Object,System.Object]) */

GameMessages_CollectibleMessage
Assembly-CSharp.dll::GameMessages::GameMessages_ParseCollectibleMessage
          (Dictionary_2_System_Object_System_Object_ *package,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = lRam_?;
  uStackX_8 = 0;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      pOVar2 = (Object *)FUN_?(lRam_?);
      FUN_?(pOVar2 + 1,&uStackX_8,(longlong)*(int *)(lVar1 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
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
    }
    else {
      pOVar2 = (Object *)0x0;
    }
  }
  else {
    pOVar2 = (Object *)((ulonglong)uStackX_9 << 8);
  }
  if ((package != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (package,pOVar2,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pOVar2 != (Object *)0x0)) {
    if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar2,lRam_?);
      pcVar7 = (code *)swi(3);
      iVar8 = (*pcVar7)();
      return (GameMessages_CollectibleMessage)iVar8;
    }
    return (GameMessages_CollectibleMessage)*(int32_t *)&pOVar2[1].klass;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  iVar8 = (*pcVar7)();
  return (GameMessages_CollectibleMessage)iVar8;
}


/* GameMessages+PlayerJoinMessage ParsePlayerJoinMessage(Dictionary`2[System.Object,System.Object])
    */

GameMessages_PlayerJoinMessage
Assembly-CSharp.dll::GameMessages::GameMessages_ParsePlayerJoinMessage
          (Dictionary_2_System_Object_System_Object_ *package,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = lRam_?;
  uStackX_8 = 0;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      pOVar2 = (Object *)FUN_?(lRam_?);
      FUN_?(pOVar2 + 1,&uStackX_8,(longlong)*(int *)(lVar1 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
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
    }
    else {
      pOVar2 = (Object *)0x0;
    }
  }
  else {
    pOVar2 = (Object *)((ulonglong)uStackX_9 << 8);
  }
  if ((package != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (package,pOVar2,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pOVar2 != (Object *)0x0)) {
    if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar2,lRam_?);
      pcVar7 = (code *)swi(3);
      iVar8 = (*pcVar7)();
      return (GameMessages_PlayerJoinMessage)iVar8;
    }
    return (GameMessages_PlayerJoinMessage)*(int32_t *)&pOVar2[1].klass;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  iVar8 = (*pcVar7)();
  return (GameMessages_PlayerJoinMessage)iVar8;
}


/* GameMessages+PlayerLeftMessage ParsePlayerLeftMessage(Dictionary`2[System.Object,System.Object])
    */

GameMessages_PlayerLeftMessage *
Assembly-CSharp.dll::GameMessages::GameMessages_ParsePlayerLeftMessage
          (GameMessages_PlayerLeftMessage *__return_storage_ptr__,
          Dictionary_2_System_Object_System_Object_ *package,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  __return_storage_ptr__->userName = (String *)0x0;
  lVar1 = lRam_?;
  pSVar2 = (String *)0x0;
  uStackX_8 = 0;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       (pSVar3 = pSVar2, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      pSVar3 = (String *)FUN_?(lRam_?);
      FUN_?(&pSVar3->fields,&uStackX_8,(longlong)*(int *)(lVar1 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)&pSVar3->fields >> 0xc);
        lVar1 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar1 + 0xADDR);
          puVar6 = (ulonglong *)(lVar1 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
    }
  }
  else {
    pSVar3 = (String *)((ulonglong)uStackX_9 << 8);
  }
  if ((package != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (package,(Object *)pSVar3,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pOVar8 != (Object *)0x0)) {
    if ((pOVar8->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar8);
      pcVar9 = (code *)swi(3);
      pGVar10 = (GameMessages_PlayerLeftMessage *)(*pcVar9)();
      return pGVar10;
    }
    __return_storage_ptr__->playerId = *(int32_t *)&pOVar8[1].klass;
    uStackX_8 = 3;
    pOVar8 = (Object *)FUN_?(lRam_?,&uStackX_8);
    pSVar3 = (String *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (package,pOVar8,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pSVar3 == (String *)0x0) {
      __return_storage_ptr__->userName = (String *)0x0;
    }
    else {
      pSVar11 = pSVar2;
      if (pSVar3->klass == pSRam0000000182dc2f60) {
        pSVar11 = pSVar3;
      }
      if (pSVar11 == (String *)0x0) {
        FUN_?(pSVar3);
        pcVar9 = (code *)swi(3);
        pGVar10 = (GameMessages_PlayerLeftMessage *)(*pcVar9)();
        return pGVar10;
      }
      __return_storage_ptr__->userName = pSVar11;
      if (pSVar3->klass == pSRam0000000182dc2f60) {
        pSVar2 = pSVar3;
      }
      if (pSVar2 == (String *)0x0) {
        FUN_?(pSVar3);
        pcVar9 = (code *)swi(3);
        pGVar10 = (GameMessages_PlayerLeftMessage *)(*pcVar9)();
        return pGVar10;
      }
    }
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&__return_storage_ptr__->userName >> 0xc);
      lVar1 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar1 + 0xADDR);
        puVar6 = (ulonglong *)(lVar1 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  pGVar10 = (GameMessages_PlayerLeftMessage *)(*pcVar9)();
  return pGVar10;
}

