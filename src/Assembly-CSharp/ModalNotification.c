
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::ModalNotification::ModalNotification_Initialize
               (ModalNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = data;
  pMVar2 = this;
  Notification::Notification_Initialize((Notification *)this,data,(MethodInfo *)0x0);
  pTVar3 = (pMVar2->fields).text;
  data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(1,data._0_3_);
  pTVar4 = (Type *)func_?(TypeInfo__System__Byte,(int)&data + 3);
  if ((pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (pPVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)pDVar1,pTVar4,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pTVar3 != (Text *)0x0)) {
    if (pPVar5 == (Pool *)0x0) {
code_?:
      (*(code *)(pTVar3->klass->vtable).set_text.method)(pTVar3);
      this = (ModalNotification *)CONCAT13(2,this._0_3_);
      pTVar4 = (Type *)func_?(TypeInfo__System__Byte,(int)&this + 3);
      pPVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)pDVar1,pTVar4,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pPVar5 != (Pool *)0x0) {
        if ((pPVar5->klass->_0).element_class != (TypeInfo__NotificationLifetime->_0).element_class)
        goto code_?;
        piVar6 = (int32_t *)func_?();
        (pMVar2->fields).lifeTime = *piVar6;
        key = (String *)func_?(TypeInfo__System__Byte);
        bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                KogamaSettingWrapperBase]::
                Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                          ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                            *)pDVar1,key,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        pIVar8 = (pMVar2->fields).image;
        if (bVar7 == 0) {
          if (pIVar8 != (Image *)0x0) {
            pPVar9 = (Pool *)(pMVar2->fields).defaultSprite;
code_?:
            UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                      (pIVar8,(Sprite *)pPVar9,(MethodInfo *)0x0);
            pIVar8 = (pMVar2->fields).image;
            if ((pIVar8 != (Image *)0x0) &&
               (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_transform((Component_1 *)pIVar8,(MethodInfo *)0x0),
               pTVar10 != (Transform *)0x0)) {
              pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                                  ((Vector3 *)&stack0xffffffe0,pTVar10,(MethodInfo *)0x0);
              uVar12 = pVVar11->y;
              pDVar1 = (Dictionary_2_System_Object_System_Object_ *)pVVar11->z;
              pIVar8 = (pMVar2->fields).image;
              uVar13 = CONCAT44(uVar12,0xbf800000);
              if (pIVar8 != (Image *)0x0) {
                this = (ModalNotification *)0x0;
                pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_transform((Component_1 *)pIVar8,(MethodInfo *)0x0);
                if (pTVar10 != (Transform *)0x0) {
                  method = (MethodInfo *)0x0;
                  this = (ModalNotification *)((ulonglong)uVar13 >> 0x20);
                  value.z = (float)pDVar1;
                  value.x = (float)(int)uVar13;
                  value.y = (float)(int)((ulonglong)uVar13 >> 0x20);
                  data = pDVar1;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                            (pTVar10,value,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
        else {
          data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(3,data._0_3_);
          pTVar4 = (Type *)func_?();
          pPVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                   Dictionary_2_System_Type_Pool__get_Item
                             ((Dictionary_2_System_Type_Pool_ *)pDVar1,pTVar4,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          if (pIVar8 != (Image *)0x0) {
            pPVar9 = (Pool *)0x0;
            if (pPVar5 != (Pool *)0x0) {
              if ((Sprite__Class *)pPVar5->klass == TypeInfo__UnityEngine__Sprite) {
                pPVar9 = pPVar5;
              }
              if (pPVar9 == (Pool *)0x0) goto code_?;
            }
            goto code_?;
          }
        }
      }
    }
    else {
      pPVar9 = (Pool *)0x0;
      if ((String__Class *)pPVar5->klass == TypeInfo__System__String) {
        pPVar9 = pPVar5;
      }
      if (pPVar9 != (Pool *)0x0) goto code_?;
code_?:
      func_?();
    }
  }
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}

