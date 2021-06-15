
/* IEnumerable`1[System.String] GetRequiredProperties(JsonSchemaModel) */

IEnumerable_1_System_String_ *
Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader+SchemaScope::
JsonValidatingReader_SchemaScope_GetRequiredProperties
          (JsonValidatingReader_SchemaScope *this,JsonSchemaModel *schema,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (schema != (JsonSchemaModel *)0x0) {
    pCVar1 = DesktopEditModeController::DesktopEditModeController_get_ClientShopRepository
                       ((DesktopEditModeController *)schema,(MethodInfo *)0x0);
    if (pCVar1 != (ClientShopRepository *)0x0) {
      pCVar1 = DesktopEditModeController::DesktopEditModeController_get_ClientShopRepository
                         ((DesktopEditModeController *)schema,(MethodInfo *)0x0);
      if (TypeInfo__Newtonsoft__Json__JsonValidatingReader__SchemaScope->static_fields->
          __f__am_cache2 ==
          (Func_2_System_Collections_Generic_KeyValuePair_2_System_String_Newtonsoft_Json_Schema_JsonSchemaModel_Boolean_
           *)0x0) {
        pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar2,(Object *)0x0,
                   MethodInfo__Newtonsoft__Json__JsonValidatingReader__SchemaScope___GetRequiredProperties_m__2_System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>_
                   ,
                   MethodInfo__System__Func<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>,_bool>__Func_System__Object__void__
                  );
        TypeInfo__Newtonsoft__Json__JsonValidatingReader__SchemaScope->static_fields->__f__am_cache2
             = (Func_2_System_Collections_Generic_KeyValuePair_2_System_String_Newtonsoft_Json_Schema_JsonSchemaModel_Boolean_
                *)pUVar2;
      }
      source = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_17
                         ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)pCVar1,
                          (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                           *)TypeInfo__Newtonsoft__Json__JsonValidatingReader__SchemaScope->
                             static_fields->__f__am_cache2,
                          System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>_>__System__Func<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>,_bool>_
                         );
      if (TypeInfo__Newtonsoft__Json__JsonValidatingReader__SchemaScope->static_fields->
          __f__am_cache3 ==
          (Func_2_System_Collections_Generic_KeyValuePair_2_System_String_Newtonsoft_Json_Schema_JsonSchemaModel_String_
           *)0x0) {
        pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar2,(Object *)0x0,
                   MethodInfo__Newtonsoft__Json__JsonValidatingReader__SchemaScope___GetRequiredProperties_m__3_System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>_
                   ,
                   MethodInfo__System__Func<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>,_System::String>__Func_System__Object__void__
                  );
        TypeInfo__Newtonsoft__Json__JsonValidatingReader__SchemaScope->static_fields->__f__am_cache3
             = (Func_2_System_Collections_Generic_KeyValuePair_2_System_String_Newtonsoft_Json_Schema_JsonSchemaModel_String_
                *)pUVar2;
      }
      pIVar3 = System.Core.dll::System::Linq::Enumerable::Enumerable_Select_14
                         ((IEnumerable_1_System_Object_ *)source,
                          (Func_2_Object_Single_ *)
                          TypeInfo__Newtonsoft__Json__JsonValidatingReader__SchemaScope->
                          static_fields->__f__am_cache3,
                          System__Collections__Generic__IEnumerable<System::String>_MethodInfo__System__Linq__Enumerable__Select<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>,_System::String>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>_>__System__Func<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>,_System::String>_
                         );
      return (IEnumerable_1_System_String_ *)pIVar3;
    }
  }
  pIVar4 = System.Core.dll::System::Linq::Enumerable::Enumerable_Empty_3
                     (
                     System__Collections__Generic__IEnumerable<System::String>_MethodInfo__System__Linq__Enumerable__Empty<System::String>__
                     );
  return pIVar4;
}


/* Boolean
   <GetRequiredProperties>m__2(KeyValuePair`2[System.String,Newtonsoft.Json.Schema.JsonSchemaModel])
    */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader+SchemaScope::
     JsonValidatingReader_SchemaScope__GetRequiredProperties_m__2
               (KeyValuePair_2_System_String_Newtonsoft_Json_Schema_JsonSchemaModel_ p,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (SubscribableVariableBase_1_System_Boolean_ *)
         func_?(&p,
                         MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>__get_Value__
                        );
  if (this != (SubscribableVariableBase_1_System_Boolean_ *)0x0) {
    bVar1 = SubscribableVariableBase`1[System::Boolean]::
            SubscribableVariableBase_1_System_Boolean__get_Value(this,(MethodInfo *)0x0);
    return bVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* String 
   <GetRequiredProperties>m__3(KeyValuePair`2[System.String,Newtonsoft.Json.Schema.JsonSchemaModel])
    */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader+SchemaScope::
         JsonValidatingReader_SchemaScope__GetRequiredProperties_m__3
                   (KeyValuePair_2_System_String_Newtonsoft_Json_Schema_JsonSchemaModel_ p,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (String *)
           func_?(&p,
                           MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaModel>__get_Key__
                          );
  return pSVar1;
}


/* JsonValidatingReader+SchemaScope(JTokenType, IList`1[Newtonsoft.Json.Schema.JsonSchemaModel]) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonValidatingReader+SchemaScope::
     JsonValidatingReader_SchemaScope__ctor
               (JsonValidatingReader_SchemaScope *this,JTokenType__Enum tokenType,
               IList_1_Newtonsoft_Json_Schema_JsonSchemaModel_ *schemas,MethodInfo *method)

{
  pJVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  (this->fields)._tokenType = tokenType;
  (this->fields)._schemas = schemas;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(
                          TypeInfo__System__Func<Newtonsoft::Json::Schema::JsonSchemaModel,_System::Collections::Generic::IEnumerable<System::String>_>
                          );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__Newtonsoft__Json__JsonValidatingReader__SchemaScope__GetRequiredProperties_Newtonsoft__Json__Schema__JsonSchemaModel_
             ,
             MethodInfo__System__Func<Newtonsoft::Json::Schema::JsonSchemaModel,_System::Collections::Generic::IEnumerable<System::String>_>__Func_System__Object__void__
            );
  source = System.Core.dll::System::Linq::Enumerable::Enumerable_Select_14
                     ((IEnumerable_1_System_Object_ *)schemas,(Func_2_Object_Single_ *)pUVar2,
                      System__Collections__Generic__IEnumerable<System::String>_MethodInfo__System__Linq__Enumerable__SelectMany<Newtonsoft::Json::Schema::JsonSchemaModel,_System::String>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaModel>__System__Func<Newtonsoft::Json::Schema::JsonSchemaModel,_System::Collections::Generic::IEnumerable<System::String>_>_
                     );
  this = (JsonValidatingReader_SchemaScope *)
         System.Core.dll::System::Linq::Enumerable::Enumerable_Distinct_2
                   ((IEnumerable_1_System_String_ *)source,
                    System__Collections__Generic__IEnumerable<System::String>_MethodInfo__System__Linq__Enumerable__Distinct<System::String>_System__Collections__Generic__IEnumerable<System::String>_
                   );
  if (TypeInfo__Newtonsoft__Json__JsonValidatingReader__SchemaScope->static_fields->__f__am_cache0
      == (Func_2_String_String_ *)0x0) {
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    this = (JsonValidatingReader_SchemaScope *)
           MethodInfo__System__Func<System::String,_System::String>__Func_System__Object__void__;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)0x0,
               MethodInfo__Newtonsoft__Json__JsonValidatingReader__SchemaScope___SchemaScope_m__0_System__String_
               ,
               MethodInfo__System__Func<System::String,_System::String>__Func_System__Object__void__
              );
    TypeInfo__Newtonsoft__Json__JsonValidatingReader__SchemaScope->static_fields->__f__am_cache0 =
         (Func_2_String_String_ *)pUVar2;
  }
  keySelector = (Func_2_Object_Object_ *)
                TypeInfo__Newtonsoft__Json__JsonValidatingReader__SchemaScope->static_fields->
                __f__am_cache0;
  if (TypeInfo__Newtonsoft__Json__JsonValidatingReader__SchemaScope->static_fields->__f__am_cache1
      == (Func_2_String_Boolean_ *)0x0) {
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    this = (JsonValidatingReader_SchemaScope *)
           MethodInfo__System__Func<System::String,_bool>__Func_System__Object__void__;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)0x0,
               MethodInfo__Newtonsoft__Json__JsonValidatingReader__SchemaScope___SchemaScope_m__1_System__String_
               ,MethodInfo__System__Func<System::String,_bool>__Func_System__Object__void__);
    TypeInfo__Newtonsoft__Json__JsonValidatingReader__SchemaScope->static_fields->__f__am_cache1 =
         (Func_2_String_Boolean_ *)pUVar2;
  }
  pDVar3 = (Dictionary_2_System_String_System_Boolean_ *)
           System.Core.dll::System::Linq::Enumerable::Enumerable_ToDictionary_13
                     ((IEnumerable_1_System_Object_ *)this,keySelector,
                      (Func_2_Object_Boolean_ *)
                      TypeInfo__Newtonsoft__Json__JsonValidatingReader__SchemaScope->static_fields->
                      __f__am_cache1,
                      System__Collections__Generic__Dictionary<System::String,_bool>_MethodInfo__System__Linq__Enumerable__ToDictionary<System::String,_System::String,_bool>_System__Collections__Generic__IEnumerable<System::String>__System__Func<System::String,_System::String>__System__Func<System::String,_bool>_
                     );
  (pJVar1->fields)._requiredProperties = pDVar3;
  return;
}

