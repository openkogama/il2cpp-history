
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
  pMVar1 = this;
  this = (ModalNotification *)CONCAT13(1,this._0_3_);
  pTVar2 = (pMVar1->fields).text;
  (pMVar1->fields)._.timeSinceStart = 0.0;
  pOVar3 = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
  this_00 = data;
  if ((data != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar3
                         ,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        ), pTVar2 != (Text *)0x0)) {
    TVar5.m_Index = 0;
    if (TVar4.m_Index == 0) {
code_?:
      (*(code *)(pTVar2->klass->vtable).set_text.method)
                (pTVar2,TVar5.m_Index,
                 (pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      pOVar3 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
      TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_00,
                         pOVar3,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar4.m_Index != 0) {
        pSVar6 = (String__Class *)TypeInfo__NotificationLifetime;
        if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
            (TypeInfo__NotificationLifetime->_0).element_class) goto code_?;
        piVar7 = (int32_t *)func_?(TVar4.m_Index);
        (pMVar1->fields).lifeTime = *piVar7;
        pOVar3 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffa);
        bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_00,
                           pOVar3,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        pIVar9 = (pMVar1->fields).image;
        if (bVar8 == 0) {
          if (pIVar9 != (Image *)0x0) {
            TVar5.m_Index = (int32_t)(pMVar1->fields).defaultSprite;
code_?:
            UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                      (pIVar9,(Sprite *)TVar5.m_Index,(MethodInfo *)0x0);
            pIVar9 = (pMVar1->fields).image;
            if (pIVar9 != (Image *)0x0) {
              pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pIVar9,(MethodInfo *)0x0);
              if (pTVar10 != (Transform *)0x0) {
                pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_get_localScale((Vector3 *)&puStack_12,pTVar10,(MethodInfo *)0x0)
                ;
                uVar13 = pVVar11->y;
                fVar14 = pVVar11->z;
                pIVar9 = (pMVar1->fields).image;
                uVar15 = CONCAT44(uVar13,0xbf800000);
                if ((pIVar9 != (Image *)0x0) &&
                   (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)pIVar9,(MethodInfo *)0x0),
                   pTVar10 != (Transform *)0x0)) {
                  this = (ModalNotification *)0x0;
                  value.z = fVar14;
                  value.x = (float)(int)uVar15;
                  value.y = (float)(int)((ulonglong)uVar15 >> 0x20);
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                            (pTVar10,value,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
        else {
          this = (ModalNotification *)CONCAT13(3,this._0_3_);
          pOVar3 = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
          TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_00
                             ,pOVar3,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
          if (pIVar9 != (Image *)0x0) {
            TVar5.m_Index = 0;
            if (TVar4.m_Index != 0) {
              if (*(Sprite__Class **)TVar4.m_Index == TypeInfo__UnityEngine__Sprite) {
                TVar5 = TVar4;
              }
              pSVar16 = TypeInfo__UnityEngine__Sprite;
              if ((Sprite *)TVar5.m_Index == (Sprite *)0x0) goto code_?;
            }
            goto code_?;
          }
        }
      }
    }
    else {
      if (*(String__Class **)TVar4.m_Index == TypeInfo__System__String) {
        TVar5 = TVar4;
      }
      pSVar6 = TypeInfo__System__String;
      if (TVar5.m_Index != 0) goto code_?;
code_?:
      func_?(TVar4.m_Index,pSVar6);
    }
  }
  func_?();
  TVar4.m_Index = extraout_ECX;
  pSVar16 = extraout_EDX;
code_?:
  func_?(TVar4.m_Index,pSVar16);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}

