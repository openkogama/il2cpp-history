
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
     (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (data,pOVar3,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pTVar2 != (Text *)0x0)) {
    pOVar4 = (Object *)0x0;
    if (pOVar3 == (Object *)0x0) {
code_?:
      (*(pTVar2->klass->vtable).set_text.methodPtr)
                (pTVar2,pOVar4,(pTVar2->klass->vtable).set_text.method);
      pOVar3 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this_00,pOVar3,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar3 != (Object *)0x0) {
        pSVar5 = (String__Class *)TypeInfo__NotificationLifetime;
        if ((pOVar3->klass->_0).element_class != (TypeInfo__NotificationLifetime->_0).element_class)
        goto code_?;
        piVar6 = (int32_t *)func_?(pOVar3);
        (pMVar1->fields).lifeTime = *piVar6;
        pOVar3 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffa);
        bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)this_00,pOVar3,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        pIVar8 = (pMVar1->fields).image;
        if (bVar7 == 0) {
          if (pIVar8 != (Image *)0x0) {
            value = (pMVar1->fields).defaultSprite;
code_?:
            UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                      (pIVar8,value,(MethodInfo *)0x0);
            pIVar8 = (pMVar1->fields).image;
            if (pIVar8 != (Image *)0x0) {
              pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pIVar8,(MethodInfo *)0x0);
              if (pTVar9 != (Transform *)0x0) {
                pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_get_localScale((Vector3 *)&puStack_11,pTVar9,(MethodInfo *)0x0)
                ;
                uVar12 = pVVar10->y;
                fVar13 = pVVar10->z;
                pIVar8 = (pMVar1->fields).image;
                uVar14 = CONCAT44(uVar12,0xbf800000);
                if ((pIVar8 != (Image *)0x0) &&
                   (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)pIVar8,(MethodInfo *)0x0),
                   pTVar9 != (Transform *)0x0)) {
                  this = (ModalNotification *)0x0;
                  value_00.z = fVar13;
                  value_00.x = (float)(int)uVar14;
                  value_00.y = (float)(int)((ulonglong)uVar14 >> 0x20);
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                            (pTVar9,value_00,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
        else {
          this = (ModalNotification *)CONCAT13(3,this._0_3_);
          pOVar3 = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
          pSVar15 = (Sprite *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              (this_00,pOVar3,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
          if (pIVar8 != (Image *)0x0) {
            value = (Sprite *)0x0;
            if (pSVar15 != (Sprite *)0x0) {
              if (pSVar15->klass == TypeInfo__UnityEngine__Sprite) {
                value = pSVar15;
              }
              pSVar16 = TypeInfo__UnityEngine__Sprite;
              if (value == (Sprite *)0x0) goto code_?;
            }
            goto code_?;
          }
        }
      }
    }
    else {
      if ((String__Class *)pOVar3->klass == TypeInfo__System__String) {
        pOVar4 = pOVar3;
      }
      pSVar5 = TypeInfo__System__String;
      if (pOVar4 != (Object *)0x0) goto code_?;
code_?:
      func_?(pOVar3,pSVar5);
    }
  }
  func_?();
  pSVar15 = extraout_ECX;
  pSVar16 = extraout_EDX;
code_?:
  func_?(pSVar15,pSVar16);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}

