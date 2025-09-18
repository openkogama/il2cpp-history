
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
  n = this;
  this = (ModalNotification *)CONCAT13(1,this._0_3_);
  pTVar1 = (n->fields).text;
  (n->fields)._.timeSinceStart = 0.0;
  pOVar2 = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
  this_01 = data;
  if ((data != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar2
                         ,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        ), pTVar1 != (Text *)0x0)) {
    TVar4.m_Index = 0;
    if (TVar3.m_Index == 0) {
code_?:
      (*(code *)(pTVar1->klass->vtable).set_text.method)
                (pTVar1,TVar4.m_Index,
                 (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
      TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_01,
                         pOVar2,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar3.m_Index != 0) {
        pSVar5 = (String__Class *)TypeInfo__NotificationLifetime;
        if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
            (TypeInfo__NotificationLifetime->_0).element_class) goto code_?;
        piVar6 = (int32_t *)func_?(TVar3.m_Index);
        (n->fields).lifeTime = *piVar6;
        pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffa);
        bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_01,
                           pOVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        pIVar8 = (n->fields).image;
        if (bVar7 == 0) {
          if (pIVar8 != (Image *)0x0) {
            TVar4.m_Index = (int32_t)(n->fields).defaultSprite;
code_?:
            UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                      (pIVar8,(Sprite *)TVar4.m_Index,(MethodInfo *)0x0);
            pIVar8 = (n->fields).image;
            if (pIVar8 != (Image *)0x0) {
              pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pIVar8,(MethodInfo *)0x0);
              if (pTVar9 != (Transform *)0x0) {
                pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_get_localScale((Vector3 *)&puStack_11,pTVar9,(MethodInfo *)0x0)
                ;
                uVar12 = pVVar10->y;
                fVar13 = pVVar10->z;
                pIVar8 = (n->fields).image;
                uVar14 = CONCAT44(uVar12,0xbf800000);
                if ((pIVar8 != (Image *)0x0) &&
                   (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)pIVar8,(MethodInfo *)0x0),
                   pTVar9 != (Transform *)0x0)) {
                  this = (ModalNotification *)0x0;
                  value.z = fVar13;
                  value.x = (float)(int)uVar14;
                  value.y = (float)(int)((ulonglong)uVar14 >> 0x20);
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                            (pTVar9,value,(MethodInfo *)0x0);
                  this_00 = (n->fields).tertiaryNotificationUI;
                  this = (ModalNotification *)(n->klass->vtable).Initialize.methodPtr;
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
          this = (ModalNotification *)CONCAT13(3,this._0_3_);
          pOVar2 = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
          TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_01
                             ,pOVar2,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
          if (pIVar8 != (Image *)0x0) {
            TVar4.m_Index = 0;
            if (TVar3.m_Index != 0) {
              if (*(Sprite__Class **)TVar3.m_Index == TypeInfo__UnityEngine__Sprite) {
                TVar4 = TVar3;
              }
              pSVar15 = TypeInfo__UnityEngine__Sprite;
              if ((Sprite *)TVar4.m_Index == (Sprite *)0x0) goto code_?;
            }
            goto code_?;
          }
        }
      }
    }
    else {
      if (*(String__Class **)TVar3.m_Index == TypeInfo__System__String) {
        TVar4 = TVar3;
      }
      pSVar5 = TypeInfo__System__String;
      if (TVar4.m_Index != 0) goto code_?;
code_?:
      func_?(TVar3.m_Index,pSVar5);
    }
  }
  func_?();
  TVar3.m_Index = extraout_ECX;
  pSVar15 = extraout_EDX;
code_?:
  func_?(TVar3.m_Index,pSVar15);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}

