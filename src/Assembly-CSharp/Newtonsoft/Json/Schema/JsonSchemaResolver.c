
/* JsonSchema GetSchema(String) */

JsonSchema *
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaResolver::JsonSchemaResolver_GetSchema
          (JsonSchemaResolver *this,String *id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Newtonsoft__Json__Schema__JsonSchemaResolver___GetSchema_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = id;
    source = (this->fields)._LoadedSchemas_k__BackingField;
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Func<Newtonsoft::Json::Schema::JsonSchema,_bool>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this_00,
               MethodInfo__Newtonsoft__Json__Schema__JsonSchemaResolver___GetSchema_c__AnonStorey0____m__0_Newtonsoft__Json__Schema__JsonSchema_
               ,
               MethodInfo__System__Func<Newtonsoft::Json::Schema::JsonSchema,_bool>__Func_System__Object__void__
              );
    pJVar1 = (JsonSchema *)
             System.Core.dll::System::Linq::Enumerable::Enumerable_SingleOrDefault_6
                       ((IEnumerable_1_Newtonsoft_Json_Utilities_EnumValue_1_System_UInt64_ *)source
                        ,(Func_2_Newtonsoft_Json_Utilities_EnumValue_1_System_UInt64_Boolean_ *)
                         this_01,
                        Newtonsoft__Json__Schema__JsonSchema_MethodInfo__System__Linq__Enumerable__SingleOrDefault<Newtonsoft::Json::Schema::JsonSchema>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchema>__System__Func<Newtonsoft::Json::Schema::JsonSchema,_bool>_
                       );
    return pJVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pJVar1 = (JsonSchema *)(*pcVar2)();
  return pJVar1;
}


/* JsonSchemaResolver() */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaResolver::JsonSchemaResolver__ctor
               (JsonSchemaResolver *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchema>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchema>__List__
            );
  (this->fields)._LoadedSchemas_k__BackingField =
       (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)this_00;
  return;
}

