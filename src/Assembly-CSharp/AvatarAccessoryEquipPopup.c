
/* Void DontEquip() */

void Assembly-CSharp.dll::AvatarAccessoryEquipPopup::AvatarAccessoryEquipPopup_DontEquip
               (AvatarAccessoryEquipPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarAccessoryEquipPopup____c___DontEquip_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarAccessoryEquipPopup____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__AvatarAccessoryEquipPopup____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AvatarAccessoryEquipPopup____c);
  }
  this_00 = TypeInfo__AvatarAccessoryEquipPopup____c->static_fields->__9__10_0;
  if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__AvatarAccessoryEquipPopup____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AvatarAccessoryEquipPopup____c);
    }
    object = TypeInfo__AvatarAccessoryEquipPopup____c->static_fields->__9;
    this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
               MethodInfo__AvatarAccessoryEquipPopup____c___DontEquip_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AvatarAccessoryEquipPopup____c->static_fields->__9__10_0 = this_00;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&TypeInfo__AvatarAccessoryEquipPopup____c->static_fields->__9__10_0
                    >> 0xc);
      puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar3 = *puVar2;
        LOCK();
        uVar4 = *puVar2;
        if (uVar3 == uVar4) {
          *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (uVar3 != uVar4);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pUVar5 = (this->fields).resultCallback;
  if (pUVar5 == (UnityAction *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pUVar5->fields)._._.invoke_impl)((pUVar5->fields)._._.method_code,(pUVar5->fields)._._.method);
  return;
}


/* Void Equip() */

void Assembly-CSharp.dll::AvatarAccessoryEquipPopup::AvatarAccessoryEquipPopup_Equip
               (AvatarAccessoryEquipPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__AvatarAccessoryEquipPopup___Equip_b__9_0_UnityEngine__EventSystems__IAttachToBody__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAttachToBody>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAttachToBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAttachToBody>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarAccessoryEquipPopup____c___Equip_b__9_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarAccessoryEquipPopup____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAttachToBody>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__AvatarAccessoryEquipPopup___Equip_b__9_0_UnityEngine__EventSystems__IAttachToBody__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAttachToBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAttachToBody>_
            );
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__AvatarAccessoryEquipPopup____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AvatarAccessoryEquipPopup____c);
  }
  this_01 = TypeInfo__AvatarAccessoryEquipPopup____c->static_fields->__9__9_1;
  if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__AvatarAccessoryEquipPopup____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AvatarAccessoryEquipPopup____c);
    }
    object = TypeInfo__AvatarAccessoryEquipPopup____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__AvatarAccessoryEquipPopup____c___Equip_b__9_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AvatarAccessoryEquipPopup____c->static_fields->__9__9_1 = this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__AvatarAccessoryEquipPopup____c->static_fields->__9__9_1
                    >> 0xc);
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
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pUVar6 = (this->fields).resultCallback;
  if (pUVar6 == (UnityAction *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pUVar6->fields)._._.invoke_impl)((pUVar6->fields)._._.method_code,(pUVar6->fields)._._.method);
  return;
}


/* Void Initialize(UnityAction, String, AccessoryDataClient, Single, Single) */

void Assembly-CSharp.dll::AvatarAccessoryEquipPopup::AvatarAccessoryEquipPopup_Initialize
               (AvatarAccessoryEquipPopup *this,UnityAction *resultCallback,String *previewImageUrl,
               AccessoryDataClient *accessoryData,float accessoryOffset,float accessoryScale,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__AvatarAccessoryEquipPopup__OnPreviewImageDownLoaded__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).loadingWheel;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,1,(MethodInfo *)0x0);
    pSVar2 = (this->fields).preview;
    if ((pSVar2 != (StreamedSpriteToImageManual *)0x0) &&
       (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pSVar2,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      pSVar2 = (this->fields).preview;
      this_01 = (NavMesh_OnNavMeshPreUpdate *)
                FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)this,
                 MethodInfo__AvatarAccessoryEquipPopup__OnPreviewImageDownLoaded__,(MethodInfo *)0x0
                );
      if (pSVar2 != (StreamedSpriteToImageManual *)0x0) {
        StreamedSpriteToImageManual::StreamedSpriteToImageManual_Download
                  (pSVar2,previewImageUrl,(UnityAction *)this_01,(MethodInfo *)0x0);
        bVar3 = iRam_? != 0;
        (this->fields).resultCallback = resultCallback;
        if (bVar3) {
          uVar4 = (uint)((ulonglong)&(this->fields).resultCallback >> 0xc);
          uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
          do {
            uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
            puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
            LOCK();
            bVar3 = uVar6 == *puVar7;
            if (bVar3) {
              *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar3);
        }
        this_00 = (this->fields).itemBackground;
        if (this_00 != (AccessoryItemBackground *)0x0) {
          AccessoryItemBackground::AccessoryItemBackground_Initialize
                    (this_00,accessoryData,(MethodInfo *)0x0);
          bVar3 = iRam_? != 0;
          (this->fields).accessoryDataClient = accessoryData;
          if (bVar3) {
            uVar4 = (uint)((ulonglong)&(this->fields).accessoryDataClient >> 0xc);
            uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
            do {
              uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
              puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
              LOCK();
              bVar3 = uVar6 == *puVar7;
              if (bVar3) {
                *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
              }
              UNLOCK();
            } while (!bVar3);
          }
          (this->fields).accessoryOffset = accessoryOffset;
          (this->fields).accessoryScale = accessoryScale;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnPreviewImageDownLoaded() */

void Assembly-CSharp.dll::AvatarAccessoryEquipPopup::
     AvatarAccessoryEquipPopup_OnPreviewImageDownLoaded
               (AvatarAccessoryEquipPopup *this,MethodInfo *method)

{
  pGVar1 = (this->fields).loadingWheel;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields).emptyFrame;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      this_00 = (this->fields).preview;
      if ((this_00 != (StreamedSpriteToImageManual *)0x0) &&
         (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_00,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0))
      {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                        ,1,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pGVar1 == (GameObject *)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pvVar3 = (pGVar1->fields)._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar3,1);
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <Equip>b__9_0(IAttachToBody, BaseEventData) */

void Assembly-CSharp.dll::AvatarAccessoryEquipPopup::AvatarAccessoryEquipPopup__Equip_b__9_0
               (AvatarAccessoryEquipPopup *this,IAttachToBody *x,BaseEventData *y,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IAttachToBody);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).accessoryDataClient;
  if ((pAVar1 != (AccessoryDataClient *)0x0) && (x != (IAttachToBody *)0x0)) {
    fVar2 = (this->fields).accessoryScale;
    fVar3 = (this->fields).accessoryOffset;
    FUN_?(fVar2,fVar3,x,(pAVar1->fields)._.sAID,fVar3,fVar2);
    return;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

