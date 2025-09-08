
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::ModalNotification::ModalNotification_Initialize
               (ModalNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__NotificationLifetime);
    func_?(&TypeInfo__UnityEngine__Sprite);
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  this_01 = data;
  n = this;
  Notification::Notification_Initialize((Notification *)this,data,(MethodInfo *)0x0);
  pTVar1 = (n->fields).text;
  data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(1,data._0_3_);
  pOVar2 = (Object *)func_?(TypeInfo__System__Byte,(int)&data + 3);
  if ((this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_01,
                         pOVar2,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        ), pTVar1 != (Text *)0x0)) {
    if (TVar3.m_Index == 0) {
code_?:
      (*(code *)(pTVar1->klass->vtable).set_text.method)();
      this = (ModalNotification *)CONCAT13(2,this._0_3_);
      pOVar2 = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
      TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_01,
                         pOVar2,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar3.m_Index != 0) {
        if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
            (TypeInfo__NotificationLifetime->_0).element_class) goto code_?;
        piVar4 = (int32_t *)func_?();
        (n->fields).lifeTime = *piVar4;
        pOVar2 = (Object *)func_?();
        bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_01,
                           pOVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        pIVar6 = (n->fields).image;
        if (bVar5 == 0) {
          if (pIVar6 != (Image *)0x0) {
            TVar7.m_Index = (int32_t)(n->fields).defaultSprite;
code_?:
            UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                      (pIVar6,(Sprite *)TVar7.m_Index,(MethodInfo *)0x0);
            pIVar6 = (n->fields).image;
            if ((pIVar6 != (Image *)0x0) &&
               (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pIVar6,(MethodInfo *)0x0),
               pTVar8 != (Transform *)0x0)) {
              pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                                  ((Vector3 *)&stack0xffffffe0,pTVar8,(MethodInfo *)0x0);
              uVar10 = pVVar9->y;
              pMVar11 = (MethodInfo *)pVVar9->z;
              pIVar6 = (n->fields).image;
              if (pIVar6 != (Image *)0x0) {
                data = (Dictionary_2_System_Object_System_Object_ *)0x0;
                this = (ModalNotification *)pIVar6;
                pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pIVar6,(MethodInfo *)0x0);
                if (pTVar8 != (Transform *)0x0) {
                  this = (ModalNotification *)0xbf800000;
                  value.y = (float)uVar10;
                  value.x = -1.0;
                  value.z = (float)pMVar11;
                  data = (Dictionary_2_System_Object_System_Object_ *)uVar10;
                  method = pMVar11;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                            (pTVar8,value,(MethodInfo *)0x0);
                  this_00 = (n->fields).tertiaryNotificationUI;
                  method = (MethodInfo *)n;
                  data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
                  l = (*(code *)(n->klass->vtable).get_Lifetime.method)();
                  if (this_00 != (TertiaryNotificationUI *)0x0) {
                    TertiaryNotificationUI::TertiaryNotificationUI_Initialize
                              (this_00,(Notification *)n,l,1,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
        else {
          data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(3,data._0_3_);
          pOVar2 = (Object *)func_?();
          TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_01
                             ,pOVar2,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
          if (pIVar6 != (Image *)0x0) {
            TVar7.m_Index = 0;
            if (TVar3.m_Index != 0) {
              if (*(Sprite__Class **)TVar3.m_Index == TypeInfo__UnityEngine__Sprite) {
                TVar7 = TVar3;
              }
              if ((Sprite *)TVar7.m_Index == (Sprite *)0x0) goto code_?;
            }
            goto code_?;
          }
        }
      }
    }
    else {
      TVar7.m_Index = 0;
      if (*(String__Class **)TVar3.m_Index == TypeInfo__System__String) {
        TVar7 = TVar3;
      }
      if (TVar7.m_Index != 0) goto code_?;
code_?:
      func_?();
    }
  }
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

