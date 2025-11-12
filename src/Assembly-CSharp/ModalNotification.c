
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::ModalNotification::ModalNotification_Initialize
               (ModalNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationLifetime);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Sprite);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).text;
  (this->fields)._.timeSinceStart = 0.0;
  auStackX_8[0] = 1;
  pOVar2 = (Object *)FUN_?(uRam_?,auStackX_8);
  if ((data != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (data,pOVar2,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pTVar1 != (Text *)0x0)) {
    pOVar3 = (Object *)0x0;
    if (pOVar2 != (Object *)0x0) {
      if (pOVar2->klass == pORam0000000182db2460) {
        pOVar3 = pOVar2;
      }
      if (pOVar3 == (Object *)0x0) {
        FUN_?(pOVar2,pORam0000000182db2460);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,pOVar3,(pTVar1->klass->vtable).set_text.method);
    auStackX_8[0] = 2;
    pOVar2 = (Object *)FUN_?(uRam_?,auStackX_8);
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar2,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar2 != (Object *)0x0) {
      if ((pOVar2->klass->_0).element_class != (TypeInfo__NotificationLifetime->_0).element_class) {
        FUN_?(pOVar2,TypeInfo__NotificationLifetime);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (this->fields).lifeTime = *(int32_t *)&pOVar2[1].klass;
      auStackX_8[0] = 3;
      pOVar2 = (Object *)FUN_?(uRam_?,auStackX_8);
      iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                          *)data,pOVar2,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                         ->klass->rgctx_data[0x21].method);
      pIVar6 = (this->fields).image;
      if (iVar5 < 0) {
        if (pIVar6 == (Image *)0x0) goto code_?;
        value = (this->fields).defaultSprite;
      }
      else {
        auStackX_8[0] = 3;
        pOVar2 = (Object *)FUN_?(uRam_?,auStackX_8);
        pSVar7 = (Sprite *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (data,pOVar2,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pIVar6 == (Image *)0x0) goto code_?;
        value = (Sprite *)0x0;
        if (pSVar7 != (Sprite *)0x0) {
          if (pSVar7->klass == TypeInfo__UnityEngine__Sprite) {
            value = pSVar7;
          }
          if (value == (Sprite *)0x0) {
            FUN_?(pSVar7,TypeInfo__UnityEngine__Sprite);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      }
      UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite(pIVar6,value,(MethodInfo *)0x0);
      pIVar6 = (this->fields).image;
      if ((pIVar6 != (Image *)0x0) &&
         (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pIVar6,(MethodInfo *)0x0), pTVar8 != (Transform *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_9 = 0;
        uStack_10 = 0;
        pvVar11 = (pTVar8->fields)._._.m_CachedPtr;
        if (pvVar11 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar12 = func_?(&UNK_?);
          FUN_?(uVar12,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
        (*pcRam_?)(pvVar11);
        uVar13 = uStack_10;
        pIVar6 = (this->fields).image;
        uStack_14 = CONCAT44((int)((ulonglong)uStack_9 >> 0x20),0xbf800000);
        if ((pIVar6 != (Image *)0x0) &&
           (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pIVar6,(MethodInfo *)0x0), pTVar8 != (Transform *)0x0))
        {
          uStack_9 = uStack_14;
          uStack_10 = uVar13;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar11 = (pTVar8->fields)._._.m_CachedPtr;
          if (pvVar11 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pcVar4 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
            uVar12 = func_?(&UNK_?);
            FUN_?(uVar12,0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pcRam_? = pcVar4;
          (*pcRam_?)(pvVar11,&uStack_9);
          this_00 = (this->fields).tertiaryNotificationUI;
          l = (*(this->klass->vtable).get_Lifetime.methodPtr)
                        (this,(this->klass->vtable).get_Lifetime.method);
          if (this_00 != (TertiaryNotificationUI *)0x0) {
            TertiaryNotificationUI::TertiaryNotificationUI_Initialize
                      (this_00,(Notification *)this,l,1,(MethodInfo *)0x0);
            return;
          }
        }
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

