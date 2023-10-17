
/* Void ApplyLocalDescriptionOverride(MVWorldObjectDocumentationType) */

void Assembly-CSharp.dll::InventoryItem::InventoryItem_ApplyLocalDescriptionOverride
               (InventoryItem *this,MVWorldObjectDocumentationType__Enum t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__ContainsKey_MVWorldObjectDocumentationType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__get_Item_MVWorldObjectDocumentationType_
                   );
    func_?(&TypeInfo__InventoryItem);
    cRam_? = '\x01';
  }
  if ((TypeInfo__InventoryItem->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__InventoryItem);
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
            TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)t,
                       MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__ContainsKey_MVWorldObjectDocumentationType_
                      );
    if (bVar1 == 0) {
      return;
    }
    if ((TypeInfo__InventoryItem->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    this_01 = TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
    if ((this_01 !=
         (Dictionary_2_MVWorldObjectDocumentationType_InventoryItem_ItemDescription_ *)0x0) &&
       (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,t,
                            MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__get_Item_MVWorldObjectDocumentationType_
                           ), pOVar2 != (Object *)0x0)) {
      (this->fields).name = (String *)pOVar2[1].klass;
      func_?(&(this->fields).name);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pSVar3 = mscorlib.dll::System::String::String_Concat_4
                         ((String *)pOVar2[1].monitor,StringLiteral_u000Au000A,
                          (String *)pOVar2[2].klass,(MethodInfo *)0x0);
      (this->fields).description = pSVar3;
      func_?(&(this->fields).description);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* InventoryItem() */

void Assembly-CSharp.dll::InventoryItem::InventoryItem__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>
                   );
    func_?(&TypeInfo__InventoryItem);
    func_?(&TypeInfo__InventoryItem__ItemDescription);
    func_?(&StringLiteral_A_handful_of_ninja_shurikens_);
    func_?(&StringLiteral_Revolver);
    func_?(&StringLiteral_Vertical_Rotator);
    func_?(&StringLiteral_Use_this_in_close_quarters_to_de);
    func_?(&StringLiteral_Can_be_used_as_a_challenging_way);
    func_?(&StringLiteral_Trigger_Cube);
    func_?(&StringLiteral_A_pair_of_connected_teleporters_);
    func_?(&StringLiteral_A_sentry_tower__shooting_a_beam_);
    func_?(&StringLiteral_Fire_sentries_serve_as_stationar);
    func_?(&StringLiteral_A_customizable_hovercraft_);
    func_?(&StringLiteral_Switches_between_ON_and_OFF_each);
    func_?(&StringLiteral_Make_a_game_where_you_have_to_pi);
    func_?(&StringLiteral_This_scary_monster_can_move_thro);
    func_?(&StringLiteral_Frost_Sentry_Tower);
    func_?(&StringLiteral_Team_Editor);
    func_?(&StringLiteral_Negate_Cube);
    func_?(&StringLiteral_Game_Objective__Eliminate_the_Oc);
    func_?(&StringLiteral_The_player_team_who_first_collec);
    func_?(&StringLiteral_Adjust_the_level_and_color_of_yo);
    func_?(&StringLiteral_Contains_lots_of_coins__which_ca);
    func_?(&StringLiteral_Wind_Turbine);
    func_?(&StringLiteral_Use_this_by_connecting_it_to_a_p);
    func_?(&StringLiteral_This_can_be_used_to_make_a_bette);
    func_?(&StringLiteral_Class);
    func_?(&StringLiteral_Shuriken);
    func_?(&StringLiteral_Text);
    func_?(&StringLiteral_The_bazooka_is_incredibly_powerf);
    func_?(&StringLiteral_This_is_really_neat_when_you_wan);
    func_?(&StringLiteral_Become_one_with_the_shadows_usin);
    func_?(&StringLiteral_Light_Cube);
    func_?(&StringLiteral_Green_Team_Spawn_Point);
    func_?(&StringLiteral_A_sliding_door_that_can_be_opene);
    func_?(&StringLiteral_Crystal_Vein);
    func_?(&StringLiteral_Allows_for_scripted_events_in_a_);
    func_?(&StringLiteral_Records_the_time_it_took_for_a_p);
    func_?(&StringLiteral_This_jetpack_offers_unprecedente);
    func_?(&StringLiteral_Adds_a_global_sound_to_the_game_);
    func_?(&StringLiteral_This_logic_cube_sends_signals_in);
    func_?(&StringLiteral_Great_cube_if_you_want_to_obstru);
    func_?(&StringLiteral_Pressure_Plate);
    func_?(&StringLiteral_Platform);
    func_?(&StringLiteral_Counting_Cube);
    func_?(&StringLiteral_Allows_players_to_spawn_as_a_cla);
    func_?(&StringLiteral_Speaker);
    func_?(&StringLiteral_And_Cube);
    func_?(&StringLiteral_Shotgun);
    func_?(&StringLiteral_Global_Speaker);
    func_?(&StringLiteral_Fire_Sentry_Tower);
    func_?(&StringLiteral_Shoots_cubes_that_stick_to_surfa);
    func_?(&StringLiteral_This_rifle_is_at_its_best_in_clo);
    func_?(&StringLiteral_Can_be_used_for_everything_from_);
    func_?(&StringLiteral_Modify_the_roles_of_your_teams__);
    func_?(&StringLiteral_Light_up_the_dark_areas_of_your_);
    func_?(&StringLiteral_Random_Cube);
    func_?(&StringLiteral_A_high_powered_revolver_);
    func_?(&StringLiteral_Bazooka);
    func_?(&StringLiteral_Infuses_the_player_with_lightnin);
    func_?(&StringLiteral_The_team_or_player_that_reaches_);
    func_?(&StringLiteral_Collect_all_these_sparkly_trinke);
    func_?(&StringLiteral_WARNING__KoGaMians_cannot_breath);
    func_?(&StringLiteral_A_fully_automatic_rifle_capable_);
    func_?(&StringLiteral_Horizontal_Rotator);
    func_?(&StringLiteral_Toggle_Cube);
    func_?(&StringLiteral_Whenever_a_player_steps_on_the_p);
    func_?(&StringLiteral_Spawn_point_for_the_green_team__);
    func_?(&StringLiteral_Devastating_when_used_at_long_ra);
    func_?(&StringLiteral_Hides_connected_cube_model_when_);
    func_?(&StringLiteral_This_enables_players_to_cross_lo);
    func_?(&StringLiteral_Players_pick_these_up_to_pay_for);
    func_?(&StringLiteral_Flamethrower);
    func_?(&StringLiteral_Costume);
    func_?(&StringLiteral_Display_a_game_title__help_text_);
    func_?(&StringLiteral_A_pair_of_high_powered_revolvers);
    func_?(&StringLiteral_Trap_Door);
    func_?(&StringLiteral_Powers_one_connected_object_at_r);
    func_?(&StringLiteral_Growth_Pill);
    func_?(&StringLiteral_Skybox_Cube);
    func_?(&StringLiteral_Equip_this_to_blend_into_the_env);
    func_?(&StringLiteral_An_equippable_costume_);
    func_?(&StringLiteral_Enables_players_to_traverse_grea);
    func_?(&StringLiteral_This_burns_anyone_who_gets_too_c);
    func_?(&StringLiteral_A_weapon_designed_for_close_quar);
    func_?(&StringLiteral_Flags_are_a_great_way_to_give_pl);
    func_?(&StringLiteral_Impulse_Gun);
    func_?(&StringLiteral_A_big_customizable_jetpack_);
    func_?(&StringLiteral_A_gun_generating_a_powerful_forc);
    func_?(&StringLiteral_Spawn_point_for_the_yellow_team_);
    func_?(&StringLiteral_Set_a_player_kill_limit_for_your);
    func_?(&StringLiteral_Melee_Weapon);
    func_?(&StringLiteral_The_health_pack_fully_heals_a_pl);
    func_?(&StringLiteral_You_can_put_these_in_sequence_to);
    func_?(&StringLiteral_An_unkillable_ghost_which_damage);
    func_?(&StringLiteral_Cube_Model_Hider);
    func_?(&StringLiteral_A_pair_consisting_of_a_pickup_an);
    func_?(&StringLiteral_Throw_a_line_of_shurikens__and_s);
    func_?(&StringLiteral_Red_Team_Spawn_Point);
    func_?(&StringLiteral_Frost_sentries_serve_as_stationa);
    func_?(&StringLiteral_Make_your_enemies_bigger_targets);
    func_?(&StringLiteral_Coin_Chest);
    func_?(&StringLiteral_Don_t_let_your_friends_die__shoo);
    func_?(&StringLiteral_Water_Cube);
    func_?(&StringLiteral_Infuses_the_player_with_mutageni);
    func_?(&StringLiteral_A_pistol_that_shrinks_the_target);
    func_?(&StringLiteral_Round_cubes_are_a_great_if_your_);
    func_?(&StringLiteral_Use_this_to_make_an_animated_doo);
    func_?(&StringLiteral_Useful_when_bridging_the_gap_bet);
    func_?(&StringLiteral_This_is_useful_if_you_want_to_cr);
    func_?(&StringLiteral_A_custom_cube_model__that_rotate);
    func_?(&StringLiteral_The_player_who_reaches_the_flag_);
    func_?(&StringLiteral_Spawn_point_for_the_blue_team__P);
    func_?(&StringLiteral_Transforms_the_target_into_a_gia);
    func_?(&StringLiteral_Create_elevators_or_platforms_wi);
    func_?(&StringLiteral_A_trap_door_that_can_be_opened_b);
    func_?(&StringLiteral_Mutanto);
    func_?(&StringLiteral_Sends_a_signal_when_shot_);
    func_?(&StringLiteral_Become_a_miniature_version_of_yo);
    func_?(&StringLiteral_These_hideous_creatures_only_hav);
    func_?(&StringLiteral_Sends_a_signal_when_pulled_);
    func_?(&StringLiteral_Heal_Ray);
    func_?(&StringLiteral_Open_doors__trigger_explosives__);
    func_?(&StringLiteral_Connect_this_to_an_toggle_box_fo);
    func_?(&StringLiteral_Mouse_Pill);
    func_?(&StringLiteral_A_bundle_of_dynamite_that_will_e);
    func_?(&StringLiteral_Useful_for_separating_different_);
    func_?(&StringLiteral_A_classic_ninja_shuriken_);
    func_?(&StringLiteral_A_giant_hamster_ball_);
    func_?(&StringLiteral_Camera_Cube);
    func_?(&StringLiteral_The_And_Cube_takes_several_input);
    func_?(&StringLiteral_Door);
    func_?(&StringLiteral_Turn_enemy_players_into_helpless);
    func_?(&StringLiteral_A_rocket_launcher_with_devastati);
    func_?(&StringLiteral_Collect_And_Drop);
    func_?(&StringLiteral_Set_a_time_limit_for_a_round__Af);
    func_?(&StringLiteral_Sneak_up_on_your_enemies_to_catc);
    func_?(&StringLiteral_Yellow_Team_Spawn_Point);
    func_?(&StringLiteral_If_you_want_players_to_stand_on_);
    func_?(&StringLiteral_A_logic_object_which_sends_the_o);
    func_?(&StringLiteral_Round_Time);
    func_?(&StringLiteral_A_colored_light__that_can_be_con);
    func_?(&StringLiteral_Game_Objective__Time_Attack_Flag);
    func_?(&StringLiteral_The_sniper_rifle_uses_a_charged_);
    func_?(&StringLiteral_Ghost);
    func_?(&StringLiteral_A_player_who_reaches_this_will_r);
    func_?(&StringLiteral_Hovercraft);
    func_?(&StringLiteral_This_looks_super_cool_and_can_be);
    func_?(&StringLiteral_Shrinks_a_player_to_the_size_of_);
    func_?(&StringLiteral_A_custom_cube_model__that_rotate);
    func_?(&StringLiteral_Oculus);
    func_?(&StringLiteral_A_classic__Burn_everything_withi);
    func_?(&StringLiteral_Do_you_want_to_open_and_close_th);
    func_?(&StringLiteral_Light_your_enemies_on_fire_with_);
    func_?(&StringLiteral_Coin);
    func_?(&StringLiteral_Blue_Team_Spawn_Point);
    func_?(&StringLiteral_Mouse_Gun);
    func_?(&StringLiteral_Transforms_a_player_into_a_giant);
    func_?(&StringLiteral_Set_a_Oculus_kill_limit_for_your);
    func_?(&StringLiteral_Lets_players_take_their_time_rea);
    func_?(&StringLiteral_A_big_fan__which_blows_players_a);
    func_?(&StringLiteral_An_object_enabling_you_to_displa);
    func_?(&StringLiteral_Dragonfly_Jetpack);
    func_?(&StringLiteral_A_gun_modeled_after_the_classic_);
    func_?(&StringLiteral_Place_this_after_difficult_parts);
    func_?(&StringLiteral_Use_this_to_reward_players_for_r);
    func_?(&StringLiteral_Become_a_super_hero__or_super_vi);
    func_?(&StringLiteral_Game_Objective__Flag);
    func_?(&StringLiteral_Sliding_Door);
    func_?(&StringLiteral_Spawn_point_for_the_red_team__Pl);
    func_?(&StringLiteral_Pulse_Cube);
    func_?(&StringLiteral_Dual_Revolvers);
    func_?(&StringLiteral_Can_be_used_to_open_doors_or_sec);
    func_?(&StringLiteral_Vehicle_Energy);
    func_?(&StringLiteral_Lever);
    func_?(&StringLiteral_An_object_specifying_the_distanc);
    func_?(&StringLiteral_This_bouncy_ball_offers_a_hilari);
    func_?(&StringLiteral_A_small_customizable_jetpack_);
    func_?(&StringLiteral_Reward_players_with_coins_used_t);
    func_?(&StringLiteral_A_door_that_can_be_opened_by_a_s);
    func_?(&StringLiteral_Multi_Shuriken);
    func_?(&StringLiteral_Emits_a_cloud_of_smoke__The_smok);
    func_?(&StringLiteral_Lightning_Speed);
    func_?(&StringLiteral_Target_Cube);
    func_?(&StringLiteral_Become_a_giant_KoGaMian__capable);
    func_?(&StringLiteral_Growth_Gun);
    func_?(&StringLiteral_This_is_a_great_way_to_control_t);
    func_?(&StringLiteral_Set_a_count__Each_time_the_cube_);
    func_?(&StringLiteral_This_is_most_commonly_used_to_en);
    func_?(&StringLiteral_Machine_Gun);
    func_?(&StringLiteral_Delay_Cube);
    func_?(&StringLiteral_Cube_Gun);
    func_?(&StringLiteral_Crystal);
    func_?(&StringLiteral_Checkpoint);
    func_?(&StringLiteral_Useful_for_pushing_players_off_p);
    func_?(&StringLiteral_Fire);
    func_?(&StringLiteral_Hamster_Ball);
    func_?(&StringLiteral_Contains_lots_of_crystals__which);
    func_?(&StringLiteral_While_a_player_is_inside_the_are);
    func_?(&StringLiteral_You_can_stack_several_wind_turbi);
    func_?(&StringLiteral_Explosive);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_Use_this_to_make_an_animated_tra);
    func_?(&StringLiteral_Add_this_to_create_a_death_match);
    func_?(&StringLiteral_Firefly_Jetpack);
    func_?(&StringLiteral_This_is_great_for_creating_the_a);
    func_?(&StringLiteral_Game_Objective__Star);
    func_?(&StringLiteral_Teleporter);
    func_?(&StringLiteral_When_receiving_a_signal_from_ano);
    func_?(&StringLiteral_Use_this_to_make_an_animated_sli);
    func_?(&StringLiteral_This_gun_has_a_very_high_recoil_);
    func_?(&StringLiteral_This_object_allows_you_to_change);
    func_?(&StringLiteral_Most_effective_in_mid_to_long_ra);
    func_?(&StringLiteral_Build_awesome_towers__thick_cast);
    func_?(&StringLiteral_Rail_Gun);
    func_?(&StringLiteral_Adding_this_to_your_project_will);
    func_?(&StringLiteral_Inverting_a_signal_open_up_many_);
    func_?(&StringLiteral_Can_be_used_to_refill_vehicles_e);
    func_?(&StringLiteral_Customize_different_Classes_with);
    func_?(&StringLiteral_Add_sounds_to_your_game__There_s);
    func_?(&StringLiteral_Game_Objective__Death_match);
    func_?(&StringLiteral_A_sentry_tower__shooting_fire_at);
    func_?(&StringLiteral_This_is_a_must_have_for_any_leve);
    func_?(&StringLiteral_You_can_pair_this_with_the_Smoke);
    func_?(&StringLiteral_Players_pick_these_up_to_get_pro);
    func_?(&StringLiteral_Smoke);
    func_?(&StringLiteral_Soar_to_the_skies_with_this_ligh);
    func_?(&StringLiteral_Shoots_a_ray_that_heals_people__);
    func_?(&StringLiteral_Manage_the_look_of_your_game_by_);
    func_?(&StringLiteral_Health_Pack);
    func_?(&StringLiteral_A_customizable_monster_from_anot);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Object_System_Object_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>
                        );
  if (this != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Dictionary__
              );
    pSVar1 = TM::TM__(StringLiteral_Health_Pack,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_The_health_pack_fully_heals_a_pl,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Place_this_after_difficult_parts,(MethodInfo *)0x0);
    pIVar4 = (InventoryItem_ItemDescription *)
             func_?(TypeInfo__InventoryItem__ItemDescription);
    if (pIVar4 != (InventoryItem_ItemDescription *)0x0) {
      InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor_1
                (pIVar4,pSVar1,pSVar2,pSVar3,(Vector3)ZEXT812(0),(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this,(Object *)0x1,(Object *)pIVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                );
      TM::TM__(StringLiteral_Machine_Gun,(MethodInfo *)0x0);
      TM::TM__(StringLiteral_A_fully_automatic_rifle_capable_,(MethodInfo *)0x0);
      pOVar5 = (Object__Class *)
               TM::TM__(StringLiteral_This_rifle_is_at_its_best_in_clo,(MethodInfo *)0x0);
      pMVar6 = (MonitorData *)&UNK_?;
      pOVar7 = (Object *)func_?();
      if (pOVar7 != (Object *)0x0) {
        *(undefined8 *)&pOVar7[2].monitor = 0;
        pOVar7[3].monitor = (MonitorData *)0x0;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  (pOVar7,ExceptionArgument__Enum_obj,unaff_EDI);
        pOVar7[1].klass = (Object__Class *)&UNK_?;
        func_?(pOVar7 + 1,&UNK_?);
        pOVar7[1].monitor = pMVar6;
        func_?(&pOVar7[1].monitor,pMVar6);
        pOVar7[2].klass = pOVar5;
        func_?(pOVar7 + 2,pOVar5);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (this,(Object *)0x2,pOVar7,
                   MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                  );
        pOVar5 = (Object__Class *)TM::TM__(StringLiteral_Impulse_Gun,(MethodInfo *)0x0);
        pSVar1 = TM::TM__(StringLiteral_A_gun_generating_a_powerful_forc,(MethodInfo *)0x0);
        pOVar8 = (Object__Class *)
                 TM::TM__(StringLiteral_This_gun_has_a_very_high_recoil_,(MethodInfo *)0x0);
        pOVar7 = (Object *)func_?(TypeInfo__InventoryItem__ItemDescription);
        if (pOVar7 != (Object *)0x0) {
          *(undefined8 *)&pOVar7[2].monitor = 0;
          pOVar7[3].monitor = (MonitorData *)0x0;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    (pOVar7,ExceptionArgument__Enum_obj,unaff_EDI);
          pOVar7[1].klass = pOVar5;
          func_?(pOVar7 + 1,pOVar5);
          pOVar7[1].monitor = (MonitorData *)pSVar1;
          func_?(&pOVar7[1].monitor,pSVar1);
          pOVar7[2].klass = pOVar8;
          func_?(pOVar7 + 2,pOVar8);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (this,(Object *)0x3,pOVar7,
                     MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                    );
          pOVar5 = (Object__Class *)TM::TM__(StringLiteral_Bazooka,(MethodInfo *)0x0);
          pSVar1 = TM::TM__(StringLiteral_A_rocket_launcher_with_devastati,(MethodInfo *)0x0);
          pOVar8 = (Object__Class *)
                   TM::TM__(StringLiteral_The_bazooka_is_incredibly_powerf,(MethodInfo *)0x0);
          pOVar7 = (Object *)func_?(TypeInfo__InventoryItem__ItemDescription);
          if (pOVar7 != (Object *)0x0) {
            *(undefined8 *)&pOVar7[2].monitor = 0;
            pOVar7[3].monitor = (MonitorData *)0x0;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      (pOVar7,ExceptionArgument__Enum_obj,unaff_EDI);
            pOVar7[1].klass = pOVar5;
            func_?(pOVar7 + 1,pOVar5);
            pOVar7[1].monitor = (MonitorData *)pSVar1;
            func_?(&pOVar7[1].monitor,pSVar1);
            pOVar7[2].klass = pOVar8;
            func_?(pOVar7 + 2,pOVar8);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      (this,(Object *)0x4,pOVar7,
                       MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                      );
            pOVar5 = (Object__Class *)TM::TM__(StringLiteral_Rail_Gun,(MethodInfo *)0x0);
            pSVar1 = TM::TM__(StringLiteral_The_sniper_rifle_uses_a_charged_,(MethodInfo *)0x0);
            pOVar8 = (Object__Class *)
                     TM::TM__(StringLiteral_Devastating_when_used_at_long_ra,(MethodInfo *)0x0);
            pOVar7 = (Object *)func_?(TypeInfo__InventoryItem__ItemDescription);
            if (pOVar7 != (Object *)0x0) {
              *(undefined8 *)&pOVar7[2].monitor = 0;
              pOVar7[3].monitor = (MonitorData *)0x0;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                        (pOVar7,ExceptionArgument__Enum_obj,unaff_EDI);
              pOVar7[1].klass = pOVar5;
              func_?(pOVar7 + 1,pOVar5);
              pOVar7[1].monitor = (MonitorData *)pSVar1;
              func_?(&pOVar7[1].monitor,pSVar1);
              pOVar7[2].klass = pOVar8;
              func_?(pOVar7 + 2,pOVar8);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        (this,(Object *)0x5,pOVar7,
                         MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                        );
              pOVar5 = (Object__Class *)TM::TM__(StringLiteral_Melee_Weapon,(MethodInfo *)0x0);
              pSVar1 = TM::TM__(StringLiteral_A_weapon_designed_for_close_quar,(MethodInfo *)0x0);
              pOVar8 = (Object__Class *)
                       TM::TM__(StringLiteral_Sneak_up_on_your_enemies_to_catc,(MethodInfo *)0x0);
              pOVar7 = (Object *)func_?(TypeInfo__InventoryItem__ItemDescription);
              if (pOVar7 != (Object *)0x0) {
                *(undefined8 *)&pOVar7[2].monitor = 0;
                pOVar7[3].monitor = (MonitorData *)0x0;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                          (pOVar7,ExceptionArgument__Enum_obj,unaff_EDI);
                pOVar7[1].klass = pOVar5;
                func_?(pOVar7 + 1,pOVar5);
                pOVar7[1].monitor = (MonitorData *)pSVar1;
                func_?(&pOVar7[1].monitor,pSVar1);
                pOVar7[2].klass = pOVar8;
                func_?(pOVar7 + 2,pOVar8);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__Add
                          (this,(Object *)0x6,pOVar7,
                           MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                          );
                pOVar5 = (Object__Class *)TM::TM__(StringLiteral_Mutanto,(MethodInfo *)0x0);
                pSVar1 = TM::TM__(StringLiteral_Infuses_the_player_with_mutageni,(MethodInfo *)0x0);
                pOVar8 = (Object__Class *)
                         TM::TM__(StringLiteral_Become_a_super_hero__or_super_vi,(MethodInfo *)0x0);
                pOVar7 = (Object *)func_?(TypeInfo__InventoryItem__ItemDescription);
                if (pOVar7 != (Object *)0x0) {
                  *(undefined8 *)&pOVar7[2].monitor = 0;
                  pOVar7[3].monitor = (MonitorData *)0x0;
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                            (pOVar7,ExceptionArgument__Enum_obj,unaff_EDI);
                  pOVar7[1].klass = pOVar5;
                  func_?(pOVar7 + 1,pOVar5);
                  pOVar7[1].monitor = (MonitorData *)pSVar1;
                  func_?(&pOVar7[1].monitor,pSVar1);
                  pOVar7[2].klass = pOVar8;
                  func_?(pOVar7 + 2,pOVar8);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            (this,(Object *)0x7,pOVar7,
                             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                            );
                  pOVar5 = (Object__Class *)TM::TM__(StringLiteral_Flamethrower,(MethodInfo *)0x0);
                  pSVar1 = TM::TM__(StringLiteral_A_classic__Burn_everything_withi,(MethodInfo *)0x0
                                   );
                  pOVar8 = (Object__Class *)
                           TM::TM__(StringLiteral_Light_your_enemies_on_fire_with_,(MethodInfo *)0x0
                                   );
                  pOVar7 = (Object *)func_?(TypeInfo__InventoryItem__ItemDescription);
                  if (pOVar7 != (Object *)0x0) {
                    *(undefined8 *)&pOVar7[2].monitor = 0;
                    pOVar7[3].monitor = (MonitorData *)0x0;
                    mscorlib.dll::System::ThrowHelper::
                    ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                              (pOVar7,ExceptionArgument__Enum_obj,unaff_EDI);
                    pOVar7[1].klass = pOVar5;
                    func_?(pOVar7 + 1,pOVar5);
                    pOVar7[1].monitor = (MonitorData *)pSVar1;
                    func_?(&pOVar7[1].monitor,pSVar1);
                    pOVar7[2].klass = pOVar8;
                    func_?(pOVar7 + 2,pOVar8);
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__Add
                              (this,(Object *)0x8,pOVar7,
                               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                              );
                    pOVar5 = (Object__Class *)TM::TM__(StringLiteral_Shotgun,(MethodInfo *)0x0);
                    pSVar1 = TM::TM__(StringLiteral_A_gun_modeled_after_the_classic_,
                                      (MethodInfo *)0x0);
                    pOVar8 = (Object__Class *)
                             TM::TM__(StringLiteral_Use_this_in_close_quarters_to_de,
                                      (MethodInfo *)0x0);
                    pOVar7 = (Object *)func_?(TypeInfo__InventoryItem__ItemDescription);
                    if (pOVar7 != (Object *)0x0) {
                      *(undefined8 *)&pOVar7[2].monitor = 0;
                      pOVar7[3].monitor = (MonitorData *)0x0;
                      mscorlib.dll::System::ThrowHelper::
                      ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                (pOVar7,ExceptionArgument__Enum_obj,unaff_EDI);
                      pOVar7[1].klass = pOVar5;
                      func_?(pOVar7 + 1,pOVar5);
                      pOVar7[1].monitor = (MonitorData *)pSVar1;
                      func_?(&pOVar7[1].monitor,pSVar1);
                      pOVar7[2].klass = pOVar8;
                      func_?(pOVar7 + 2,pOVar8);
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__Add
                                (this,(Object *)0x9,pOVar7,
                                 MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                );
                      pOVar5 = (Object__Class *)
                               TM::TM__(StringLiteral_Game_Objective__Star,(MethodInfo *)0x0);
                      pSVar1 = TM::TM__(StringLiteral_The_player_team_who_first_collec,
                                        (MethodInfo *)0x0);
                      pOVar8 = (Object__Class *)
                               TM::TM__(StringLiteral_Collect_all_these_sparkly_trinke,
                                        (MethodInfo *)0x0);
                      pOVar7 = (Object *)func_?(TypeInfo__InventoryItem__ItemDescription);
                      if (pOVar7 != (Object *)0x0) {
                        *(undefined8 *)&pOVar7[2].monitor = 0;
                        pOVar7[3].monitor = (MonitorData *)0x0;
                        mscorlib.dll::System::ThrowHelper::
                        ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                  (pOVar7,ExceptionArgument__Enum_obj,unaff_EDI);
                        pOVar7[1].klass = pOVar5;
                        func_?(pOVar7 + 1,pOVar5);
                        pOVar7[1].monitor = (MonitorData *)pSVar1;
                        func_?(&pOVar7[1].monitor,pSVar1);
                        pOVar7[2].klass = pOVar8;
                        func_?(pOVar7 + 2,pOVar8);
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,System::Object]::Dictionary_2_System_Object_System_Object__Add
                                  (this,(Object *)0xa,pOVar7,
                                   MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                  );
                        pOVar5 = (Object__Class *)
                                 TM::TM__(StringLiteral_Growth_Pill,(MethodInfo *)0x0);
                        pSVar1 = TM::TM__(StringLiteral_Transforms_a_player_into_a_giant,
                                          (MethodInfo *)0x0);
                        pOVar8 = (Object__Class *)
                                 TM::TM__(StringLiteral_Become_a_giant_KoGaMian__capable,
                                          (MethodInfo *)0x0);
                        pOVar7 = (Object *)func_?(TypeInfo__InventoryItem__ItemDescription)
                        ;
                        if (pOVar7 != (Object *)0x0) {
                          *(undefined8 *)&pOVar7[2].monitor = 0;
                          pOVar7[3].monitor = (MonitorData *)0x0;
                          mscorlib.dll::System::ThrowHelper::
                          ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                    (pOVar7,ExceptionArgument__Enum_obj,unaff_EDI);
                          pOVar7[1].klass = pOVar5;
                          func_?(pOVar7 + 1,pOVar5);
                          pOVar7[1].monitor = (MonitorData *)pSVar1;
                          func_?(&pOVar7[1].monitor,pSVar1);
                          pOVar7[2].klass = pOVar8;
                          func_?(pOVar7 + 2,pOVar8);
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__Add
                                    (this,(Object *)0xb,pOVar7,
                                     MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                    );
                          pOVar5 = (Object__Class *)
                                   TM::TM__(StringLiteral_Mouse_Pill,(MethodInfo *)0x0);
                          pSVar1 = TM::TM__(StringLiteral_Shrinks_a_player_to_the_size_of_,
                                            (MethodInfo *)0x0);
                          pOVar8 = (Object__Class *)
                                   TM::TM__(StringLiteral_Become_a_miniature_version_of_yo,
                                            (MethodInfo *)0x0);
                          pOVar7 = (Object *)
                                   func_?(TypeInfo__InventoryItem__ItemDescription);
                          if (pOVar7 != (Object *)0x0) {
                            *(undefined8 *)&pOVar7[2].monitor = 0;
                            pOVar7[3].monitor = (MonitorData *)0x0;
                            mscorlib.dll::System::ThrowHelper::
                            ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                      (pOVar7,ExceptionArgument__Enum_obj,unaff_EDI);
                            pOVar7[1].klass = pOVar5;
                            func_?(pOVar7 + 1,pOVar5);
                            pOVar7[1].monitor = (MonitorData *)pSVar1;
                            func_?(&pOVar7[1].monitor,pSVar1);
                            pOVar7[2].klass = pOVar8;
                            func_?(pOVar7 + 2,pOVar8);
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Object,System::Object]::Dictionary_2_System_Object_System_Object__Add
                                      (this,(Object *)0xc,pOVar7,
                                       MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                      );
                            pOVar5 = (Object__Class *)
                                     TM::TM__(StringLiteral_Mouse_Gun,(MethodInfo *)0x0);
                            pSVar1 = TM::TM__(StringLiteral_A_pistol_that_shrinks_the_target,
                                              (MethodInfo *)0x0);
                            pOVar8 = (Object__Class *)
                                     TM::TM__(StringLiteral_Turn_enemy_players_into_helpless,
                                              (MethodInfo *)0x0);
                            pOVar7 = (Object *)
                                     func_?(TypeInfo__InventoryItem__ItemDescription);
                            if (pOVar7 != (Object *)0x0) {
                              *(undefined8 *)&pOVar7[2].monitor = 0;
                              pOVar7[3].monitor = (MonitorData *)0x0;
                              mscorlib.dll::System::ThrowHelper::
                              ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                        (pOVar7,ExceptionArgument__Enum_obj,unaff_EDI);
                              pOVar7[1].klass = pOVar5;
                              func_?(pOVar7 + 1,pOVar5);
                              pOVar7[1].monitor = (MonitorData *)pSVar1;
                              func_?(&pOVar7[1].monitor,pSVar1);
                              pOVar7[2].klass = pOVar8;
                              func_?(pOVar7 + 2,pOVar8);
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Object,System::Object]::Dictionary_2_System_Object_System_Object__Add
                                        (this,(Object *)0xd,pOVar7,
                                         MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                        );
                              pOVar5 = (Object__Class *)
                                       TM::TM__(StringLiteral_Shuriken,(MethodInfo *)0x0);
                              pSVar1 = TM::TM__(StringLiteral_A_classic_ninja_shuriken_,
                                                (MethodInfo *)0x0);
                              pOVar8 = (Object__Class *)
                                       TM::TM__(StringLiteral_Become_one_with_the_shadows_usin,
                                                (MethodInfo *)0x0);
                              pOVar7 = (Object *)
                                       func_?(TypeInfo__InventoryItem__ItemDescription);
                              if (pOVar7 != (Object *)0x0) {
                                *(undefined8 *)&pOVar7[2].monitor = 0;
                                pOVar7[3].monitor = (MonitorData *)0x0;
                                mscorlib.dll::System::ThrowHelper::
                                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                          (pOVar7,ExceptionArgument__Enum_obj,unaff_EDI);
                                pOVar7[1].klass = pOVar5;
                                func_?(pOVar7 + 1,pOVar5);
                                pOVar7[1].monitor = (MonitorData *)pSVar1;
                                func_?(&pOVar7[1].monitor,pSVar1);
                                pOVar7[2].klass = pOVar8;
                                func_?(pOVar7 + 2,pOVar8);
                                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Object,System::Object]::
                                Dictionary_2_System_Object_System_Object__Add
                                          (this,(Object *)0xe,pOVar7,
                                           MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                          );
                                pOVar5 = (Object__Class *)
                                         TM::TM__(StringLiteral_Multi_Shuriken,(MethodInfo *)0x0);
                                pSVar1 = TM::TM__(StringLiteral_A_handful_of_ninja_shurikens_,
                                                  (MethodInfo *)0x0);
                                pOVar8 = (Object__Class *)
                                         TM::TM__(StringLiteral_Throw_a_line_of_shurikens__and_s,
                                                  (MethodInfo *)0x0);
                                pOVar7 = (Object *)
                                         func_?(TypeInfo__InventoryItem__ItemDescription);
                                if (pOVar7 != (Object *)0x0) {
                                  *(undefined8 *)&pOVar7[2].monitor = 0;
                                  pOVar7[3].monitor = (MonitorData *)0x0;
                                  mscorlib.dll::System::ThrowHelper::
                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                            (pOVar7,ExceptionArgument__Enum_obj,unaff_EDI);
                                  pOVar7[1].klass = pOVar5;
                                  func_?(pOVar7 + 1,pOVar5);
                                  pOVar7[1].monitor = (MonitorData *)pSVar1;
                                  func_?(&pOVar7[1].monitor,pSVar1);
                                  pOVar7[2].klass = pOVar8;
                                  func_?(pOVar7 + 2,pOVar8);
                                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Object,System::Object]::
                                  Dictionary_2_System_Object_System_Object__Add
                                            (this,(Object *)0xf,pOVar7,
                                             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                            );
                                  pOVar5 = (Object__Class *)
                                           TM::TM__(StringLiteral_Cube_Gun,(MethodInfo *)0x0);
                                  pSVar1 = TM::TM__(StringLiteral_Shoots_cubes_that_stick_to_surfa,
                                                    (MethodInfo *)0x0);
                                  pOVar8 = (Object__Class *)
                                           TM::TM__(StringLiteral_Build_awesome_towers__thick_cast,
                                                    (MethodInfo *)0x0);
                                  pOVar7 = (Object *)
                                           func_?(TypeInfo__InventoryItem__ItemDescription)
                                  ;
                                  if (pOVar7 != (Object *)0x0) {
                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                    mscorlib.dll::System::ThrowHelper::
                                    ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                              (pOVar7,ExceptionArgument__Enum_obj,unaff_EDI);
                                    pOVar7[1].klass = pOVar5;
                                    func_?(pOVar7 + 1,pOVar5);
                                    pOVar7[1].monitor = (MonitorData *)pSVar1;
                                    func_?(&pOVar7[1].monitor,pSVar1);
                                    pOVar7[2].klass = pOVar8;
                                    func_?(pOVar7 + 2,pOVar8);
                                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                    ::Object,System::Object]::
                                    Dictionary_2_System_Object_System_Object__Add
                                              (this,(Object *)0x10,pOVar7,
                                               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                              );
                                    pOVar5 = (Object__Class *)
                                             TM::TM__(StringLiteral_Coin,(MethodInfo *)0x0);
                                    pSVar1 = TM::TM__(StringLiteral_Players_pick_these_up_to_pay_for
                                                      ,(MethodInfo *)0x0);
                                    pOVar8 = (Object__Class *)
                                             TM::TM__(StringLiteral_Reward_players_with_coins_used_t
                                                      ,(MethodInfo *)0x0);
                                    pOVar7 = (Object *)
                                             func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                    if (pOVar7 != (Object *)0x0) {
                                      *(undefined8 *)&pOVar7[2].monitor = 0;
                                      pOVar7[3].monitor = (MonitorData *)0x0;
                                      mscorlib.dll::System::ThrowHelper::
                                      ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                (pOVar7,ExceptionArgument__Enum_obj,unaff_EDI);
                                      pOVar7[1].klass = pOVar5;
                                      func_?(pOVar7 + 1,pOVar5);
                                      pOVar7[1].monitor = (MonitorData *)pSVar1;
                                      func_?(&pOVar7[1].monitor,pSVar1);
                                      pOVar7[2].klass = pOVar8;
                                      func_?(pOVar7 + 2,pOVar8);
                                      mscorlib.dll::System::Collections::Generic::
                                      Dictionary`2[System::Object,System::Object]::
                                      Dictionary_2_System_Object_System_Object__Add
                                                (this,(Object *)0x11,pOVar7,
                                                 MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                );
                                      pOVar5 = (Object__Class *)
                                               TM::TM__(StringLiteral_Coin_Chest,(MethodInfo *)0x0);
                                      pSVar1 = TM::TM__(
                                                  StringLiteral_Contains_lots_of_coins__which_ca,
                                                  (MethodInfo *)0x0);
                                      pOVar8 = (Object__Class *)
                                               TM::TM__(
                                                  StringLiteral_Use_this_to_reward_players_for_r,
                                                  (MethodInfo *)0x0);
                                      pOVar7 = (Object *)
                                               func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                      if (pOVar7 != (Object *)0x0) {
                                        *(undefined8 *)&pOVar7[2].monitor = 0;
                                        pOVar7[3].monitor = (MonitorData *)0x0;
                                        mscorlib.dll::System::ThrowHelper::
                                        ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                  (pOVar7,ExceptionArgument__Enum_obj,unaff_EDI);
                                        pOVar7[1].klass = pOVar5;
                                        func_?(pOVar7 + 1,pOVar5);
                                        pOVar7[1].monitor = (MonitorData *)pSVar1;
                                        func_?(&pOVar7[1].monitor,pSVar1);
                                        pOVar7[2].klass = pOVar8;
                                        func_?(pOVar7 + 2,pOVar8);
                                        mscorlib.dll::System::Collections::Generic::
                                        Dictionary`2[System::Object,System::Object]::
                                        Dictionary_2_System_Object_System_Object__Add
                                                  (this,(Object *)0x12,pOVar7,
                                                                                                      
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                        pOVar5 = (Object__Class *)
                                                 TM::TM__(StringLiteral_Dual_Revolvers,
                                                          (MethodInfo *)0x0);
                                        pSVar1 = TM::TM__(
                                                  StringLiteral_A_pair_of_high_powered_revolvers,
                                                  (MethodInfo *)0x0);
                                        pOVar8 = (Object__Class *)
                                                 TM::TM__(
                                                  StringLiteral_Most_effective_in_mid_to_long_ra,
                                                  (MethodInfo *)0x0);
                                        pOVar7 = (Object *)
                                                 func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                        if (pOVar7 != (Object *)0x0) {
                                          *(undefined8 *)&pOVar7[2].monitor = 0;
                                          pOVar7[3].monitor = (MonitorData *)0x0;
                                          mscorlib.dll::System::ThrowHelper::
                                          ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                    (pOVar7,ExceptionArgument__Enum_obj,unaff_EDI);
                                          pOVar7[1].klass = pOVar5;
                                          func_?(pOVar7 + 1,pOVar5);
                                          pOVar7[1].monitor = (MonitorData *)pSVar1;
                                          func_?(&pOVar7[1].monitor,pSVar1);
                                          pOVar7[2].klass = pOVar8;
                                          func_?(pOVar7 + 2,pOVar8);
                                          mscorlib.dll::System::Collections::Generic::
                                          Dictionary`2[System::Object,System::Object]::
                                          Dictionary_2_System_Object_System_Object__Add
                                                    (this,(Object *)0x13,pOVar7,
                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                          pOVar5 = (Object__Class *)
                                                   TM::TM__(StringLiteral_Growth_Gun,
                                                            (MethodInfo *)0x0);
                                          pSVar1 = TM::TM__(
                                                  StringLiteral_Transforms_the_target_into_a_gia,
                                                  (MethodInfo *)0x0);
                                          pOVar8 = (Object__Class *)
                                                   TM::TM__(
                                                  StringLiteral_Make_your_enemies_bigger_targets,
                                                  (MethodInfo *)0x0);
                                          pOVar7 = (Object *)
                                                   func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                          if (pOVar7 != (Object *)0x0) {
                                            *(undefined8 *)&pOVar7[2].monitor = 0;
                                            pOVar7[3].monitor = (MonitorData *)0x0;
                                            mscorlib.dll::System::ThrowHelper::
                                            ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                      (pOVar7,ExceptionArgument__Enum_obj,unaff_EDI)
                                            ;
                                            pOVar7[1].klass = pOVar5;
                                            func_?(pOVar7 + 1,pOVar5);
                                            pOVar7[1].monitor = (MonitorData *)pSVar1;
                                            func_?(&pOVar7[1].monitor,pSVar1);
                                            pOVar7[2].klass = pOVar8;
                                            func_?(pOVar7 + 2,pOVar8);
                                            mscorlib.dll::System::Collections::Generic::
                                            Dictionary`2[System::Object,System::Object]::
                                            Dictionary_2_System_Object_System_Object__Add
                                                      (this,(Object *)0x14,pOVar7,
                                                                                                              
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                            pOVar5 = (Object__Class *)
                                                     TM::TM__(StringLiteral_Revolver,
                                                              (MethodInfo *)0x0);
                                            pSVar1 = TM::TM__(StringLiteral_A_high_powered_revolver_
                                                              ,(MethodInfo *)0x0);
                                            pOVar8 = (Object__Class *)
                                                     TM::TM__(
                                                  StringLiteral_Most_effective_in_mid_to_long_ra,
                                                  (MethodInfo *)0x0);
                                            pOVar7 = (Object *)
                                                     func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                            if (pOVar7 != (Object *)0x0) {
                                              *(undefined8 *)&pOVar7[2].monitor = 0;
                                              pOVar7[3].monitor = (MonitorData *)0x0;
                                              mscorlib.dll::System::ThrowHelper::
                                              ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                        (pOVar7,ExceptionArgument__Enum_obj,
                                                         unaff_EDI);
                                              pOVar7[1].klass = pOVar5;
                                              func_?(pOVar7 + 1,pOVar5);
                                              pOVar7[1].monitor = (MonitorData *)pSVar1;
                                              func_?(&pOVar7[1].monitor,pSVar1);
                                              pOVar7[2].klass = pOVar8;
                                              func_?(pOVar7 + 2,pOVar8);
                                              mscorlib.dll::System::Collections::Generic::
                                              Dictionary`2[System::Object,System::Object]::
                                              Dictionary_2_System_Object_System_Object__Add
                                                        (this,(Object *)0x15,pOVar7,
                                                                                                                  
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                              pOVar5 = (Object__Class *)
                                                       TM::TM__(StringLiteral_Lightning_Speed,
                                                                (MethodInfo *)0x0);
                                              pSVar1 = TM::TM__(
                                                  StringLiteral_Infuses_the_player_with_lightnin,
                                                  (MethodInfo *)0x0);
                                              pOVar8 = (Object__Class *)
                                                       TM::TM__(
                                                  StringLiteral_This_enables_players_to_cross_lo,
                                                  (MethodInfo *)0x0);
                                              pOVar7 = (Object *)
                                                       func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                              if (pOVar7 != (Object *)0x0) {
                                                *(undefined8 *)&pOVar7[2].monitor = 0;
                                                pOVar7[3].monitor = (MonitorData *)0x0;
                                                mscorlib.dll::System::ThrowHelper::
                                                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                          (pOVar7,ExceptionArgument__Enum_obj,
                                                           unaff_EDI);
                                                pOVar7[1].klass = pOVar5;
                                                func_?(pOVar7 + 1,pOVar5);
                                                pOVar7[1].monitor = (MonitorData *)pSVar1;
                                                func_?(&pOVar7[1].monitor,pSVar1);
                                                pOVar7[2].klass = pOVar8;
                                                func_?(pOVar7 + 2,pOVar8);
                                                mscorlib.dll::System::Collections::Generic::
                                                Dictionary`2[System::Object,System::Object]::
                                                Dictionary_2_System_Object_System_Object__Add
                                                          (this,(Object *)0x16,pOVar7,
                                                                                                                      
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                pSVar1 = TM::TM__(StringLiteral_Oculus,
                                                                  (MethodInfo *)0x0);
                                                pSVar2 = TM::TM__(
                                                  StringLiteral_A_customizable_monster_from_anot,
                                                  (MethodInfo *)0x0);
                                                pSVar3 = TM::TM__(
                                                  StringLiteral_These_hideous_creatures_only_hav,
                                                  (MethodInfo *)0x0);
                                                pIVar4 = (InventoryItem_ItemDescription *)
                                                         func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                if (pIVar4 != (InventoryItem_ItemDescription *)0x0)
                                                {
                                                  InventoryItem+ItemDescription::
                                                  InventoryItem_ItemDescription__ctor_1
                                                            (pIVar4,pSVar1,pSVar2,pSVar3,
                                                             (Vector3)(ZEXT412(0x3f333333) << 0x40),
                                                             (MethodInfo *)0x0);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x17,(Object *)pIVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  TM::TM__(StringLiteral_Teleporter,
                                                           (MethodInfo *)0x0);
                                                  TM::TM__(
                                                  StringLiteral_A_pair_of_connected_teleporters_,
                                                  (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_Useful_for_separating_different_,
                                                  (MethodInfo *)0x0);
                                                  pSVar2 = (String *)&UNK_?;
                                                  pIVar9 = TypeInfo__InventoryItem__ItemDescription
                                                  ;
                                                  pIVar4 = (InventoryItem_ItemDescription *)
                                                           func_?();
                                                  if (pIVar4 != (InventoryItem_ItemDescription *)0x0
                                                     ) {
                                                    cameraPreviewerOffset.z = -1.0;
                                                    cameraPreviewerOffset.x = 0.2;
                                                    cameraPreviewerOffset.y = -0.3;
                                                    InventoryItem+ItemDescription::
                                                    InventoryItem_ItemDescription__ctor_1
                                                              (pIVar4,(String *)pIVar9,pSVar2,
                                                               pSVar1,cameraPreviewerOffset,
                                                               (MethodInfo *)0x0);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Object,System::Object]::
                                                    Dictionary_2_System_Object_System_Object__Add
                                                              (this,(Object *)0x18,(Object *)pIVar4,
                                                                                                                              
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  TM::TM__(StringLiteral_Hovercraft,
                                                           (MethodInfo *)0x0);
                                                  TM::TM__(StringLiteral_A_customizable_hovercraft_,
                                                           (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_Enables_players_to_traverse_grea,
                                                  (MethodInfo *)0x0);
                                                  pSVar2 = (String *)&UNK_?;
                                                  pIVar9 = TypeInfo__InventoryItem__ItemDescription
                                                  ;
                                                  pIVar4 = (InventoryItem_ItemDescription *)
                                                           func_?();
                                                  if (pIVar4 != (InventoryItem_ItemDescription *)0x0
                                                     ) {
                                                    InventoryItem+ItemDescription::
                                                    InventoryItem_ItemDescription__ctor_1
                                                              (pIVar4,(String *)pIVar9,pSVar2,
                                                               pSVar1,(Vector3)(ZEXT412(0xbe99999a)
                                                                               << 0x40),
                                                               (MethodInfo *)0x0);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Object,System::Object]::
                                                    Dictionary_2_System_Object_System_Object__Add
                                                              (this,(Object *)0x19,(Object *)pIVar4,
                                                                                                                              
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  TM::TM__(StringLiteral_Hamster_Ball,
                                                           (MethodInfo *)0x0);
                                                  TM::TM__(StringLiteral_A_giant_hamster_ball_,
                                                           (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_This_bouncy_ball_offers_a_hilari,
                                                  (MethodInfo *)0x0);
                                                  pSVar2 = (String *)&UNK_?;
                                                  pIVar9 = TypeInfo__InventoryItem__ItemDescription
                                                  ;
                                                  pIVar4 = (InventoryItem_ItemDescription *)
                                                           func_?();
                                                  if (pIVar4 != (InventoryItem_ItemDescription *)0x0
                                                     ) {
                                                    InventoryItem+ItemDescription::
                                                    InventoryItem_ItemDescription__ctor_1
                                                              (pIVar4,(String *)pIVar9,pSVar2,
                                                               pSVar1,(Vector3)ZEXT812(
                                                  0x3f4ccccdbe99999a),(MethodInfo *)0x0);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x1a,(Object *)pIVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  TM::TM__(StringLiteral_Fire_Sentry_Tower,
                                                           (MethodInfo *)0x0);
                                                  TM::TM__(
                                                  StringLiteral_A_sentry_tower__shooting_fire_at,
                                                  (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_Fire_sentries_serve_as_stationar,
                                                  (MethodInfo *)0x0);
                                                  pSVar2 = (String *)&UNK_?;
                                                  pIVar9 = TypeInfo__InventoryItem__ItemDescription
                                                  ;
                                                  pIVar4 = (InventoryItem_ItemDescription *)
                                                           func_?();
                                                  if (pIVar4 != (InventoryItem_ItemDescription *)0x0
                                                     ) {
                                                    cameraPreviewerOffset_00.z = -1.0;
                                                    cameraPreviewerOffset_00.x = 0.5;
                                                    cameraPreviewerOffset_00.y = -0.9;
                                                    InventoryItem+ItemDescription::
                                                    InventoryItem_ItemDescription__ctor_1
                                                              (pIVar4,(String *)pIVar9,pSVar2,
                                                               pSVar1,cameraPreviewerOffset_00,
                                                               (MethodInfo *)0x0);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Object,System::Object]::
                                                    Dictionary_2_System_Object_System_Object__Add
                                                              (this,(Object *)0x1b,(Object *)pIVar4,
                                                                                                                              
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  TM::TM__(StringLiteral_Platform,(MethodInfo *)0x0)
                                                  ;
                                                  TM::TM__(
                                                  StringLiteral_Create_elevators_or_platforms_wi,
                                                  (MethodInfo *)0x0);
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_Useful_when_bridging_the_gap_bet,
                                                  (MethodInfo *)0x0);
                                                  pMVar6 = (MonitorData *)&UNK_?;
                                                  pOVar7 = (Object *)func_?();
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = (Object__Class *)&UNK_?;
                                                  func_?(pOVar7 + 1,&UNK_?);
                                                  pOVar7[1].monitor = pMVar6;
                                                  func_?(&pOVar7[1].monitor,pMVar6);
                                                  pOVar7[2].klass = pOVar5;
                                                  func_?(pOVar7 + 2,pOVar5);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x1c,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(StringLiteral_Horizontal_Rotator
                                                                    ,(MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_A_custom_cube_model__that_rotate,
                                                  (MethodInfo *)0x0);
                                                  pOVar8 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_Can_be_used_as_a_challenging_way,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar1;
                                                  func_?(&pOVar7[1].monitor,pSVar1);
                                                  pOVar7[2].klass = pOVar8;
                                                  func_?(pOVar7 + 2,pOVar8);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x1d,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(StringLiteral_Vertical_Rotator,
                                                                    (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_A_custom_cube_model__that_rotate,
                                                  (MethodInfo *)0x0);
                                                  pOVar8 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_Useful_for_pushing_players_off_p,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar1;
                                                  func_?(&pOVar7[1].monitor,pSVar1);
                                                  pOVar7[2].klass = pOVar8;
                                                  func_?(pOVar7 + 2,pOVar8);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x1e,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pSVar1 = TM::TM__(StringLiteral_Dragonfly_Jetpack,
                                                                    (MethodInfo *)0x0);
                                                  pSVar2 = TM::TM__(
                                                  StringLiteral_A_big_customizable_jetpack_,
                                                  (MethodInfo *)0x0);
                                                  pSVar3 = TM::TM__(
                                                  StringLiteral_This_jetpack_offers_unprecedente,
                                                  (MethodInfo *)0x0);
                                                  pIVar4 = (InventoryItem_ItemDescription *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  if (pIVar4 != (InventoryItem_ItemDescription *)0x0
                                                     ) {
                                                    cameraPreviewerOffset_01.z = 0.2;
                                                    cameraPreviewerOffset_01.x = 0.0;
                                                    cameraPreviewerOffset_01.y = -1.0;
                                                    InventoryItem+ItemDescription::
                                                    InventoryItem_ItemDescription__ctor_1
                                                              (pIVar4,pSVar1,pSVar2,pSVar3,
                                                               cameraPreviewerOffset_01,
                                                               (MethodInfo *)0x0);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Object,System::Object]::
                                                    Dictionary_2_System_Object_System_Object__Add
                                                              (this,(Object *)0x1f,(Object *)pIVar4,
                                                                                                                              
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  TM::TM__(StringLiteral_Ghost,(MethodInfo *)0x0);
                                                  TM::TM__(
                                                  StringLiteral_An_unkillable_ghost_which_damage,
                                                  (MethodInfo *)0x0);
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_This_scary_monster_can_move_thro,
                                                  (MethodInfo *)0x0);
                                                  pMVar6 = (MonitorData *)&UNK_?;
                                                  pOVar7 = (Object *)func_?();
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = (Object__Class *)&UNK_?;
                                                  func_?(pOVar7 + 1,&UNK_?);
                                                  pOVar7[1].monitor = pMVar6;
                                                  func_?(&pOVar7[1].monitor,pMVar6);
                                                  pOVar7[2].klass = pOVar5;
                                                  func_?(pOVar7 + 2,pOVar5);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x20,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pSVar1 = TM::TM__(StringLiteral_Frost_Sentry_Tower
                                                                    ,(MethodInfo *)0x0);
                                                  pSVar2 = TM::TM__(
                                                  StringLiteral_A_sentry_tower__shooting_a_beam_,
                                                  (MethodInfo *)0x0);
                                                  pSVar3 = TM::TM__(
                                                  StringLiteral_Frost_sentries_serve_as_stationa,
                                                  (MethodInfo *)0x0);
                                                  pIVar4 = (InventoryItem_ItemDescription *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  if (pIVar4 != (InventoryItem_ItemDescription *)0x0
                                                     ) {
                                                    cameraPreviewerOffset_02.z = -1.0;
                                                    cameraPreviewerOffset_02.x = 0.5;
                                                    cameraPreviewerOffset_02.y = -0.9;
                                                    InventoryItem+ItemDescription::
                                                    InventoryItem_ItemDescription__ctor_1
                                                              (pIVar4,pSVar1,pSVar2,pSVar3,
                                                               cameraPreviewerOffset_02,
                                                               (MethodInfo *)0x0);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Object,System::Object]::
                                                    Dictionary_2_System_Object_System_Object__Add
                                                              (this,(Object *)0x21,(Object *)pIVar4,
                                                                                                                              
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  TM::TM__(StringLiteral_Firefly_Jetpack,
                                                           (MethodInfo *)0x0);
                                                  TM::TM__(
                                                  StringLiteral_A_small_customizable_jetpack_,
                                                  (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_Soar_to_the_skies_with_this_ligh,
                                                  (MethodInfo *)0x0);
                                                  pSVar2 = (String *)&UNK_?;
                                                  pIVar9 = TypeInfo__InventoryItem__ItemDescription
                                                  ;
                                                  pIVar4 = (InventoryItem_ItemDescription *)
                                                           func_?();
                                                  if (pIVar4 != (InventoryItem_ItemDescription *)0x0
                                                     ) {
                                                    cameraPreviewerOffset_03.z = -0.5;
                                                    cameraPreviewerOffset_03.x = 0.0;
                                                    cameraPreviewerOffset_03.y = -0.7;
                                                    InventoryItem+ItemDescription::
                                                    InventoryItem_ItemDescription__ctor_1
                                                              (pIVar4,(String *)pIVar9,pSVar2,
                                                               pSVar1,cameraPreviewerOffset_03,
                                                               (MethodInfo *)0x0);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Object,System::Object]::
                                                    Dictionary_2_System_Object_System_Object__Add
                                                              (this,(Object *)0x22,(Object *)pIVar4,
                                                                                                                              
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  TM::TM__(StringLiteral_Light_Cube,
                                                           (MethodInfo *)0x0);
                                                  TM::TM__(
                                                  StringLiteral_A_colored_light__that_can_be_con,
                                                  (MethodInfo *)0x0);
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_Light_up_the_dark_areas_of_your_,
                                                  (MethodInfo *)0x0);
                                                  pMVar6 = (MonitorData *)&UNK_?;
                                                  pOVar7 = (Object *)func_?();
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = (Object__Class *)&UNK_?;
                                                  func_?(pOVar7 + 1,&UNK_?);
                                                  pOVar7[1].monitor = pMVar6;
                                                  func_?(&pOVar7[1].monitor,pMVar6);
                                                  pOVar7[2].klass = pOVar5;
                                                  func_?(pOVar7 + 2,pOVar5);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x23,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_Blue_Team_Spawn_Point,
                                                  (MethodInfo *)0x0);
                                                  pSVar2 = TM::TM__(
                                                  StringLiteral_Spawn_point_for_the_blue_team__P,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  pSVar1 = ::StringLiteral__;
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar2;
                                                  func_?(&pOVar7[1].monitor,pSVar2);
                                                  pOVar7[2].klass = (Object__Class *)pSVar1;
                                                  func_?(pOVar7 + 2,pSVar1);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x24,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_Red_Team_Spawn_Point,
                                                  (MethodInfo *)0x0);
                                                  pSVar2 = TM::TM__(
                                                  StringLiteral_Spawn_point_for_the_red_team__Pl,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  pSVar1 = ::StringLiteral__;
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar2;
                                                  func_?(&pOVar7[1].monitor,pSVar2);
                                                  pOVar7[2].klass = (Object__Class *)pSVar1;
                                                  func_?(pOVar7 + 2,pSVar1);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x25,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_Green_Team_Spawn_Point,
                                                  (MethodInfo *)0x0);
                                                  pSVar2 = TM::TM__(
                                                  StringLiteral_Spawn_point_for_the_green_team__,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  pSVar1 = ::StringLiteral__;
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar2;
                                                  func_?(&pOVar7[1].monitor,pSVar2);
                                                  pOVar7[2].klass = (Object__Class *)pSVar1;
                                                  func_?(pOVar7 + 2,pSVar1);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x26,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_Yellow_Team_Spawn_Point,
                                                  (MethodInfo *)0x0);
                                                  pSVar2 = TM::TM__(
                                                  StringLiteral_Spawn_point_for_the_yellow_team_,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  pSVar1 = ::StringLiteral__;
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar2;
                                                  func_?(&pOVar7[1].monitor,pSVar2);
                                                  pOVar7[2].klass = (Object__Class *)pSVar1;
                                                  func_?(pOVar7 + 2,pSVar1);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x27,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_Game_Objective__Flag,
                                                  (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_The_player_who_reaches_the_flag_,
                                                  (MethodInfo *)0x0);
                                                  pOVar8 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_Flags_are_a_great_way_to_give_pl,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar1;
                                                  func_?(&pOVar7[1].monitor,pSVar1);
                                                  pOVar7[2].klass = pOVar8;
                                                  func_?(pOVar7 + 2,pOVar8);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x28,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(StringLiteral_Explosive,
                                                                    (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_A_bundle_of_dynamite_that_will_e,
                                                  (MethodInfo *)0x0);
                                                  pOVar8 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_Use_this_by_connecting_it_to_a_p,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar1;
                                                  func_?(&pOVar7[1].monitor,pSVar1);
                                                  pOVar7[2].klass = pOVar8;
                                                  func_?(pOVar7 + 2,pOVar8);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x29,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(StringLiteral_Fire,
                                                                    (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_This_burns_anyone_who_gets_too_c,
                                                  (MethodInfo *)0x0);
                                                  pOVar8 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_You_can_pair_this_with_the_Smoke,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar1;
                                                  func_?(&pOVar7[1].monitor,pSVar1);
                                                  pOVar7[2].klass = pOVar8;
                                                  func_?(pOVar7 + 2,pOVar8);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x2a,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(StringLiteral_Smoke,
                                                                    (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_Emits_a_cloud_of_smoke__The_smok,
                                                  (MethodInfo *)0x0);
                                                  pOVar8 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_Great_cube_if_you_want_to_obstru,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar1;
                                                  func_?(&pOVar7[1].monitor,pSVar1);
                                                  pOVar7[2].klass = pOVar8;
                                                  func_?(pOVar7 + 2,pOVar8);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x2b,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(StringLiteral_Text,
                                                                    (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_An_object_enabling_you_to_displa,
                                                  (MethodInfo *)0x0);
                                                  pOVar8 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_Display_a_game_title__help_text_,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar1;
                                                  func_?(&pOVar7[1].monitor,pSVar1);
                                                  pOVar7[2].klass = pOVar8;
                                                  func_?(pOVar7 + 2,pOVar8);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x2c,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(StringLiteral_Skybox_Cube,
                                                                    (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_Manage_the_look_of_your_game_by_,
                                                  (MethodInfo *)0x0);
                                                  pOVar8 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_Adding_this_to_your_project_will,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar1;
                                                  func_?(&pOVar7[1].monitor,pSVar1);
                                                  pOVar7[2].klass = pOVar8;
                                                  func_?(pOVar7 + 2,pOVar8);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x2d,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(StringLiteral_Water_Cube,
                                                                    (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_Adjust_the_level_and_color_of_yo,
                                                  (MethodInfo *)0x0);
                                                  pOVar8 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_WARNING__KoGaMians_cannot_breath,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar1;
                                                  func_?(&pOVar7[1].monitor,pSVar1);
                                                  pOVar7[2].klass = pOVar8;
                                                  func_?(pOVar7 + 2,pOVar8);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x2e,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(StringLiteral_Speaker,
                                                                    (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_Add_sounds_to_your_game__There_s,
                                                  (MethodInfo *)0x0);
                                                  pOVar8 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_This_is_great_for_creating_the_a,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar1;
                                                  func_?(&pOVar7[1].monitor,pSVar1);
                                                  pOVar7[2].klass = pOVar8;
                                                  func_?(pOVar7 + 2,pOVar8);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x2f,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(StringLiteral_Checkpoint,
                                                                    (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_A_player_who_reaches_this_will_r,
                                                  (MethodInfo *)0x0);
                                                  pOVar8 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_This_is_a_must_have_for_any_leve,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar1;
                                                  func_?(&pOVar7[1].monitor,pSVar1);
                                                  pOVar7[2].klass = pOVar8;
                                                  func_?(pOVar7 + 2,pOVar8);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x31,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_Game_Objective__Eliminate_the_Oc,
                                                  (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_Set_a_Oculus_kill_limit_for_your,
                                                  (MethodInfo *)0x0);
                                                  pOVar8 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_The_team_or_player_that_reaches_,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar1;
                                                  func_?(&pOVar7[1].monitor,pSVar1);
                                                  pOVar7[2].klass = pOVar8;
                                                  func_?(pOVar7 + 2,pOVar8);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x32,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(StringLiteral_Wind_Turbine,
                                                                    (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_A_big_fan__which_blows_players_a,
                                                  (MethodInfo *)0x0);
                                                  pOVar8 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_You_can_stack_several_wind_turbi,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar1;
                                                  func_?(&pOVar7[1].monitor,pSVar1);
                                                  pOVar7[2].klass = pOVar8;
                                                  func_?(pOVar7 + 2,pOVar8);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x33,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(StringLiteral_Round_Time,
                                                                    (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_Set_a_time_limit_for_a_round__Af,
                                                  (MethodInfo *)0x0);
                                                  pOVar8 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_Round_cubes_are_a_great_if_your_,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar1;
                                                  func_?(&pOVar7[1].monitor,pSVar1);
                                                  pOVar7[2].klass = pOVar8;
                                                  func_?(pOVar7 + 2,pOVar8);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x34,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_Game_Objective__Death_match,
                                                  (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_Set_a_player_kill_limit_for_your,
                                                  (MethodInfo *)0x0);
                                                  pOVar8 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_Add_this_to_create_a_death_match,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar1;
                                                  func_?(&pOVar7[1].monitor,pSVar1);
                                                  pOVar7[2].klass = pOVar8;
                                                  func_?(pOVar7 + 2,pOVar8);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x35,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(StringLiteral_Camera_Cube,
                                                                    (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_An_object_specifying_the_distanc,
                                                  (MethodInfo *)0x0);
                                                  pOVar8 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_This_is_a_great_way_to_control_t,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar1;
                                                  func_?(&pOVar7[1].monitor,pSVar1);
                                                  pOVar7[2].klass = pOVar8;
                                                  func_?(pOVar7 + 2,pOVar8);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x36,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(StringLiteral_Delay_Cube,
                                                                    (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_When_receiving_a_signal_from_ano,
                                                  (MethodInfo *)0x0);
                                                  pOVar8 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_You_can_put_these_in_sequence_to,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar1;
                                                  func_?(&pOVar7[1].monitor,pSVar1);
                                                  pOVar7[2].klass = pOVar8;
                                                  func_?(pOVar7 + 2,pOVar8);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x37,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(StringLiteral_Toggle_Cube,
                                                                    (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_Switches_between_ON_and_OFF_each,
                                                  (MethodInfo *)0x0);
                                                  pOVar8 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_Do_you_want_to_open_and_close_th,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar1;
                                                  func_?(&pOVar7[1].monitor,pSVar1);
                                                  pOVar7[2].klass = pOVar8;
                                                  func_?(pOVar7 + 2,pOVar8);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x38,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(StringLiteral_Negate_Cube,
                                                                    (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_A_logic_object_which_sends_the_o,
                                                  (MethodInfo *)0x0);
                                                  pOVar8 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_Inverting_a_signal_open_up_many_,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar1;
                                                  func_?(&pOVar7[1].monitor,pSVar1);
                                                  pOVar7[2].klass = pOVar8;
                                                  func_?(pOVar7 + 2,pOVar8);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x39,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(StringLiteral_And_Cube,
                                                                    (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_The_And_Cube_takes_several_input,
                                                  (MethodInfo *)0x0);
                                                  pOVar8 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_If_you_want_players_to_stand_on_,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar1;
                                                  func_?(&pOVar7[1].monitor,pSVar1);
                                                  pOVar7[2].klass = pOVar8;
                                                  func_?(pOVar7 + 2,pOVar8);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x3a,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(StringLiteral_Pressure_Plate,
                                                                    (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_Whenever_a_player_steps_on_the_p,
                                                  (MethodInfo *)0x0);
                                                  pOVar8 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_Connect_this_to_an_toggle_box_fo,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar1;
                                                  func_?(&pOVar7[1].monitor,pSVar1);
                                                  pOVar7[2].klass = pOVar8;
                                                  func_?(pOVar7 + 2,pOVar8);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x3b,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(StringLiteral_Cube_Model_Hider,
                                                                    (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_Hides_connected_cube_model_when_,
                                                  (MethodInfo *)0x0);
                                                  pOVar8 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_This_is_most_commonly_used_to_en,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar1;
                                                  func_?(&pOVar7[1].monitor,pSVar1);
                                                  pOVar7[2].klass = pOVar8;
                                                  func_?(pOVar7 + 2,pOVar8);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x3c,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(StringLiteral_Pulse_Cube,
                                                                    (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_This_logic_cube_sends_signals_in,
                                                  (MethodInfo *)0x0);
                                                  pOVar8 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_This_is_really_neat_when_you_wan,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar1;
                                                  func_?(&pOVar7[1].monitor,pSVar1);
                                                  pOVar7[2].klass = pOVar8;
                                                  func_?(pOVar7 + 2,pOVar8);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x3d,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(StringLiteral_Random_Cube,
                                                                    (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_Powers_one_connected_object_at_r,
                                                  (MethodInfo *)0x0);
                                                  pOVar8 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_This_is_useful_if_you_want_to_cr,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar1;
                                                  func_?(&pOVar7[1].monitor,pSVar1);
                                                  pOVar7[2].klass = pOVar8;
                                                  func_?(pOVar7 + 2,pOVar8);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x3e,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(StringLiteral_Counting_Cube,
                                                                    (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_Set_a_count__Each_time_the_cube_,
                                                  (MethodInfo *)0x0);
                                                  pOVar8 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_This_looks_super_cool_and_can_be,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar1;
                                                  func_?(&pOVar7[1].monitor,pSVar1);
                                                  pOVar7[2].klass = pOVar8;
                                                  func_?(pOVar7 + 2,pOVar8);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x3f,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(StringLiteral_Target_Cube,
                                                                    (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_Sends_a_signal_when_shot_,
                                                  (MethodInfo *)0x0);
                                                  pOVar8 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_Can_be_used_to_open_doors_or_sec,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar1;
                                                  func_?(&pOVar7[1].monitor,pSVar1);
                                                  pOVar7[2].klass = pOVar8;
                                                  func_?(pOVar7 + 2,pOVar8);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x40,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(StringLiteral_Lever,
                                                                    (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_Sends_a_signal_when_pulled_,
                                                  (MethodInfo *)0x0);
                                                  pOVar8 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_Open_doors__trigger_explosives__,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar1;
                                                  func_?(&pOVar7[1].monitor,pSVar1);
                                                  pOVar7[2].klass = pOVar8;
                                                  func_?(pOVar7 + 2,pOVar8);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x41,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(StringLiteral_Collect_And_Drop,
                                                                    (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_A_pair_consisting_of_a_pickup_an,
                                                  (MethodInfo *)0x0);
                                                  pOVar8 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_Can_be_used_for_everything_from_,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar1;
                                                  func_?(&pOVar7[1].monitor,pSVar1);
                                                  pOVar7[2].klass = pOVar8;
                                                  func_?(pOVar7 + 2,pOVar8);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x42,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(StringLiteral_Heal_Ray,
                                                                    (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_Shoots_a_ray_that_heals_people__,
                                                  (MethodInfo *)0x0);
                                                  pOVar8 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_Don_t_let_your_friends_die__shoo,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar1;
                                                  func_?(&pOVar7[1].monitor,pSVar1);
                                                  pOVar7[2].klass = pOVar8;
                                                  func_?(pOVar7 + 2,pOVar8);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x43,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(StringLiteral_Global_Speaker,
                                                                    (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_Adds_a_global_sound_to_the_game_,
                                                  (MethodInfo *)0x0);
                                                  pOVar8 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_This_can_be_used_to_make_a_bette,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar1;
                                                  func_?(&pOVar7[1].monitor,pSVar1);
                                                  pOVar7[2].klass = pOVar8;
                                                  func_?(pOVar7 + 2,pOVar8);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x30,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_Game_Objective__Time_Attack_Flag,
                                                  (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_Records_the_time_it_took_for_a_p,
                                                  (MethodInfo *)0x0);
                                                  pOVar8 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_Lets_players_take_their_time_rea,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar1;
                                                  func_?(&pOVar7[1].monitor,pSVar1);
                                                  pOVar7[2].klass = pOVar8;
                                                  func_?(pOVar7 + 2,pOVar8);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x44,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(StringLiteral_Trigger_Cube,
                                                                    (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_While_a_player_is_inside_the_are,
                                                  (MethodInfo *)0x0);
                                                  pOVar8 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_Allows_for_scripted_events_in_a_,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar1;
                                                  func_?(&pOVar7[1].monitor,pSVar1);
                                                  pOVar7[2].klass = pOVar8;
                                                  func_?(pOVar7 + 2,pOVar8);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x45,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(StringLiteral_Team_Editor,
                                                                    (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_This_object_allows_you_to_change,
                                                  (MethodInfo *)0x0);
                                                  pOVar8 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_Modify_the_roles_of_your_teams__,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar1;
                                                  func_?(&pOVar7[1].monitor,pSVar1);
                                                  pOVar7[2].klass = pOVar8;
                                                  func_?(pOVar7 + 2,pOVar8);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x46,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(StringLiteral_Crystal,
                                                                    (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_Players_pick_these_up_to_get_pro,
                                                  (MethodInfo *)0x0);
                                                  pOVar8 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_Use_this_to_reward_players_for_r,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar1;
                                                  func_?(&pOVar7[1].monitor,pSVar1);
                                                  pOVar7[2].klass = pOVar8;
                                                  func_?(pOVar7 + 2,pOVar8);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x47,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(StringLiteral_Crystal_Vein,
                                                                    (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_Contains_lots_of_crystals__which,
                                                  (MethodInfo *)0x0);
                                                  pOVar8 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_Use_this_to_reward_players_for_r,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar1;
                                                  func_?(&pOVar7[1].monitor,pSVar1);
                                                  pOVar7[2].klass = pOVar8;
                                                  func_?(pOVar7 + 2,pOVar8);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x48,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(StringLiteral_Class,
                                                                    (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_Allows_players_to_spawn_as_a_cla,
                                                  (MethodInfo *)0x0);
                                                  pOVar8 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_Customize_different_Classes_with,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar1;
                                                  func_?(&pOVar7[1].monitor,pSVar1);
                                                  pOVar7[2].klass = pOVar8;
                                                  func_?(pOVar7 + 2,pOVar8);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x49,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(StringLiteral_Vehicle_Energy,
                                                                    (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_Can_be_used_to_refill_vehicles_e,
                                                  (MethodInfo *)0x0);
                                                  pOVar8 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_Make_a_game_where_you_have_to_pi,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar1;
                                                  func_?(&pOVar7[1].monitor,pSVar1);
                                                  pOVar7[2].klass = pOVar8;
                                                  func_?(pOVar7 + 2,pOVar8);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x4a,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(StringLiteral_Door,
                                                                    (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_A_door_that_can_be_opened_by_a_s,
                                                  (MethodInfo *)0x0);
                                                  pOVar8 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_Use_this_to_make_an_animated_doo,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar1;
                                                  func_?(&pOVar7[1].monitor,pSVar1);
                                                  pOVar7[2].klass = pOVar8;
                                                  func_?(pOVar7 + 2,pOVar8);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x4b,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(StringLiteral_Sliding_Door,
                                                                    (MethodInfo *)0x0);
                                                  pSVar1 = TM::TM__(
                                                  StringLiteral_A_sliding_door_that_can_be_opene,
                                                  (MethodInfo *)0x0);
                                                  pOVar8 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_Use_this_to_make_an_animated_sli,
                                                  (MethodInfo *)0x0);
                                                  pOVar7 = (Object *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = pOVar5;
                                                  func_?(pOVar7 + 1,pOVar5);
                                                  pOVar7[1].monitor = (MonitorData *)pSVar1;
                                                  func_?(&pOVar7[1].monitor,pSVar1);
                                                  pOVar7[2].klass = pOVar8;
                                                  func_?(pOVar7 + 2,pOVar8);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x4c,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  pSVar1 = TM::TM__(StringLiteral_Trap_Door,
                                                                    (MethodInfo *)0x0);
                                                  pSVar2 = TM::TM__(
                                                  StringLiteral_A_trap_door_that_can_be_opened_b,
                                                  (MethodInfo *)0x0);
                                                  pSVar3 = TM::TM__(
                                                  StringLiteral_Use_this_to_make_an_animated_tra,
                                                  (MethodInfo *)0x0);
                                                  pIVar4 = (InventoryItem_ItemDescription *)
                                                           func_?(
                                                  TypeInfo__InventoryItem__ItemDescription);
                                                  if (pIVar4 != (InventoryItem_ItemDescription *)0x0
                                                     ) {
                                                    cameraPreviewerOffset_04.z = -1.0;
                                                    cameraPreviewerOffset_04.x = 0.5;
                                                    cameraPreviewerOffset_04.y = -0.9;
                                                    InventoryItem+ItemDescription::
                                                    InventoryItem_ItemDescription__ctor_1
                                                              (pIVar4,pSVar1,pSVar2,pSVar3,
                                                               cameraPreviewerOffset_04,
                                                               (MethodInfo *)0x0);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Object,System::Object]::
                                                    Dictionary_2_System_Object_System_Object__Add
                                                              (this,(Object *)0x4d,(Object *)pIVar4,
                                                                                                                              
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  TM::TM__(StringLiteral_Costume,(MethodInfo *)0x0);
                                                  TM::TM__(StringLiteral_An_equippable_costume_,
                                                           (MethodInfo *)0x0);
                                                  pOVar5 = (Object__Class *)
                                                           TM::TM__(
                                                  StringLiteral_Equip_this_to_blend_into_the_env,
                                                  (MethodInfo *)0x0);
                                                  pMVar6 = (MonitorData *)&UNK_?;
                                                  pOVar7 = (Object *)func_?();
                                                  if (pOVar7 != (Object *)0x0) {
                                                    *(undefined8 *)&pOVar7[2].monitor = 0;
                                                    pOVar7[3].monitor = (MonitorData *)0x0;
                                                    mscorlib.dll::System::ThrowHelper::
                                                                                                        
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                            (pOVar7,ExceptionArgument__Enum_obj,
                                                             unaff_EDI);
                                                  pOVar7[1].klass = (Object__Class *)&UNK_?;
                                                  func_?(pOVar7 + 1,&UNK_?);
                                                  pOVar7[1].monitor = pMVar6;
                                                  func_?(&pOVar7[1].monitor,pMVar6);
                                                  pOVar7[2].klass = pOVar5;
                                                  func_?(pOVar7 + 2,pOVar5);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__Add
                                                            (this,(Object *)0x4e,pOVar7,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                                                  );
                                                  TypeInfo__InventoryItem->static_fields->
                                                  localItemDescriptionOverride =
                                                       (
                                                  Dictionary_2_MVWorldObjectDocumentationType_InventoryItem_ItemDescription_
                                                  *)this;
                                                  func_?(TypeInfo__InventoryItem->
                                                                  static_fields,this);
                                                  return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* InventoryItem() */

void Assembly-CSharp.dll::InventoryItem::InventoryItem__ctor(InventoryItem *this,MethodInfo *method)

{
  (this->fields).hasData = 1;
  (this->fields).purchased = 1;
  return;
}


/* InventoryItem(Dictionary`2[System.Byte,System.Object]) */

void Assembly-CSharp.dll::InventoryItem::InventoryItem__ctor_1
               (InventoryItem *this,Dictionary_2_System_Byte_System_Object_ *data,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  (this->fields).hasData = 1;
  (this->fields).purchased = 1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if (data == (Dictionary_2_System_Byte_System_Object_ *)0x0) {
code_?:
    func_?();
  }
  else {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
             Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                       ((Dictionary_2_System_ByteEnum_System_Object_ *)data,0x28,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                       );
    if (pOVar1 == (Object *)0x0) goto code_?;
    if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      piVar2 = (int32_t *)func_?();
      (this->fields).itemID = *piVar2;
      pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)data,0x96,
                          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                         );
      if (pOVar1 == (Object *)0x0) goto code_?;
      if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar2 = (int32_t *)func_?();
        (this->fields).itemCategoryID = *piVar2;
        pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)data,0x29,
                            MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                           );
        if (pOVar1 == (Object *)0x0) goto code_?;
        if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
          piVar2 = (int32_t *)func_?();
          (this->fields).itemTypeID = *piVar2;
          pSVar3 = (String *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)data,0x2a,
                              MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                             );
          if (pSVar3 == (String *)0x0) {
            (this->fields).name = (String *)0x0;
code_?:
            func_?(&(this->fields).name);
            (this->fields).isDeleted = 0;
            pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)data,0x2b,
                                MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                               );
            if (pOVar1 == (Object *)0x0) {
              (this->fields).data = (Byte__Array *)0x0;
            }
            else {
              pBVar4 = (Byte__Array *)func_?();
              if (pBVar4 == (Byte__Array *)0x0) goto code_?;
              (this->fields).data = pBVar4;
              iVar5 = func_?();
              if (iVar5 == 0) goto code_?;
            }
            func_?();
            pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)data,0x2d,
                                MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                               );
            if (pOVar1 == (Object *)0x0) goto code_?;
            if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
              piVar2 = (int32_t *)func_?();
              (this->fields).slotPosition = *piVar2;
              pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       ByteEnum,System::Object]::
                       Dictionary_2_System_ByteEnum_System_Object__get_Item
                                 ((Dictionary_2_System_ByteEnum_System_Object_ *)data,0x8a,
                                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                                 );
              if (pOVar1 == (Object *)0x0) goto code_?;
              if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class
                 ) {
                pbVar6 = (bool *)func_?();
                (this->fields).resellable = *pbVar6;
                pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         ByteEnum,System::Object]::
                         Dictionary_2_System_ByteEnum_System_Object__get_Item
                                   ((Dictionary_2_System_ByteEnum_System_Object_ *)data,0x45,
                                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                                   );
                if (pOVar1 == (Object *)0x0) goto code_?;
                if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class
                   ) {
                  piVar2 = (int32_t *)func_?();
                  (this->fields).priceGold = *piVar2;
                  pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           ByteEnum,System::Object]::
                           Dictionary_2_System_ByteEnum_System_Object__get_Item
                                     ((Dictionary_2_System_ByteEnum_System_Object_ *)data,0x89,
                                      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                                     );
                  if (pOVar1 == (Object *)0x0) goto code_?;
                  if ((pOVar1->klass->_0).element_class ==
                      (TypeInfo__System__Int32->_0).element_class) {
                    piVar2 = (int32_t *)func_?();
                    (this->fields).authorProfileID = *piVar2;
                    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             ByteEnum,System::Object]::
                             Dictionary_2_System_ByteEnum_System_Object__get_Item
                                       ((Dictionary_2_System_ByteEnum_System_Object_ *)data,0x8b,
                                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                                       );
                    if (pOVar1 == (Object *)0x0) goto code_?;
                    if ((pOVar1->klass->_0).element_class ==
                        (TypeInfo__System__Int32->_0).element_class) {
                      piVar2 = (int32_t *)func_?();
                      (this->fields).originalItemID = *piVar2;
                      (this->fields).purchased = 1;
                      (this->fields).isDefaultInvItem = 0;
                      return;
                    }
                  }
                }
              }
            }
          }
          else {
            pSVar7 = (String *)0x0;
            if (pSVar3->klass == TypeInfo__System__String) {
              pSVar7 = pSVar3;
            }
            if (pSVar7 != (String *)0x0) {
              (this->fields).name = pSVar7;
              pSVar7 = (String *)0x0;
              if (pSVar3->klass == TypeInfo__System__String) {
                pSVar7 = pSVar3;
              }
              if (pSVar7 != (String *)0x0) goto code_?;
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* InventoryItem(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::InventoryItem::InventoryItem__ctor_2
               (InventoryItem *this,int32_t itemID,
               Dictionary_2_System_Object_System_Object_ *itemData,MethodInfo *method)

{
  value = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  (value->fields).hasData = 1;
  (value->fields).purchased = 1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)value,ExceptionArgument__Enum_obj,unaff_EDI);
  (value->fields).itemID = itemID;
  this = (InventoryItem *)CONCAT13(0x70,this._0_3_);
  pOVar1 = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
  this_00 = itemData;
  if ((itemData != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (itemData,pOVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pOVar1 != (Object *)0x0)) {
    if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      piVar2 = (int32_t *)func_?();
      (value->fields).itemCategoryID = *piVar2;
      uStack_3._0_3_ = SUB43(TypeInfo__System__Byte,0);
      uStack_3 = (Byte__Class *)CONCAT13(0xf,(undefined3)uStack_3);
      pOVar1 = (Object *)func_?();
      pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this_00,pOVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar1 == (Object *)0x0) goto code_?;
      if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar2 = (int32_t *)func_?();
        (value->fields).itemTypeID = *piVar2;
        uStack_3._3_1_ = (undefined1)((uint)TypeInfo__System__Byte >> 0x18);
        uStack_3._0_2_ = SUB42(TypeInfo__System__Byte,0);
        uStack_3._0_3_ = CONCAT12(10,(undefined2)uStack_3);
        pOVar1 = (Object *)func_?();
        pSVar4 = (String *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (this_00,pOVar1,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pSVar4 == (String *)0x0) {
          (value->fields).name = (String *)0x0;
code_?:
          func_?();
          uStack_3 = (Byte__Class *)((int)&uStack_3 + 1);
          pOVar1 = (Object *)func_?(TypeInfo__System__Byte);
          pSVar4 = (String *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (this_00,pOVar1,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          if (pSVar4 == (String *)0x0) {
            (value->fields).description = (String *)0x0;
code_?:
            func_?();
            uStack_3 = (Byte__Class *)&uStack_3;
            pOVar1 = (Object *)func_?(TypeInfo__System__Byte);
            pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                               (this_00,pOVar1,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
            if (pOVar1 == (Object *)0x0) goto code_?;
            if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class)
            {
              pbVar5 = (bool *)func_?();
              bVar6 = *pbVar5;
              (value->fields).isDeleted = bVar6;
              if (bVar6 == 0) {
                this = (InventoryItem *)CONCAT13(0xb,this._0_3_);
                uStack_3 = TypeInfo__System__Byte;
                pOVar1 = (Object *)func_?();
                unaff_EBX = (InventoryItem *)
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Object,System::Object]::
                            Dictionary_2_System_Object_System_Object__get_Item
                                      (this_00,pOVar1,
                                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                      );
                itemData = (Dictionary_2_System_Object_System_Object_ *)TypeInfo__System__Byte;
                if (unaff_EBX == (InventoryItem *)0x0) {
                  (value->fields).data = (Byte__Array *)0x0;
                  itemID = 0;
                }
                else {
                  itemID = (int32_t)TypeInfo__System__Byte;
                  this = unaff_EBX;
                  pBVar7 = (Byte__Array *)func_?();
                  if (pBVar7 == (Byte__Array *)0x0) goto code_?;
                  (value->fields).data = pBVar7;
                  itemID = (int32_t)TypeInfo__System__Byte;
                  itemData = (Dictionary_2_System_Object_System_Object_ *)TypeInfo__System__Byte;
                  this = unaff_EBX;
                  itemID = func_?();
                  if (itemID == 0) goto code_?;
                }
                this = (InventoryItem *)&(value->fields).data;
                func_?();
                unaff_EBX = (InventoryItem *)((int)&itemID + 3);
                itemID = CONCAT13(0x26,(undefined3)itemID);
                pOVar1 = (Object *)func_?();
                pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                   (this_00,pOVar1,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   );
                if (pOVar1 == (Object *)0x0) goto code_?;
                if ((pOVar1->klass->_0).element_class !=
                    (TypeInfo__System__Boolean->_0).element_class) goto code_?;
                pbVar5 = (bool *)func_?();
                (value->fields).hasData = *pbVar5;
              }
              this = (InventoryItem *)CONCAT13(100,this._0_3_);
              pOVar1 = (Object *)func_?();
              pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                 (this_00,pOVar1,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              if (pOVar1 == (Object *)0x0) goto code_?;
              if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class
                 ) {
                pbVar5 = (bool *)func_?();
                (value->fields).resellable = *pbVar5;
                uStack_3 = TypeInfo__System__Byte;
                itemID = CONCAT13(0x4b,(undefined3)itemID);
                pOVar1 = (Object *)func_?();
                pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                   (this_00,pOVar1,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   );
                if (pOVar1 == (Object *)0x0) goto code_?;
                if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class
                   ) {
                  piVar2 = (int32_t *)func_?();
                  (value->fields).priceGold = *piVar2;
                  uStack_3 = TypeInfo__System__Byte;
                  itemData = (Dictionary_2_System_Object_System_Object_ *)
                             CONCAT13(0x68,itemData._0_3_);
                  pOVar1 = (Object *)func_?();
                  pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Object,System::Object]::
                           Dictionary_2_System_Object_System_Object__get_Item
                                     (this_00,pOVar1,
                                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                     );
                  if (pOVar1 == (Object *)0x0) goto code_?;
                  if ((pOVar1->klass->_0).element_class ==
                      (TypeInfo__System__Int32->_0).element_class) {
                    piVar2 = (int32_t *)func_?();
                    (value->fields).shopInventoryID = *piVar2;
                    uStack_3 = (Byte__Class *)
                               CONCAT31((int3)((uint)TypeInfo__System__Byte >> 8),0x66);
                    pOVar1 = (Object *)func_?();
                    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Object,System::Object]::
                             Dictionary_2_System_Object_System_Object__get_Item
                                       (this_00,pOVar1,
                                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                       );
                    if (pOVar1 == (Object *)0x0) goto code_?;
                    if ((pOVar1->klass->_0).element_class ==
                        (TypeInfo__System__Int32->_0).element_class) {
                      piVar2 = (int32_t *)func_?();
                      (value->fields).authorProfileID = *piVar2;
                      uStack_3._2_2_ = (undefined2)((uint)TypeInfo__System__Byte >> 0x10);
                      uStack_3._0_2_ = CONCAT11(0x6a,(char)TypeInfo__System__Byte);
                      pOVar1 = (Object *)func_?();
                      pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                               Object,System::Object]::
                               Dictionary_2_System_Object_System_Object__get_Item
                                         (this_00,pOVar1,
                                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                         );
                      if (pOVar1 == (Object *)0x0) goto code_?;
                      if ((pOVar1->klass->_0).element_class ==
                          (TypeInfo__System__Int32->_0).element_class) {
                        piVar2 = (int32_t *)func_?();
                        (value->fields).originalItemID = *piVar2;
                        uStack_3._3_1_ = (undefined1)((uint)TypeInfo__System__Byte >> 0x18);
                        uStack_3._0_2_ = SUB42(TypeInfo__System__Byte,0);
                        uStack_3._0_3_ = CONCAT12(0x22,(undefined2)uStack_3);
                        pOVar1 = (Object *)func_?();
                        bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Object,GUILoginHandler+PlanetData]::
                                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                                          ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *
                                           )this_00,pOVar1,
                                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                          );
                        if (bVar6 != 0) {
                          itemData = (Dictionary_2_System_Object_System_Object_ *)((int)&this + 3);
                          itemID = (int32_t)TypeInfo__System__Byte;
                          this = (InventoryItem *)&UNK_?;
                          pOVar1 = (Object *)func_?();
                          pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                   Object,System::Object]::
                                   Dictionary_2_System_Object_System_Object__get_Item
                                             (this_00,pOVar1,
                                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                             );
                          if (pOVar1 == (Object *)0x0) goto code_?;
                          if ((pOVar1->klass->_0).element_class !=
                              (TypeInfo__System__Boolean->_0).element_class) goto code_?;
                          pbVar5 = (bool *)func_?();
                          (value->fields).purchased = *pbVar5;
                        }
                        itemData = (Dictionary_2_System_Object_System_Object_ *)((int)&this + 3);
                        itemID = (int32_t)TypeInfo__System__Byte;
                        this = (InventoryItem *)&UNK_?;
                        pOVar1 = (Object *)func_?();
                        pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                 Object,System::Object]::
                                 Dictionary_2_System_Object_System_Object__get_Item
                                           (this_00,pOVar1,
                                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                           );
                        if (pOVar1 == (Object *)0x0) goto code_?;
                        if ((pOVar1->klass->_0).element_class ==
                            (TypeInfo__System__Boolean->_0).element_class) {
                          pbVar5 = (bool *)func_?();
                          (value->fields).isDefaultInvItem = *pbVar5;
                          uStack_3 = TypeInfo__System__Byte;
                          itemID = CONCAT13(0xc,(undefined3)itemID);
                          pOVar1 = (Object *)func_?();
                          bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Object,GUILoginHandler+PlanetData]::
                                  Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                                            ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_
                                              *)this_00,pOVar1,
                                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                            );
                          if (bVar6 == 0) {
                            return;
                          }
                          itemData = (Dictionary_2_System_Object_System_Object_ *)((int)&this + 3);
                          itemID = (int32_t)TypeInfo__System__Byte;
                          this = (InventoryItem *)&UNK_?;
                          pOVar1 = (Object *)func_?();
                          pSVar4 = (String *)
                                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                   Object,System::Object]::
                                   Dictionary_2_System_Object_System_Object__get_Item
                                             (this_00,pOVar1,
                                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                             );
                          if (pSVar4 == (String *)0x0) {
                            (value->fields).imagePath = (String *)0x0;
                            func_?();
                            return;
                          }
                          pSVar8 = (String *)0x0;
                          if (pSVar4->klass == TypeInfo__System__String) {
                            pSVar8 = pSVar4;
                          }
                          if (pSVar8 != (String *)0x0) {
                            (value->fields).imagePath = pSVar8;
                            pSVar8 = (String *)0x0;
                            if (pSVar4->klass == TypeInfo__System__String) {
                              pSVar8 = pSVar4;
                            }
                            if (pSVar8 != (String *)0x0) {
                              func_?();
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            pSVar8 = (String *)0x0;
            if (pSVar4->klass == TypeInfo__System__String) {
              pSVar8 = pSVar4;
            }
            if (pSVar8 != (String *)0x0) {
              (value->fields).description = pSVar8;
              pSVar8 = (String *)0x0;
              if (pSVar4->klass == TypeInfo__System__String) {
                pSVar8 = pSVar4;
              }
              if (pSVar8 != (String *)0x0) goto code_?;
            }
          }
        }
        else {
          pSVar8 = (String *)0x0;
          if (pSVar4->klass == TypeInfo__System__String) {
            pSVar8 = pSVar4;
          }
          if (pSVar8 != (String *)0x0) {
            (value->fields).name = pSVar8;
            pSVar8 = (String *)0x0;
            if (pSVar4->klass == TypeInfo__System__String) {
              pSVar8 = pSVar4;
            }
            if (pSVar8 != (String *)0x0) goto code_?;
          }
        }
      }
    }
code_?:
    func_?();
  }
code_?:
  func_?();
code_?:
  itemID = (int32_t)itemData;
  this = unaff_EBX;
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* InventoryItem(ShopItem) */

void Assembly-CSharp.dll::InventoryItem::InventoryItem__ctor_3
               (InventoryItem *this,ShopItem *itemToCopy,MethodInfo *method)

{
  (this->fields).hasData = 1;
  (this->fields).purchased = 1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if (itemToCopy != (ShopItem *)0x0) {
    (this->fields).itemID = (itemToCopy->fields).itemID;
    (this->fields).itemCategoryID = (itemToCopy->fields).itemCategoryID;
    (this->fields).itemTypeID = (itemToCopy->fields).itemTypeID;
    pSVar1 = (itemToCopy->fields).name;
    (this->fields).name = pSVar1;
    func_?(&(this->fields).name,pSVar1);
    pSVar1 = (itemToCopy->fields).description;
    (this->fields).description = pSVar1;
    func_?(&(this->fields).description,pSVar1);
    (this->fields).isDeleted = 0;
    pBVar2 = (itemToCopy->fields).data;
    (this->fields).data = pBVar2;
    func_?(&(this->fields).data,pBVar2);
    (this->fields).resellable = (itemToCopy->fields).resellable;
    (this->fields).priceGold = (itemToCopy->fields).priceGold;
    (this->fields).purchased = 1;
    (this->fields).isDefaultInvItem = 0;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

